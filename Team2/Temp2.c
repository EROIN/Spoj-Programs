#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b)
{
     return (*(long long int *)a-*(long long int *)b);
}
int main()
{
    int i,j=1;
    long long int a[4];
    while(scanf("%lld%lld%lld%lld",&a[0],&a[1],&a[2],&a[3])!=EOF)
    {
               qsort(a,4,sizeof(long long),cmp);
               printf("Case %d: %lld\n",j,a[2]+a[3]);
               j++;
    }
    //scanf("%d",&i);
    return 0;
}
