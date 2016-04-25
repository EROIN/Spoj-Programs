#include<stdio.h>
int coprime(int a,int b)
{
    int t;
    while(b)
    {
       t=a%b;
       a=b;
       b=t;
    }
    return a;
}
int main()
{
    int t,n,i,count;
    scanf("%d",&t);
    while(t--)
    {
           count=0; 
           scanf("%d",&n);
           for(i=1;i<=n;i++)
           if(1==coprime(i,n))
           count++;
           printf("%d\n",count);
    }
    //scanf("%d",&i);
}
