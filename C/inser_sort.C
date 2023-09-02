#include<stdio.h>
int insertion(int arr[],int n)
{
    int i,j,key;
    for(i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    return arr;
}
void main()
{
    int n,i;
    printf("\nEnter no.of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("\nArray Data:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nBefore Sorting:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    insertion(arr,n);
    printf("After Sorting:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}