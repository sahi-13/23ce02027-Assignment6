#include<stdio.h>
int main()
{
    int i,j,m;
    printf("enter size of array:");
    scanf("%d",&m);
    int arr[m],x[m];
    printf("enter the elemnts:");
    for(i=0;i<m;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<m;i++)
    {
        x[i]=arr[m-1-i];
    }
    printf("reversed array is:");
    for(i=0;i<m;i++)
    printf("%d\t",x[i]);
}