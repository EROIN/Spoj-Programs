#include<stdio.h>
int main()
{
    long int n,num=0;
    int t;
    scanf("%d",&t);
    while(t--)
    {
              scanf("%ld",&n);
              num^=n;
    }
    printf("%ld\n",num);
    scanf("%d",&t);
    return 0;
}
