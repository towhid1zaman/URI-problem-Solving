#include<stdio.h>
int main()
{
    int time,AS;
    float result;

    scanf("%d%d",&time,&AS);
    result = (time*AS)/12.0;

    printf("%.3f\n",result);

    return 0;
}
