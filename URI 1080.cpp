#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,p,C=0;
	for(int i=1;i<=100;i++)
	{
		cin>>N;
		if(N>C)
		{
			C=N;
			p=i;
		}
	}
	cout<<C<<endl<<p<<endl;
	
	return 0;
}
