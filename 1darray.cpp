#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i;
	printf("enter elements in onr-D array");
	for(i=0;i<10;i++)
	{
		scanf("%d,&a[i]");
	}
	printf("\n enter elements in array=\n");
	for(i=0;i<10;i++)
	{
		printf("\n%d",a[i]);
	}
	getch();
}
