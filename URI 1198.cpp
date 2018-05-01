#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long x,y;
		while(cin>>x>>y)
		{
			if(x>y)
			{
				cout<<x-y<<"\n";
			}
			else
			{
				cout<<y-x<<"\n";
			}
		}
		return 0;
}
