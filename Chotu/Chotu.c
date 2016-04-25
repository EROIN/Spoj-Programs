#include<stdio.h>
#include<math.h>
int main()
{
    int t,a,b;
    scanf("%d",&t);
    while(t--)
    {
              scanf("%d%d",&a,&b);
              printf("%.3lf\n",2*sqrt(a*a-b*b));
    }
    return 0;
}
