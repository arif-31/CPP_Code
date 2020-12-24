// CPP program for finding rearrangement of n
// that is divisible by n
#include<bits/stdc++.h>
using namespace std;

// perform hashing for given n
void storeDigitCounts(int n, vector<int> &hash)
{
	// perform hashing
	while (n) {
		hash[n%10]++;
		n /= 10;
	}
}

// check whether any arrangement exists
int rearrange (int n)
{
	// Create a hash for given number n
	// The hash is of size 10 and stores
	// count of each digit in n.
	vector<int> hash_n(10, 0);
	storeDigitCounts(n, hash_n);

	// check for all possible multipliers
	for (int mult=2; mult<10; mult++) {
		int curr = n*mult;

		vector<int> hash_curr(10, 0);
		storeDigitCounts(curr, hash_curr);

		// check hash table for both.
		// Please refer below link for help
		// of equal()
		// https://www.geeksforgeeks.org/stdequal-in-cpp/
		if (equal(hash_n.begin(), hash_n.end(),
				  hash_curr.begin()))
			return curr;
	}
	return -1;
}

// driver program
int main()
{
	int n ;
	cin>>n;
	cout << rearrange(n);
	return 0;
}
