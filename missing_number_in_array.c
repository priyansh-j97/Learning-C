#include<stdio.h>
#include<conio.h>

void missing_number(int*, int, int);

int main()
{
    int x,n;
    printf("Enter no. of values here: ");
    scanf("%d",&x);
    int array[x];
    for(int i=0;i<x;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter value to be searched here: ");
    scanf("%d",&n);
    missing_number(array,n,x);
}

void missing_number(int*array,int n, int x)
{
    if(n>=1 && n<=1000000)
        {
            for(int i=0; i<x ; i++)
            {
                if(array[i]==n && array[i]<=1000000 && array[i]>=1)
                {
                    printf("%d",i);
                }
            }
        }
}