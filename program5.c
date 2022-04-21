#include<stdio.h>
int main( )
{
   int n, a=1, b=1, temp;

   printf("Enter the number");
   scanf("%d",&n);

  printf("Fibonacci series is %d %d ", a,b);

  while(a+b<=n)
    {
       temp=a;
       a=b;
       b=a+temp;
       printf("%d ",b);
    }
return 0;
}
