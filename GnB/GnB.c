#include<stdio.h>
int main()
{
    int g,b,gap;
    while(scanf("%d%d",&g,&b)&&g!=-1)
    {
    if(g>b)
    {
            gap=ceil((double)g/((double)b+1));
           printf("%d\n",gap);
    }
    else
    {
    gap=ceil((double)b/((double)g+1));
    printf("%d\n",gap);
    }
    //scanf("%d",&g);
    }
    return 0;
}
