#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num[100];
	while(1)
	{
			for(int i=0;i<100;i++)
		{
			cin>>num[i];
		}
		if(num<0) break;
		
	
		
		if(num[0]=='0' && num[1]=='x')
		{
			printf("%d\n",num);
		}
		else{
			printf("0x%04X\n",num);
		}
	}
	
	return 0;
}
