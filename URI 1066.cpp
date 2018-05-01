#include<iostream>
using namespace std;
int main()
{
	int i,number,e=0,o=0,p=0,n=0;
	for(i=0;i<5;i++)
	{
		cin>>number;
		if(number%2==0)e++;
		else o++;
		if(number>0)p++;
		else if(number<0) n++;
	}
	cout<<e<<" valor(es) par(es)"<<endl;
	cout<<o<<" valor(es) impar(es)"<<endl;
	cout<<p<<" valor(es) positivo(s)"<<endl;
	cout<<n<<" valor(es) negativo(s)"<<endl;
	
	return 0;
}
