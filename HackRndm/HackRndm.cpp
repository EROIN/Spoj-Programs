#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector <long long int> a;
    long long int n,k,i,x,count=0;
    scanf("%lld%lld",&n,&k);
    for(i=1;i<=n;i++)
    {
                     scanf("%lld",&x);
                     a.push_back(x);
    }
    sort(a.begin(),a.end());
//    printf("%lld",a[2]);
    
    for(i=0;i<n-1;i++)
    {
           for(int j=i+1;j<n;j++)
           {
                     int diff=a[j]-a[i];
                     if(diff==k)
                     count++;
                     else if(diff<k)
                     continue;
                     else
                     break;
           }
    }
    
    printf("%lld\n",count);
    scanf("%d",&x);
}
