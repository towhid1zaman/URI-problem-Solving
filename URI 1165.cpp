#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,i,T;
        cin>>T;
        for(i=0;i<T;i++)
        {
            int ans=0;
            cin>>n;
            for(int j=2;j<=n/2;j++)
            {
                             if(n%j==0)
                             {
                                 ans++;
                                 break;
                             }
            }
            if(ans==0)
                    cout<<n<<" eh primo"<<endl;
            else
                cout<<n<<" nao eh primo"<<endl;
                continue;

        }
        return 0;

}
