#include<stdio.h>
int main()
{
    int n,x,y;
    scanf("%d",&n);
    while(n--)
    {
    scanf("%d%d",&x,&y);
    if(x%2==0)
    {
              if(y==x-2||y==x)
              printf("%d\n",x+y);
              else
              printf("No Number\n");
    }
    else
    {
              if(y==x||y==x-2)
              printf("%d\n",x+y-1);
              else
              printf("No Number\n");
    }
    }
    return 0;
}
