#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,j;
	cin>>N;
	int x,y;
	for(int i=0;i<N;i++)
	{
		int sum = 0;
		cin>>x>>y;
			if(x%2==1)
			{
				for(j=0;j<y;j++)
				{
					sum=sum+x;
					x=x+2;
				}
				cout<<sum<<endl;
			}

			else
			{
				for(j=0;j<y;j++)
				{

					sum=sum+x;
					x=x+3;

				}
				cout<<sum<<endl;
			}

	}
	return 0;
}
