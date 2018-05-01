#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e;
	cin>>a>>c>>b>>d;
	if(c>d)
	{
		d=d+60;
		e=d-c;
		if(a==b)
		{
		cout<<"O JOGO DUROU 24 HORA(S) "<<"E "<<e<<" MINUTO(S)"<<endl;
		}
		else if(a<b)
		{
		cout<<"O JOGO DUROU "<<b-a-1<<" HORA(S) "<<"E "<<e<<" MINUTO(S)"<<endl;
		}
		else if(a>b)
		{
		cout<<"O JOGO DUROU "<<(b+24)-a-1<<" HORA(S) "<<"E "<<e<<" MINUTO(S)"<<endl;
		}	
	}
	else
	{
		if(c<d)e=d-c;
		else e=0;
		if(a==b)
		{
		cout<<"O JOGO DUROU 24 HORA(S) "<<"E "<<e<<" MINUTO(S)"<<endl;
		}
		else if(a<b)
		{
		cout<<"O JOGO DUROU "<<b-a<<" HORA(S) "<<"E "<<e<<" MINUTO(S)"<<endl;
		}
		else if(a>b)
		{
		cout<<"O JOGO DUROU "<<(b+24)-a<<" HORA(S) "<<"E "<<e<<" MINUTO(S)"<<endl;
		}
	}
}
