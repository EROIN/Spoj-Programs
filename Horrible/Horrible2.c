#include<stdio.h>
long long int a[100005],n,b[100005],v;
void update(long long int *a,long long int s,long long int v)
{
     while(s<=n)
     {
                *(a+s)+=v;
                s+=(s&-s);
     }
}
long long int read(long long int *a,long long int idx)
{
    long long int sum=0;
    while(idx>0)
    {
                sum+=*(a+idx);
                idx-=(idx&-idx);
    }
    return sum;
}
void range_update(long long int p,long long int q,long long int v)
{
     update(a,p,v);
     update(a,q+1,-v);
     update(b,p,v*(p-1));
     update(b,q+1,-v*q);
}
long long int query(long int p)
{
    return read(a,p)*p-read(b,p);
}
long long int find(long long int p,long long int q)
{
    return query(q)-query(p-1);
}
int main()
{
    long long int t,c,op,p,q,i;
    scanf("%lld",&t);
    while(t--)
    {
              scanf("%lld%lld",&n,&c);
              
              for(i=0;i<=n;i++)
              a[i]=b[i]=0;
              
              for(i=1;i<=c;i++)
              {
              scanf("%lld",&op); 
              if(op==0)
              {
                       scanf("%lld%lld%lld",&p,&q,&v);
                       range_update(p,q,v);
              }
              else
              {
                       scanf("%lld%lld",&p,&q);
                       printf("%lld\n",find(p,q));
              }
              }
    }
    return 0;
}
