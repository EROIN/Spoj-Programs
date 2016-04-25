#include<stdio.h>
int cmp(const void *a, const void *b)
{
    return (*(int *)a-*(int *)b);
}
int a[1425];
int main()
{
    int n,i,dist,flag;
    while(scanf("%d",&n)&&n)
    {
            dist=flag=0;
            for(i=0;i<n;i++)
            scanf("%d",&a[i]);
            qsort(a,n,sizeof(int),cmp);
            for(i=0;i<n;i++)
            {
           // printf("n=%d\ti=%d\t%d\n",n,i,a[i]);
            if(a[i]-dist<=200)
            dist=a[i];
            else
            {
                flag=1;
                break;
            }
            }
            //printf("%d",flag);
            if(flag==0)
            {
                     if(1422-dist<=100)
                     printf("POSSIBLE\n");
                     else
                     printf("IMPOSSIBLE\n");
            }
            else
            printf("IMPOSSIBLE\n");
    }
    return 0;
}
