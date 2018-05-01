#include<iostream>
using namespace std;
int main()
{
	int X,i;
	cin>>X;
	for(i=X;i<=(X+12);i++)
	{
		if(i%2==1)
		{
			cout<<i<<endl;
		}
	}
	return 0;
}
