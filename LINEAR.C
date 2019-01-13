#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100],n,i,key,c;
	clrscr();
	//read number of elements in a array
	printf("Enter number of elements in the array:\n");
	scanf("%d",&n);
	//read elements in the array
	printf("\nEnter elements in the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	//read array element to be searched
	printf("\nEnter element to be searched:\n");
	scanf("%d",&key);
	//search the element using linear search
	c=0;
	for(i=0;i<n;i++)
	{
		//check the key with each element of the array
		if(a[i]==key)
		{
			c=1;
			break;
		}
	}
	if(c==1)
	{
		printf("\nElement is found at %d",i);
	}
	else
	{
		printf("\nElement is not found");
	}
	getch();
	return 0;
}