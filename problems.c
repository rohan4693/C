//problem number 2
#include<stdio.h>
int main()
{
    int r;
    printf("enter the number \n");
    scanf("%d",&r);
    printf("%d digit",r>=0 && r<9);

    return 0;

}


//problem number 3
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter number\n");
    scanf("%d %d",&a ,&b);
    printf("a is %d \n",a>b);
    printf("b is %d \n",b>a);
    printf("%d equal",a==b);
    return 0;
}

