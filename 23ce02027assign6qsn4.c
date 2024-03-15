#include<stdio.h>
int main()
{
    int n,m,i,j;
    int subset;
    printf("enter size of array:");
    scanf("%d",&n);
    printf("enter size of x:");
    scanf("%d",&m);
    int arr[n],x[m];
    printf("enter elements of array:");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("enter elements of x:");
    for(i=0;i<m;i++)
    scanf("%d",&x[i]);
    for(i=0;i<m;i++)
    {   
       int found=0;
        for(j=0;j<n;j++)
        {if(x[i]==arr[j])
        { found=1;
        break;
        }
        
    } 
    if(subset==0){
        subset=0;
    break;
    }
}
if(subset==0)
        printf("x is not subset of array\n");
else
        printf("x  subset of array");
}
