#include<stdio.h>
#include<conio.h>

int main()
{
	int a[]={1,2,3,4,5};
	int *ptr;
	ptr=a;
	
	/////////////////////////////////
	
	printf("Size of array a[]: %d",sizeof(a));
	printf("%d",a); //prints address of first element of array a[]
	printf("\n%d",a[0]); //prints value of first element of array a[]
	printf("\n%d",&a); //prints address of first element of array a[]
	printf("\n%d",&a[0]); //prints address of first element of array a[]
	
	/////////////////////////////////
	
	printf("\nSize of pointer ptr %d",sizeof(ptr));
	printf("\n%d",ptr); //prints value of pointer ptr, which is the address of array a[]
	printf("\n%d",&ptr); //prints address of pointer ptr
	
	return 0;
}
