#include<iostream>
using namespace std;
int main()
{
	char N1[20];
	char N2[20];
	char N3[20];
	cin>>N1;
	cin>>N2;
	cin>>N3;
	
		if(N1[0]=='v')
		{
			if(N2[0]=='a')
				{
					if(N3[0]=='c')
					cout<<"aguia"<<endl;
					else
						cout<<"pomba"<<endl;
				}
			else if(N2[0]=='m')
				{
					if(N3[0]=='o')
					cout<<"homem"<<endl;
					else
						cout<<"vaca"<<endl;
				}
		}
		else if(N1[0]=='i')
		{
			if(N2[2]=='s')
			{
				if(N3[2]=='m')
					cout<<"pulga"<<endl;
					else
					 cout<<"lagarta"<<endl;	
			}
			else if(N2[1]=='n')
			{
				if(N3[2]=='m')
				cout<<"sanguessuga"<<endl;
				else
				cout<<"minhoca"<<endl;
			}
			
		}
		
		return 0;
}
