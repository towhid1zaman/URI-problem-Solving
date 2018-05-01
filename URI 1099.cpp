#include<iostream>
using namespace std;
int main()
{
	int N;
	cin>>N;
	int x,y;
	for(int i=0;i<N;i++)
	{
		int sum=0;
		cin>>x>>y;
		if(y>x)
		{
		for(i=x;i<y;i++)
			{
				if(i%2==1)
				sum=sum+i;
			}
		}
		else if(x>y)
		{
		for(i=y;i<x;i++)
			{
				if(i%2==1)
				sum=sum+i;
			}
		}
		cout<<sum<<endl;
	}
	
	return 0;
}
