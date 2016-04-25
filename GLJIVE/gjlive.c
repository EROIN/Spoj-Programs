#include<stdio.h>
int main()
{
    int i,a[11];
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    int sum=a[0];
    for(i=1;i<10;i++)
    {
                     if(a[i]+sum<=100)
                     sum+=a[i];
                     else
                     break;
    }
    if(a[i]+sum-100<=100-sum)
    sum+=a[i];
    printf("%d\n",sum);
    scanf("%d",&sum);
    return 0;
}
