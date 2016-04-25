#include<stdio.h>
#define max(a,b) a>b?a:b
int a[1005],b[1005],n,dp[1005][1005];
int find(int no,int prev)
{
    if(no>n-1)
    return 0;
    
    if(dp[no][prev]!=-1)
    return dp[no][prev];
    
    int difa=a[no]>prev?a[no]-prev:prev-a[no];
    int difb=b[no]>prev?b[no]-prev:prev-b[no];
    
    //printf("%d\t%d\t%d\t%d\n",difa,difb,a[no],b[no]);
    dp[no][prev]=max(difa+b[no]+find(no+1,a[no]),difb+a[no]+find(no+1,b[no]));
    //printf("%d\n",x);
    return dp[no][prev];
}
    
int main()
{
    int i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d%d",&a[i],&b[i]);
    
    for(i=0;i<1005;i++)
    for(j=0;j<1005;j++)
    dp[i][j]=-1;
    
    int max=a[0]>b[0]?a[0]:b[0];
    int min=a[0]<b[0]?a[0]:b[0];
    printf("%d\n",max+find(1,min));
    //scanf("%d",&n);
    return 0;
}
    
