#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	while(1)
	{
		cin>>x;
		if(x>0)
		{
		for(int i=1;i<=x;i++)
			{
				cout << i;
				
				if (i == x)
				  cout << endl;
				else
				  cout << " ";
			}
			continue;
		}
		else
		{
			break;		
		}
	

	}
	return 0;
}

