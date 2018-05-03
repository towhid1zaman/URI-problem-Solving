#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{

    int n,i,T;
        cin>>T;
        for(i=0;i<T;i++)
        {
            //int ans=1;
            cin>>n;
            int ans=1;
               int root=sqrt(n);
            for(int j=2;j<=root;j++)
            {
                             if(n%j==0)
                             {
                                 ans++;
                                 break;
                             }
            }
            if(ans==1)
                    cout<<"Prime"<<endl;
            else
                cout<<"Not Prime"<<endl;
                        continue;

        }
        return 0;

}
