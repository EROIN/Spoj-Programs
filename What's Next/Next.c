#include<stdio.h>
int main()
{
    int a,b,c,x;
    while(1)
    {
               scanf("%d%d%d",&a,&b,&c);
               if(a==0&&b==0&&c==0)
               break;
               if(2*b==a+c)
               printf("AP %d\n",c+(c-b));
               else
               printf("GP %d\n",c*(c/b));
    }
}
