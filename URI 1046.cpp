#include<iostream>
using namespace std;
int main()
{
	int a,b,result;
	cin>>a>>b;
	if(a>b)
	{
		result = (b+24)-a;
		cout<<"O JOGO DUROU "<<result<<" HORA(S)"<<endl;
	}
	else if(a==b){
		cout<<"O JOGO DUROU 24 HORA(S)"<<endl;
	}
	else if(b>a)
	{
		result = b-a;
		cout<<"O JOGO DUROU "<<result<<" HORA(S)"<<endl;
	}
	
	
	return 0;
	
}
