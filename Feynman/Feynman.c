#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)&&n)
    {
          int a=0;
          while(n>0)
          {
                  a+=n*n;
                  n--;
          }  
          printf("%d\n",a);
    }
}
