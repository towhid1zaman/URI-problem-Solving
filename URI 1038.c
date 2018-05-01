#include<stdio.h>
int main()
{
    int X,Y;
    float Snack;
    scanf("%d %d",&X,&Y);
    float ar[5] = {4,4.50,5,2,1.50};
    Snack = ar[X-1]*Y;
    printf("Total: R$ %0.2lf\n",Snack);

    return 0;

}
