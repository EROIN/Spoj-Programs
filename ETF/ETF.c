#include<stdio.h>
int find(int n)
{
    int i,ans=n;
    for(i=2;i*i<=n;i++)
    if(n%i==0)
    {
              while(n%i==0)
              n=n/i;
              ans=ans-ans/i;
    }
    if(n>1)
    ans=ans-ans/n;
    return ans;
}
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
              scanf("%d",&n);
              printf("%d\n",find(n));
    }
    return 0;
}
