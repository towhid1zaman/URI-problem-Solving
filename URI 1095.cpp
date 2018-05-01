#include<bits/stdc++.h>
using namespace std;
int main()
{
	int I=1,J=60;
	for(I=1;;I=I+3)
	{
		cout<<"I="<<I<<" "<<"J="<<J<<endl;
		J=J-5;
			if(J<0)
			break;	
	}
	
	return 0;
}
