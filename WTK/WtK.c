#include<stdio.h>
int main()
{
    int x,y,z,t;
    scanf("%d",&t);
    while(t--)
    {
         scanf("%d",&x);            
         int a=0;
         //printf("%d %d\n",x,y);
         for(z=2;z<=x;z++)
         a=(a+x+1-z)%z;
         printf("%d\n",a+1);
    }
    return 0;
}
