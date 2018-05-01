#include<stdio.h>
int main()
{
	int i,n,s=0;
	for(i=0;i<5;i++)
	{
		scanf("%d",&n);
		if(n%2==0)
		{
			s++;
		}
	}
	printf("%d valores pares\n",s);
	return 0;
}
