
//This program gives ovrflow for n,k>1000000 and hence must give WA. AMBIGIUTY!

#include<stdio.h>
long long int find(long long int n,long long int k)
{
     if(k>n-k)
     k=n-k;
     
     long long int i,num=1;
     for(i=0;i<k;i++)
     {
                     //printf("%lld %lld\n",num,dnm);
                     num=num*(n-i)/(i+1);
     }
     return num;
}
int main()
{
    long long int n,k,t;
    scanf("%lld",&t);
    while(t--)
    {
              scanf("%lld%lld",&n,&k);
              printf("%lld\n",find(n-1,k-1));
    }
    return 0;
}
