#include<stdio.h>
#include<math.h>
// Number of digits in a number n = floor(log10(n)) +1 
int main()
{
    int t;
    long long int n,dig;
    scanf("%d",&t);
    while(t--)
    {
              scanf("%lld",&n);
              if(n==0||n==1)
              printf("1\n");
              else
              {
              double d=(log(2*M_PI*n)/2+n*(log(n)-1))/log(10);
              dig=floor(d)+1;
              printf("%lld\n",dig);
              }
    }
    return 0;
}
