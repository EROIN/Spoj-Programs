#include<stdio.h>
#include<math.h>
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
    int a,t;
    long int b;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%d%ld",&a,&b);
    int p=b%4;
    if(b&&p==0)
    p=4;
    //printf("%d\n\n",p);
    //printf("%d\n",(int)powr(a,p));
    printf("%d\n",powr(a,p)%10);
    }
    return 0;
}
