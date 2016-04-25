#include<stdio.h>
int main()
{
    double x;
    while(scanf("%lf",&x)&&x)
    {
    int i=2,count=0;
    double sum=0;
    while(sum<x)
    {
                sum+=1/(double)i;
//                printf("%lf\n",sum);
                i++;
                count++;
    }
    printf("%d card(s)\n",count);
    }
    //scanf("%d",&i);
    return 0;
}
