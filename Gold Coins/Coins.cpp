#include<iostream>
long long data[100000001];
long long find(unsigned n)
{
    if(n<100000001)
    {
                   if(data[n])
                   return data[n];
                   data[n]=find(n/2)+find(n/3)+find(n/4);
                   return data[n];
    }
    else
        return find(n/2)+find(n/3)+find(n/4);
}
main()
{
      long long n;
      for(int i=1;i<12;i++)
      data[i]=i;
      data[12]=13;
      for(int i=13;i<100000001;i++)
      data[i]=0;
      while(scanf("%lld",&n)!=EOF)
      {
                  n==0?printf("0\n"):printf("%lld\n",find(n));
      }
      scanf("%d",&n);
}
