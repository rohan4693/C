#include<stdio.h>
int main()
{
    int a=10 , b=30;
    int *p, *q;
    *p=20;
    p=&a; q=&b;
    printf("a=%d\nb=%d", *p,*q);
    printf("\n %d \n %d",p,q);
    printf("\n  a=%x \n  b=%x",&a,&b);
    printf("\n%d",a);
    printf("\n%x",p);
    return 0;
}