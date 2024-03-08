#include<stdio.h>
#include<math.h>
int n,arr[1000],sum;
void num(int avg,int n);
float avg;
int main()
{
    printf("enter size of array:");
    scanf("%d",&n);
    printf("enter elements of array:");
    for(int i=0;i<n;i++)
    {scanf("%d",&arr[i]);
    sum=sum+arr[i];
    }
    printf("%d\n",sum);
    avg=sum/(1.0*n);
    num(avg,n);
}
void num(int avg,int n){
    for(int i=0;i<n;i++)
    {
        if(arr[i]>avg)
        printf("%d\t",arr[i]);
    }
}