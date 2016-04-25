#include<stdio.h>
int main()
{
    int x,y,z;
    while(scanf("%d%d",&x,&y)&&x&&y)
    {                              
         int a=0;
         //printf("%d %d\n",x,y);
         for(z=1;z<=x;z++)
         a=(a+y)%z;
         printf("%d %d %d\n",x,y,a+1);
    }
    return 0;
}
