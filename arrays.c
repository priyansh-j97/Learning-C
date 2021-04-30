#include<stdio.h>
#include<conio.h>
int main()
{
    printf("Hello World!\n");

    ////////////////////////////////

    printf("Printing Array:\n");
    int a[]={5,2,6};
    int i;
    for(i=0;i<3;i++)
    {
        printf("%d ",a[i]);
    } 
    printf("\n%d",a[3/2]);
    return 0;
}
