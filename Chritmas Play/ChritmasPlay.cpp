#include<stdio.h>
#include<stdlib.h>
int compare(const void*a,const void *b)
{
    return (*(int*)a-*(int*)b);
}
int main()
{
    int t,k,n,i,min;
    scanf("%d",&t);
    while(t--)
    {
             scanf("%d%d",&n,&k);
             int a[n];
             for(i=0;i<n;i++)
             scanf("%d",&a[i]);
             if(k==1)
             {
                     printf("0\n");
                     continue;
             }
             qsort(a,n,sizeof(int),compare);
             min=a[n-1]-a[0];
             for(i=0;i<=n-k;i++)
             if(a[i+k-1]-a[i]<min)
             min=a[i+k-1]-a[i];
             printf("%d\n",min);
    }
    return 0;
}
