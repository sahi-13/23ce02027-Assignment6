#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,a,b;
    printf("enter no of rows a:");
    scanf("%d",&a);
    printf("enter no of colomns b:");
    scanf("%d",&b);
    int m[a][b],w[b][a];
    printf("enter the elements of matrix:");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        scanf("%d",&m[i][j]);
    }
    for(i=0;i<b;i++)
    {
        for(j=0;j<a;j++)
        {
           w[i][j]=m[j][i];
        }
    }for(i=0;i<b;i++)
    {
        for(j=0;j<a;j++)
        printf("%d\t",w[i][j]);
        printf("\n");
    }
    
}