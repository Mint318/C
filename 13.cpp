#include<stdio.h>
void main()
{
	int a,b,c,d,i;
	for(i=1000;i<=9999;i++)
	{
	a=i/1000;
	b=(i/100)%10;
	c=(i/10)%10;
	d=i%10;
	if(a*a*a*a+b*b*b*b+c*c*c*c+d*d*d*d==i)
	printf("%d  ",i);
	}

}