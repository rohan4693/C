// #include<Stdio.h>
// void rohan()
// {
//     int a,b,sum;
//     printf("Enter the no.");
//     scanf("%d %d",&a,&b);
//     sum=a+b;
//     printf("%d=sum\n",sum);

// }

// int main()
// {
//     rohan();
//     return 0;
// }

// #include<stdio.h>

// char name();
// int main()
// {
//     char n_;
//     n_=name();
//     printf("entered name %s",n_);
//     return 0;
// }

// char name()
// {
//     char n[30];
//     printf("enter your name\n");
//     scanf("%s",&n);
//     return n;
// }

#include <stdio.h>

int sum(int, int);
int main()
{
    int a, b,summ;
    printf("enter the value of a and b\n");
    scanf("%d %d", &a, &b);
    summ=sum(a,b);
    printf("sum =%d\n",summ);
    return 0;
}

int sum(int r, int t)
{
    return r + t;
}