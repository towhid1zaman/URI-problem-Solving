#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,Area,Parimeter,s;
	scanf(" %f %f %f",&a,&b,&c);
			Parimeter= a+b+c;
			Area=((a+b)*c)/2;
	
		if( (a+b>c) && (b+c>a) && (c+a>b) )
		{
			 
			printf("Perimetro = %.1f\n",Parimeter);
		}
		else
			printf("Area = %.1f\n",Area);
			
 return 0;
}
