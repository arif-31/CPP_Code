#include <bits/stdc++.h>
using namespace std;
const int alphabet_size = 26;
// trienode node
struct trienode
{
    struct trienode *children[alphabet_size];
    //if isEndword is true that node represents
    // last character
    bool isEndWord;
};
// returns trienode node --->> initialized to null
struct trienode *getnode(void)
{
    struct trienode *pnode = new trienode;
    pnode->isEndWord = false;
    for (int i = 0; i < alphabet_size; i++)
        pnode->children[i] = NULL;
    return pnode;
};
// If not present, inserts key into trienode
// If the key is prefix of trienode node, just
// marks leaf node
void insert(struct trienode *root, string key)
{
    struct trienode *abc = root;
    for (int i = 0; i < key.size(); i++)
    {
        int index = key[i] - 'a';
        if (!abc->children[index])
            abc->children[index] = getnode();
        abc = abc->children[index];
    }
    abc->isEndWord = true;
}
// Returns true if key presents in trienode, else
// false
bool search(struct trienode *root, string key)
{
    struct trienode *abc = root;
    for (int i = 0; i < key.size(); i++)
    {
        int index = key[i] - 'a';
        if (!abc->children[index])
            return false;
        abc = abc->children[index];
    }
    return (abc != NULL && abc->isEndWord);
}
bool isEmpty(trienode *root)
{
    for (int i = 0; i < 26; i++)
        if (root->children[i])
            return false;
    return true;
}
// Recursive function to delete a key from given Trie
trienode *Delete(trienode *root, string key, int depth = 0)
{
    // If tree is empty
    if (!root)
        return NULL;
    // If last character of key is being processed
    if (depth == key.size())
    {

        // This node is no more end of word after
        // removal of given key
        if (root->isEndWord)
            root->isEndWord = false;
        // If given is not prefix of any other word
        if (isEmpty(root))
        {
            delete (root);
            root = NULL;
        }
        return root;
    }
    // If not last character, recur for the child
    // obtained using ASCII value
    int index = key[depth] - 'a';
    root->children[index] =
        Delete(root->children[index], key, depth + 1);

    // If root does not have any child (its only child got
    // deleted), and it is not end of another word.
    if (isEmpty(root) && root->isEndWord == false)
    {
        delete (root);
        root = NULL;
    }
    return root;
}
int main()
{
    string keys[] = {"the", "a", "there",
                     "answer", "any", "by",
                     "bye", "their", "hero", "heroplane"};
    int n = sizeof(keys) / sizeof(keys[0]);
    struct trienode *root = getnode();
    //trienode construct
    for (int i = 0; i < n; i++)
        insert(root, keys[i]);
    Delete(root, "a");
    string s;
    while (cin >> s)
    {
        search(root, s) ? cout << "YES\n" : cout << "NO\n";
    }
}