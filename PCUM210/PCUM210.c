#include<stdio.h>
long long int a[1000005];
void pre()
{
     long long int i,temp=0;
     a[0]=0;
     for(i=1;i<=1000000;i++)
     {
     temp=(temp+i*i*i)%1000000003;
     a[i]=(a[i-1]+temp)%1000000003;
     }
}
int main()
{
    int t,n;
    pre();
    scanf("%d",&t);
    while(t--)
    {
              scanf("%d",&n);
              printf("%d\n",a[n]);
    }
    return 0;
}
