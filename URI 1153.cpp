#include<bits/stdc++.h>
using namespace std;
int main()

{
	int n,i,fact=1;
	cin>>n;
	 for(i=n;i>0;i--)
	 {
	 	fact*=i;
	 }
	 cout<<fact<<endl;
}
