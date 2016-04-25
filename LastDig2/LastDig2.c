#include<stdio.h>
#include<string.h>
int powr(int b,int e)
{
    int x=1,a=1;
    while(x<=e)
    {
             a=a*b;
             x++;
    }  
    return a;
}
int main()
{
    int t,n;
    char s[1005];
    long long int b;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%s",&s,&n);
    n=strlen(s);
    //printf("%s %d\n",s,n);
    scanf("%lld",&b);
    //printf("%lld\n",b);
    long long int p=b%4;
    if(b&&p==0)
    p=4;
    int a=(s[n-1]-'0');
    //printf("%d\n\n",p);
    //printf("%d\n",(int)powr(a,p));
    printf("%d\n",powr(a,p)%10);
    }
    return 0;
}
