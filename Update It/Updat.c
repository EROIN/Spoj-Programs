#include<stdio.h>
int a[10005],n,val;
void update(int s)
{
     while(s<=n)
     {
                //printf("%d %d\n",s,val);
                a[s]+=val;
                s+=(s&-s);
     }
}
int read(int idx)
{
    int sum=0;
    while(idx>0)
    {
              sum+=a[idx];
              idx-=(idx&-idx);
    }
    return sum;
}
int main()
{
    int t,u,i,s,e;
    scanf("%d",&t);
    while(t--)
    {
              scanf("%d%d",&n,&u);
              for(i=0;i<=n;i++)
              a[i]=0;
              for(i=1;i<=u;i++)
              {
              scanf("%d%d%d",&s,&e,&val);
              s++;
              e++;
              update(s);
              e++;
              val=-val;
              update(e);
              }
              scanf("%d",&u);
              for(i=1;i<=u;i++)
              {
              scanf("%d",&s);
              printf("%d\n",read(++s));
              }
    }
    return 0;
}
