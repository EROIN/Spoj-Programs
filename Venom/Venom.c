#include<stdio.h>
int main()
{
    int h,p,a,i,times,t;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%d%d%d",&h,&p,&a);
    if(h<=p)
    printf("1\n");
    else
    {
    double x=p-2*a;
    double y=a-h;
    double r=sqrt(x*x-8*y*p);
    long long int n=ceil((-x+r)/(2*p));
    printf("%lld\n",(int)2*n-1);
    }
    }
    //scanf("%d",&h);
    return 0;
}
              
