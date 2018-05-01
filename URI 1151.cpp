#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,N[200];
	cin>>n;
	N[0]=0;
	N[1]=1;
		for(i=2;i<n;i++)
		N[i]=N[i-1]+N[i-2];
		cout<<"0";
		for(i=1;i<n;i++)
		{
			cout<<" "<<N[i];
		}
		cout<<"\n";
	return 0;
	
}
