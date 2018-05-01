#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n;
	for(int i=0;i<3;i++)
	{
		cin>>m>>n;
		if(m>0 && n>0)
		{
			if(m>n){
			int sum=0;
			for(int j=n;j<=m;j++)
			{
				cout<<j<<" ";
				sum=sum+j;
			}
			cout<<"Sum="<<sum<<endl;
		}
		else if(m<n){
			int sum=0;
			for(int j=m;j<=n;j++)
			{
				cout<<j<<" ";
				sum=sum+j;
			}
			cout<<"Sum="<<sum<<endl;
		}
		}
		if(m==0 || n==0)
			break;
	}
	
	return 0;
}
