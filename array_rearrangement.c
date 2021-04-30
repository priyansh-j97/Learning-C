#include<stdio.h>

void print_array(int*,int);

int main()
{
    int n;
    printf("Enter no. of elements here: ");
    scanf("%d",&n);
    int arr[n], temp[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        temp[i]=-1;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0)
        {
            temp[arr[i]]=arr[i];
        }
    }
    print_array(arr,n);
    print_array(temp,n);
    return 0;
}

void print_array(int *a, int n)
{
    printf("The array is: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}