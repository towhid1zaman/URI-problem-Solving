#include<iostream>
using namespace std;
int main()
{
	int i,N,X;
	cin>>N;
	for(i=0;i<N;i++)
	{
		cin>>X;
		if(X==0)
            {
                cout<<"NULL"<<endl;
            }
            else if(X>0)
            {
                if(X%2==0)
                    cout<<"EVEN POSITIVE"<<endl;
                else
                cout<<"ODD POSITIVE"<<endl;
            }
            else if(X<0)
            {
                if(X%2==0)
                    cout<<"EVEN NEGATIVE"<<endl;
                else
                    cout<<"ODD NEGATIVE"<<endl;
            }
	}
	return 0;
}
