#include<stdio.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
              scanf("%d",&n);
              double x=(double)n/(double)(n+1);
              printf("%.8lf\n",x);
    }
}
