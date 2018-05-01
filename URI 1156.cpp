#include<bits/stdc++.h>
using namespace std;
int main()
{
	float s=0;
	float e,o;
	int i;
	for(i=2;i<=39;i++)
	{
		if(i % 2==1)
		{
			e=i;
		}
		else o=i;
		
		s=s+(o/e);
	}
	printf("%.2f\n",s+1);
	
	return 0;
}
