#include<stdio.h>
int main()
{
    double s,a,b,c,d,area;
    int t;
    scanf("%d",&t);
    while(t--)
    {
              scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
              s=(a+b+c+d)/2;
              area=sqrt((s-a)*(s-b)*(s-c)*(s-d));
              printf("%.2lf\n",area);
    }
    return 0;
}
