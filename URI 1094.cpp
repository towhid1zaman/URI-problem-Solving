#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,amount,Total = 0,coelhos=0,ratos=0,sapos=0;
	char c;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>amount>>c;
		Total=Total+amount;
			if(c=='C')
			{
				coelhos = coelhos + amount;
			}
			
			else if(c=='R')
			{
				ratos = ratos + amount;
			}
			
			else if(c=='S')
			{
				sapos = sapos + amount;
			}
		
		
	}
	float cp=(float)(coelhos*100)/Total;
	float rt=(float)(ratos*100)/Total;
	float sp=(float)(sapos*100)/Total;
	cout<<"Total: "<<Total<< " cobaias"<<endl;
	cout<<"Total de coelhos: "<<coelhos<<endl;
	cout<<"Total de ratos: "<<ratos<<endl;
	cout<<"Total de sapos: "<<sapos<<endl;
	printf("Percentual de coelhos: %.2f %\n",cp);
	printf("Percentual de ratos: %.2f %\n",rt);
	printf("Percentual de sapos: %.2f %\n",sp);
	
	return 0;
}
