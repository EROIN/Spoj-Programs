#include<iostream>
#include<map>
using namespace std;
int main()
{
    char str[20005][25];
    int n,m,i,a[20005],index=0;
    map <string,int> mp;
    while(scanf("%d %d",&n,&m)&&n&&m)
    {
    mp.clear();
    for(i=0;i<=n;i++)
    a[i]=0;
    for(i=0;i<n;i++)
    {
    scanf("%s",&str[i]);
    string s=(string)str[i];
    mp[s]++;
    }
    for(map<string,int>::iterator it=mp.begin();it!=mp.end();++it)
    a[it->second]++;
    for(i=1;i<=n;i++)
    printf("%d\n",a[i]);
    }
    //scanf("%d",&i);
    return 0;
}
