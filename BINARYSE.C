#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,j,l,h,m,n,key;
	//read number of elements in the array
	printf("Enter number of elements in the array:\n");
	scanf("%d",&n);
	//read elements in the array
	printf("\nEnter elements in the array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	//read the element to be serched
	printf("\nEnter the element to be searched:\n");
	scanf("%d",&key);
	l=0;
	h=n-1;
	while(l<=h)
	{
		m=(l+h)/2;
		if(key==a[m])
		{
			printf("\n%d is found at index %d\n",key,m);
			break;
		}
		else if(key<a[m])
		{
			h=m-1;
		}
		else if(key>a[m])
		{
			l=m+1;
		}
	}
	if(l>h)
	{
		printf("\nElement %d is not present",key);
	}
	getch();
}