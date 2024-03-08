#include<stdio.h>
#include<math.h>
void prime(int ll,int ul);
int main()
{
    int ll,ul;
    printf("enter lower limit:");
    scanf("%d",&ll);
    printf("enter upper limit:");
    scanf("%d",&ul);
    prime(ll,ul);
    }
 void prime(int ll,int ul)
{
     int i,j;
    for(i=ll;i<=ul;i++)
    { 
        int prime=1;
        int limit=sqrt(i);
        for(j=2;j<i;j++)
        {   
            if(i%j==0)
            {
            prime=0;
            break;
            }
        }
        if(prime==1)
        printf("%d\t",i);
    }
    }