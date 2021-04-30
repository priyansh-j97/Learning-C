#include <stdio.h>
#include <conio.h>

int main()
{
	printf("Fibonacci Series\n");
    int f=0;
    int s=1;
    int sum;
    int j;
    int i;
    printf("Enter no. of elements: ");
    scanf("%d",&j);
    printf("%d ", f);
    printf("%d ", s);
    for(i=0;i<j-2;i++)
    {
        sum=f+s;
        printf("%d ",sum);
        f=s;
        s=sum;
    }
}
