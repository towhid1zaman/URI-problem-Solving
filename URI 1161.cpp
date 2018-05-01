#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int m,n;
	long long int f1=1,f2=1;
		while(scanf("%lld %lld",&m,&n)!=EOF)
		{
			f1=f2=1;
			for(int i=m;i>0;i--)
			{
				f1=f1*i;
			}
			for(int j=n;j>0;j--)
			{
				f2=f2*j;
			}
			long long int sum = f1 + f2;
			cout<<sum<<"\n";
			
		}
		
		return 0;
}
