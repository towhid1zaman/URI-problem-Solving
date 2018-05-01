#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	float ave , a,b,c;
	for(int i=0;i<N;i++)
	{
		cin>>a>>b>>c;
		ave = ((a*2)+(b*3)+(c*5))/10;
		printf("%.1f\n",ave);
	}
	
	return 0;
	
}
