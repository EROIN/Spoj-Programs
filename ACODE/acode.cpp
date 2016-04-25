#include<cstdio>
long long int n;
long long int dp[5005];
char str[5005];

long long int find(int i)
{
    long long int x=0;
    
    if(i>=n)
    return 0;
    
    if(dp[i]!=-1)
    return dp[i];
    
    if(str[i]=='0')
    return 0;
    
    if(i+1==n)
    x++;
    
    if(i+2==n&&(10*(str[i]-'0')+(str[i+1]-'0'))<27)
    x++;
    
    if(i+1<n&&(10*(str[i]-'0')+(str[i+1]-'0'))<27)// and not d comparison of d two chars separately.
    x+=(find(i+1)+find(i+2));
    else
    x+=find(i+1);
    
    dp[i]=x;
    return x;
}
int main()
{
    int i,j,k=0;
    while(scanf("%s%n",&str,&n)&&str[0]!='0')
    {
    if(k>0)
    n--;
    //printf("%d\n",n);
    for(i=0;i<n;i++)
    dp[i]=-1;
    printf("%lld\n",find(0));
    k=1;
    }
//    scanf("%d",&i);
    return 0;
}
