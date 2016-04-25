#include<stdio.h>
int main()
{
    int a=1,r=0;
    long long int x;
    while(scanf("%lld",&x)&&x!=-1)
    {
    a=1,r=0;
    while(a<x)
    {
              r+=6;
              a+=r;
    }
    printf(a==x?"Y\n":"N\n");
    }
}
