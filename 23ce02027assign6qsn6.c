#include <stdio.h>
#include <math.h>
int main() 
{
    int i, j, a, b;
    printf("Enter number of cities: ");
    scanf("%d", &a);
    printf("Enter number of days: ");
    scanf("%d", &b);
    float c[a][b];
    printf("Enter the temperature of cities:\n");
    for (i = 0; i < a; i++) 
    {
        for (j = 0; j < b; j++)
        scanf("%f", &c[i][j]);
    }
    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++)
        c[i][0] += c[i][j];
    }
    printf("The average temperatures are:\n");
    for (i = 0; i < a; i++)
        printf("%.02f\t", (c[i][0]) / b);

    return 0;
}
