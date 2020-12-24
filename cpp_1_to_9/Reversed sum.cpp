/*
 * Code from
 * Ali Ashadullah Arif
 * IT-18031_*_2017-18
 * Dept.Of.ICT,MBSTU
 * Date:2020-04-28-16.04
 * uva - 713
 */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int  main()
{
	int t;
	cin>>t;
	while(t--) {
		string s1,s2;
		string s3,s4;
		vector<int>v;
		cin>>s1>>s2;
		int a=s1.size()-1;
		int aa=a;
		int b=s2.size()-1;
		int bb=b;
		int f=0;
		int c1=0;
		int c2=0;
		while(1) {
			if(s1[aa]!='0')
				break;
			--aa;
			c1++;
		}
		for(int i=a-c1,j=0; i>=0; --i,j++) {
			s3[j]=s1[i];
		}
		while(1) {
			if(s2[bb]!='0')
				break;
			--bb;
			c2++;
		}
		for(int i=b-c2,j=0; i>=0; --i,j++) {
			s4[j]=s2[i];
		}
		for(int i=0; i<=a-c1; i++)
			cout<<s3[i];
		cout<<endl;
		for(int i=0; i<=b-c2; i++)
			cout<<s4[i];
		cout<<endl;
		int m=max(a-c1+1,b-c2+1);
		//cout<<"m = "<<m<<endl;
		int carry=0,sum=0;
		string S="";
		string ff;
		int fn;
		for(int i=-1; i>=-10; --i) {
			s3[i]=0;
			s4[i]=0;
		}
		int la=a-c1+1;
		int lb=b-c2+1;
		int ab;
		if(la>lb)
		ab=
		
		for(int i=la-1,j=lb-1; i>=0,j>=0; --i,--j) {

			int x=s3[i]-48;
			int y=s4[j]-48;
			if(x<0)
			x=0;
			if(y<0)
			y=0;
			//cout<<s3[i]<<" = "<<x<<","<<s4[i]<<" = "<<y<<endl;
			cout<<x<<" "<<y<<endl;
			  
			sum=x+y+carry;
			//cout<<sum<<endl;
			v.push_back(sum%10);
			//ff[i]=48+fn;
			carry=sum/10;
		}
		for(int  i=v.size()-1;i>=0; --i)
			cout<<v[i]<<" ";
		cout<<endl;
		cout<<S<<endl;
	}
}
