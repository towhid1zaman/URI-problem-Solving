#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
            for(int i=0;i<T;i++)
            {
                    int x,y,r,b,c;
                    cin>>x>>y;
                    r=((3*x)*(3*x))+(y*y);
                    b=(2*(x*x))+((5*y)*(5*y));
                    c=(-100*x)+(y*y*y);
                    if(r>b && r>c)
                    {
                        cout<<"Rafael ganhou"<<endl;
                    }
                    else if(b>r && b>c)
                    {
                        cout<<"Beto ganhou"<<endl;
                    }
                    else if(c>r && c>b)
                    {
                        cout<<"Carlos ganhou"<<endl;
                    }
            }

            return 0;
}
