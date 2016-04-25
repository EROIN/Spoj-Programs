#include<stdio.h>
int main()
{
    int a,d,i;
    int ta[12],td[12];
    while(scanf("%d%d",&a,&d)&&a&&d)
    {
                //printf("%d %d\n",a,d);
                int min=10009;
                for(i=0;i<a;i++)
                {
                scanf("%d",&ta[i]);
                if(ta[i]<min)
                min=ta[i];
                }
                //printf("\n%d",min);
                int count=0;
                for(i=0;i<d;i++)
                {
                scanf("%d",&td[i]);                
                if(td[i]<=min)
                count++;
                }
                //printf("%d",count);
                count>=2?printf("N\n"):printf("Y\n");
    }
    return 0;
}
