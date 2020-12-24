#include<bits/stdc++.h>
using namespace std;
int BubbleArray[5009];
int n;
bool swapped;
int BubbleSort(int B[],int n)
{
	int count=0;
	swapped=true;
	//int l=n;
	//cout<<l<<endl;
	while(swapped!=false) {
		//cout<<"1"<<endl;
		swapped=false;
		count=count+1;
		for(int i=1; i<=n-1; i++) {
		//	cout<<"2"<<endl;
			if(B[i]>B[i+1]) {
			//	cout<<"3"<<endl;
				swap(B[i+1],B[i]);
				swapped=true;
			}
		}
	}
	return count;
}
int main()
{
	int n;
	cin>>n;
	for(int i=1; i<=n; i++)
		cin>>BubbleArray[i];
	cout<<BubbleSort(BubbleArray,n)<<endl;
}
