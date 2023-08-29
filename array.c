#include<stdio.h>
int main ()
{
    int a[5], b[5], sum[5];
    for(int i=0; i<5; i++)
    {
        printf("\n enter the values of 1st array");
        scanf("%d", &a[i]);}

    for(int i=0; i<5; i++)
    {
        printf("enter the values of 2nd array\n ");
        scanf("%d", &b[i]);}

    for(int i=0; i<5; i++)
    {
        sum[i]=a[i]+b[i];
        printf("\n i= %d = sum of array is %d",i,sum[i]);
    }
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int class[2][3];
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             scanf("%d", &class[i][j]);
//         }
        
//     }
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d \t", class[i][j]);
//         }
//         printf("\n");
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             printf("%d \t", class[j][i]);
//         }
//         printf("\n");
//     }
//     return 0;
// }