#include<stdio.h>
int main()
{
    int a[10],n,i,j,minindex,temp;

    printf("Enter the number of elements :");
    scanf("%d",&n);

    printf("Enter the elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n-1;i++)
    {
        minindex=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[minindex])
            {
                minindex=j;
            }
        }
        temp=a[i];
        a[i]=a[minindex];
        a[minindex]=temp;
    }
    printf("The sorted array is :");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}