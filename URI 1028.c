#include<stdio.h>
int main()
{

    int i, n, a, b;

    int divided, divisor, c;
    scanf("%d", &n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d%d", &a, &b);
        if(b > a){
            divided = b;
            divisor = a;
        }else{
            divided = a;
            divisor = b;
        }
        while(divided % divisor != 0)
        {
           c = divided % divisor;
            divided = divisor;
            divisor = c;
        }
		printf("%d\n", divisor);
    }
    return 0;
}
