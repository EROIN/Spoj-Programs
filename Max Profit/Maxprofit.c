#include<stdio.h>
int main()
{
    int m,n,i,j,t;
    long long int c[100][100];
    int a[100][100],b[100][100];
    scanf("%d",&t);
    while(t--)
    {
    long long int sum=0,max=0,min;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    scanf("%d",&b[i][j]);
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    scanf("%lld",&c[i][j]);
    
    for(i=0;i<m;i++)
    {
    max=0;
    for(j=0;j<n;j++)
    {
                    min=a[i][j]<=b[i][j]?a[i][j]:b[i][j];
                    min=min*c[i][j];
                    if(min>max)
                    max=min;
                    //printf("%d  %d\n",max,sum);
    }
    sum+=max;
    }
    printf("%lld\n",sum);
    }
    return 0;
}
