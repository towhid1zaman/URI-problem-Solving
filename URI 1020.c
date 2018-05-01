#include<stdio.h>
int main()
{
    int n,y=0,m=0,d=0;

    scanf("%d",&n);
    y=n/365;
    n=n%365;
    m=n/30;
    d=n%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,d);

    return 0;
}
