#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	while(1)
	{	int sum=0;
		cin>>x;
		if(x==0) 
			break;
				if(x%2!=0)x++;
			for(int i=0;i<5;i++)
			{
				sum=sum+x;
				x=x+2;
			}
			cout<<sum<<"\n";
	
		
		
	}
	
	return 0;
} 
