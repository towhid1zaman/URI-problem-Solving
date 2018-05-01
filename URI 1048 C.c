#include<stdio.h>
int main()
{
	double a;
	double NS,ME;
	char p = '%';
	scanf("%lf",&a);
	if(a>=0 && a<=400.00)
	{
		int percentage = 15;
		ME=((a*percentage)/100);
		NS=a+ME;
		printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d%c",NS,ME,percentage,p);
	}
	else if(a>=400.01 && a<=800.00)
	{
		int percentage = 12;
		ME=((a*percentage)/100);
		NS=a+ME;
		printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d%c",NS,ME,percentage,p);
	}
	else if(a>=800.01 && a<1200.00)
	{
		int percentage = 10;
		ME=((a*percentage)/100);
		NS=a+ME;
		printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d%c",NS,ME,percentage,p);
	}
	else if(a>=1200.01 && a<=2000.00)
	{
		int percentage = 7;
		ME=((a*percentage)/100);
		NS=a+ME;
		printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d%c",NS,ME,percentage,p);
	}
		else if(a>2.000)
	{
		int percentage = 4;
		ME=((a*percentage)/100);
		NS=a+ME;
		printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d%c",NS,ME,percentage,p);
	}
	
	return 0;
}
