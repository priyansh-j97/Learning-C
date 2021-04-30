#include<stdio.h>

void rotate(int*,int,int*,int);
void printarray(int*,int);

int main()
{
	int d;
	printf("Enter no. of rotation here: ");
	scanf("%d",&d);
	int a[5]={1,2,3,4,5};
	int b[d];
	int k=(sizeof(a)/sizeof(a[0]))-d; //length of the array
	rotate(a,d,b,k);
	printarray(a,sizeof(a));
	return 0;
}

void rotate(int *a, int d, int *b, int k) //int *a and int a[] are the same
{
	for(int i=0;i<d;i++) //copying of first section of sliced array
	{
		b[i]=a[i];
	}

	for(int i=0;i<k;i++) //shifting of second section of sliced array
	{
		a[i]=a[i+d];
	}

	for(int i=0;i<d;i++,k++) //pasting of values
	{
		a[k]=b[i];
	}
}

void printarray(int a[], int n)
{
	for(int i=0;i<n/4;i++) //printing the final array
	{
		printf("%d ",a[i]);
	}
}