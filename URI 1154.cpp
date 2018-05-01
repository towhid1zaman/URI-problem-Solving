#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int n;
	float sum=0;
	int count=0;
	float ave;
	while(1)
	{
		cin>>n;
		if(n>0)
		{
			sum=sum+n;
			count++;
				continue;
		}
		else 
			break;
	}
	ave=(sum/count);
	printf("%.2f\n",ave);
}
