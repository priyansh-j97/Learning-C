#include<stdio.h>
#include<conio.h>

int main()
{
	int b=88;
	int i;
	int a[5]={1,2,3,4,5};
	for(i=0;i<5;i++)
	{
		printf("%d ",&a[i]);
	}
	printf("\n%d",&i);
	printf("\n%d",sizeof(&b));
	printf("\n%d\n\n",&a);
	printf("\n%p",&b);
	
	//////////////////////////////
	
	printf("\n%d",sizeof(a)); //display size of array a[] in bytes
	printf("\nSize of an integer: %d",sizeof(int)); //display size of an integer in bytes
	
	/////////////////////////////
	
	int x;
	int *y=&x;
	printf("\n\n%d",y);
	printf("\n%d %d",sizeof(x),sizeof(y));
	printf("\n%d",sizeof(a));
	
	return 0;
}
