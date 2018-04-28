#include<stdio.h>
int main()
{
    char name[30];
    double salary,sale,TOTAL;
    gets(name);
    scanf("%lf%lf", &salary,&sale);

    TOTAL = salary + (sale*15)/100;
    printf("TOTAL = R$ %0.2lf\n", TOTAL);

    return 0;
}
