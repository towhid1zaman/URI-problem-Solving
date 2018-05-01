#include<iostream>
using namespace std;
int main()
{
	int i,c=0;
	float sum=0;
	float N;
	for(i=0;i<6;i++)
	{
		cin>>N;
		if(N>=0){
			c++;
			sum=sum+N;
		}
		
	}
	cout<<c<<" valores positivos"<<endl;
	printf("%.1f",sum/c);
	return 0;
}
