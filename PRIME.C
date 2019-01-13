#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,c;
	printf("enter a number");
	scanf("%d",&n);
	c=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		c=c+1;
	}
	if(c==2)
	{
		printf("prime");
	}
	else
	{
		printf("not prime");
	}
	getch();
}