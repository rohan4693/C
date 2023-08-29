// #include<stdio.h>
// int main()
// {
//     char name;
//     printf(" enter your class names");
//     scanf("%c",&name);
//     switch(name)
//     {
//         case 'r' :printf("your roll number is 1\n");
//          break;
//         case 'h' :printf("your roll number is 2\n");
//          break;
//         case 'v' :printf("your roll number is 3\n");
//          break;
//         case 'k' :printf("your roll number is 4\n");
//          break;
//         case 'a' :printf("your roll number is 5\n");
//          break;
//         default : printf("not valid\n");
//     }
//  return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int i;
//     for(i=10;i>=1;i=i-1)
//     {
//         printf("%d",i);
//     }
//     return 0;
// }
// #include<stdio.h>
// void namaste();
// void bonjor();
// int main()
// {
//     char a;
//     printf("enter i for indian or f for french\n");
//     scanf("%c",&a);
//     if (a=='i'){
//         namaste();
//     }
//     else{
//     bonjor();
//     }
//     return 0;
// }
// void namaste(){
//      printf("namaste\n");
//      bonjor();
// }
// void bonjor(){
//     printf("bonjor\n");
// }
// #include<stdio.h>
// void rohan(int n);
// int main()
// {
//     int n;
//     printf("enter the value of n\n");
//     scanf("%d",&n);
//     rohan(n);
// }
// void rohan(int x){
//     for (int i=0;i<=10;i++){
//         printf("%d \n",i*x);
//     }
// }
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int a=2;
//     printf("%f",pow(a,2));
//     return 0;
// }
// #include<stdio.h>
// #include<math.h>
// void printhello(int count);
// int main()
// {
//     printhello(10);
//     return 0;
// }

// void printhello(int count){
//     if (count == 0){
//         return;
//     }
//     printf("hello world\n");
//     printhello(count-1);
// }
// #include<stdio.h>
// #include<math.h>
// int fact(int n);
// int main ()
// {
//     printf("factorial is %d",fact(3));
//     return 0;
// }
// int fact(int n){
//     if (n==1){
//         return 1;
//     }
//     int nm1= fact(n-1);
//     int fn= nm1*n;
//     return fn;
// }
// #include<stdio.h>
// #include<math.h>
// float convertTemp(float celsius);
// int main ()
// {
//     float far = convertTemp(37);
//     printf("%f",far);
//     return 0;
// }
// float convertTemp(float celsius){
//     float far= celsius*(9.0/5.0)+32;
//     return far;
// }
// #include<stdio.h>
// int calPer(int maths,int physics,int chemistry);
// int main()
// {
//     int maths=57;
//     int physics=71;
//     int chemistry=87;
//     printf("%d is percentage",calPer(maths,physics,chemistry));
//     return 0;
// }
// int calPer(int maths,int physics,int chemistry){
//     int per=((maths+physics+chemistry)/3);
//     return per;
// }
// #include<stdio.h>
// int fib(int n);
// int main ()
// {
//     fib(6);
//     return 0;
// }
// int fib(int n){
//        if (n == 0){
//            return 0;
//        }
//        if ( n == 1){
//           return 1;
//        }

//     int fibnm1 = fib(n-1);
//     int fibnm2 = fib(n-2);
//     int fibn = fibnm1 +fibnm2;
//     printf(" fib of %d is %d\n",n,fibn);
//     return fibn;
// }
// #include<stdio.h>
// int main ()
// {
//     int age=20;
//     int *ptr=&age;
//     printf("%p\n",&age);
//     printf("%u\n",&age);
//     return 0;
// }
// #include<stdio.h>
// void swap(int a, int b);
// int main()
// {
//     int x=3; int y=5;
//     swap(x,y);
//     printf("x=%d & y=%d\n",x,y);
//     return 0;
// }
// void swap(int a, int b){
//     int t=a;
//     a=b;
//     b=t;
//     printf("a=%d & b=%d\n",a,b);
// }
// #include <stdio.h>
// char fun();
// int main ()
// {
//     fun();
//     return 0;
// }
// char fun(){
//     char c;
//     printf("enter a charachter \n");
//     scanf("%c",&c);
//     printf("%c",c);
//     return 'c';
// }
// NO ARGUMENT AND WITHOUT RETURN
// #include<stdio.h>
// void function(int* , int* );
// int main()
// {
//     int a=5,b=7;
//     function(&a,&b);
//     printf("a=%d b=%d \n",a,b);
//     return 0;
// }
// void function(int* a,int* b){
//      *a=7,*b=5;
//     printf("a=%d b=%d\n",*a,*b);
// }
// #include <stdio.h>
// void sum();
// void sub();
// void mult();
// void div();

// void main()
// {
//     sum();

//     sub();

//     mult();

//     div();

// }
// void sum()
// {
//     int a = 5, b = 15, sum = 0;
//     sum = a + b;
//     printf("%d = sum\n", sum);
// }
// void sub()
// {
//     int a = 5, b = 5, sub = 0;
//     sub = a - b;
//     printf("%d = sub\n", sub);
// }
// void mult()
// {
//     int a = 5, b = 5, mult = 0;
//     mult = a * b;
//     printf("%d = mult\n", mult);
// }
// void div()
// {
//     int a = 5, b = 5, div = 0;
//     div = a % b;
//     printf("%d = div\n", div);
// }
// NO ARGUMENT AND WITH RETURN
// #include<stdio.h>
// int sum();

// void main()
// {
//     int s;
//     s = sum();
//     printf("sum of a+b=%d \n",s);
// }
// int sum(){
//     int a,b;
//     printf("enter the value of a and b\n");
//     scanf("%d %d",&a,&b);
//     return a+b;
// }
// WITH ARGUMENT AND WITHOUT RETURN
// #include<stdio.h>
// void mult(float,float);
// void main()
// {
//     float a, b;
//     printf("enter a and b\n");
//     scanf("%f %f\n",&a, &b);
//     mult(a,b);
// }
// void mult(float a, float b){
//     float m;
//     m= a*b;
//     printf("%f\n",m);
// }
// WITH ARGUMENT AND WITH RETURN
// #include <stdio.h>
// int tocheck(int);
// void main()
// {
//     int x;
//     printf("enter the value of x \n");
//     scanf("%d", &x);
//     tocheck(x);
// }
// int tocheck(int a)
// {
//     int b;
//     if (a % 2 == 0)
//     {
//         printf("prime\n");
//     }
//     else
//     {
//         printf("odd\n");
//     }
//     return b;
// }
#include<stdio.h>
int main()
{
    getchar();
    getch();
    int a=5, b=10;
    printf("%d",a+b);

    return 0;
}