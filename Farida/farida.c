#include<stdio.h>
long long int a[10005];
long long int b[10005];

long long int find(int n)
{
    if(n<0)
    return 0;
    
    if(b[n]!=-1)
    return b[n];
    
    long long x=a[n]+find(n-2);
    long long y=find(n-1);
    b[n]=x>y?x:y;
    
    return b[n];
}
int main()
{
    int i,t,loop,num;
    scanf("%d",&t);
    for(loop=1;loop<=t;loop++)
    {
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
    scanf("%d",&a[i]);
    b[i]=-1;
    }
       printf("Case %d: %lld\n",loop,find(num-1));
    }
    scanf("%d",&num);
    return 0;
}

