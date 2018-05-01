#include<iostream>
using namespace std;
int main()
{
	int i,count=0;
	double N;
	for(i=0;i<6;i++)
	{
		cin>>N;
		if(N>=0){
			count++;
		}
	}
	cout<<count<<" valores positivos"<<endl;
	
	return 0;
}
