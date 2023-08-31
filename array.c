// #include<stdio.h>
// int main ()
// {
//     int a[5], b[5], sum[5];
//     for(int i=0; i<5; i++)
//     {
//         printf("\n enter the values of 1st array");
//         scanf("%d", &a[i]);}

//     for(int i=0; i<5; i++)
//     {
//         printf("enter the values of 2nd array\n ");
//         scanf("%d", &b[i]);}

//     for(int i=0; i<5; i++)
//     {
//         sum[i]=a[i]+b[i];
//         printf("\n i= %d = sum of array is %d",i,sum[i]);
//     }
//     return 0;
// }

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
// #include<stdio.h>
// int main()
// {
//     int a[3][3], b[3][3],c[3][3], i, j;
//     printf("Enter the values for first matrix \n");
//     for(i=0; i<3; i++)
//     {
//         for(j=0; j<3; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     printf("Enter the values for seconf matrix \n");
//     for(i=0; i<3; i++)
//     {
//         for(j=0; j<3; j++)
//         {
//             scanf("%d", &b[i][j]);
//         }
//     }
//     printf("first matrix \n");
//     for(i=0; i<3; i++)
//     {
//         for(j=0; j<3; j++)
//         {
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("second matrix \n");
//     for(i=0; i<3; i++)
//     {
//         for(j=0; j<3; j++)
//         {
//             printf("%d ",b[i][j]);
//         }
//         printf("\n");
//     }
//     printf("added matrix \n");
//     for(i=0; i<3; i++)
//     {
//         for(j=0; j<3; j++)
//         {
//             c[i][j]=a[i][j]+ b[i][j];
//             printf("%d ",c[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }



//multiplying two matrix
// #include<stdio.h>
// int main()
// {
//     int a[3][3], b[3][3],c[3][3], i, j, k,sum;
//     printf("\n enter the first matrix=");
//     for(i=0; i<3; i++)
//     {
//         for(j=0; j<3; j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("\n enter the second matrix=");
//     for(i=0; i<3; i++)
//     {
//         for(j=0; j<3; j++)
//         {
//             scanf("%d",&b[i][j]);
//         }
//     }
//     printf("first matrix= \n");
//     for(i=0; i<3; i++)
//     {
//         for(j=0; j<3; j++)
//         {
//             printf("%d\t",a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("second matrix= \n");
//     for(i=0; i<3; i++)
//     {
//         for(j=0; j<3; j++)
//         {
//             printf("%d\t",b[i][j]);
//         }
//         printf("\n");
//     }
//     printf("multiplied matrix=\n");
//     for(i=0; i<3; i++)
//     {
//         for(j=0; j<2; j++)
//         {
//             sum=0;
//             for(k=0;k<3;k++)
//             {
//                 sum=sum+a[i][k]*b[j][k];
//                 c[i][j]=sum;
//             }
//         }
//         printf("\n");
//     }
//     for(i=0; i<3;i++)
//     {
//         for(j=0; j<3; j++)
//         {
//             printf("%d\t",c[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// strings in Array
//  #include<stdio.h>
//  int main()
//  {
//      char a[]={"rohan singh"};
//      printf("%s",a);
//      return 0;
//  }

// #include<stdio.h>
// int main()
// {
//     char a[10][10];
//     gets(a);
//     printf("%s",a);
//     return 0;
// }

// counting the length of the string using strlen
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     unsigned count = 0, i = 0;
//     char name[30];
//     printf("enter the name= \n");
//     gets(name);
//     count = strlen(name);
//     puts(name);
//     printf("length of the string =%d", count);
//     return 0;
// }

//counting the length of the string using strlen
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     unsigned count=0, i=0;
//     char name[30];
//     printf("enter the name= \n");
//     gets(name);
//     while(name[i] != '\0')
//     {
//         count++;
//         i++;
//     }
//     puts(name);
//     printf("length of the string =%d",count);
//     return 0;
// }

//counting the length of the string using strlen
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     int l1,l2;
//     char a[30]; char b[10];
//     gets(a);
//     gets(b);
//     // strcat(a,b);
//     l1=strlen(a);
//     l2=strlen(b);
//     for(int i=0; i<=l2; i++)
//     {
//         a[l1+i]=b[i];
//     }
//     printf("%s \n", a);
//     puts(a);
//     return 0;
// }
