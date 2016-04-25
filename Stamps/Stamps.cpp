#include<stdio.h>
#include<stdlib.h>
int compare(const void *a,const void *b)
{
    return (*(int *)a-*(int *)b);
}
int main()
{
    int t,need,n,i,a[1001],test;
    scanf("%d",&t);
    for(test=1;test<=t;test++)
    {
                              int sum=0,no=0;
                              scanf("%d%d",&need,&n);
                              for(i=0;i<n;i++)
                              scanf("%d",&a[i]);
                              qsort(a,n,sizeof(int),compare);
                              //for(i=0;i<n;i++)
                              //printf("%d\n",a[i]);
                              for(i=n-1;i>=0;i--)
                              {
                                                 sum+=a[i];
                                                 no++;
                                                // printf("%d\t%d\n",sum,need);
                                                 if(sum>=need)
                                                 break;
                              }
                              printf("Scenario #%d:\n",test);
                              if(sum>=need)
                              printf("%d\n",no);
                              else
                              printf("impossible\n");
    }
                              //scanf("%d",&n);
                              return 0;
}
