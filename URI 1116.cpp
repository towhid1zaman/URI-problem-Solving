#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	double x,y;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x>>y;
		if(y==0) cout<<"divisao impossivel"<<endl;
		else
		printf("%.1lf\n",x/y);
	}
	return 0;
}
