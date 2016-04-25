#include<stdio.h>
long long data[1000000];
long long find(unsigned n)
{
    if(n<1000000)
    {
                   if(data[n])
                   return data[n];
                   data[n]=find(n/2)+find(n/3)+find(n/4);
                   return data[n];
    }
    else
        return find(n/2)+find(n/3)+find(n/4);
}
int main()
{
      long long n;
      int i;
      for(i=1;i<12;i++)
      data[i]=i;
      data[12]=13;
      for(i=13;i<1000000;i++)
      data[i]=0;
      while(scanf("%lld",&n)!=EOF)
      n==0?printf("0\n"):printf("%lld\n",find(n));
      scanf("%d",&n);
      return 0;
}
