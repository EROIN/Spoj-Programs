#include<cstdio>
#include<iostream>
#include<algorithm>             //Keep it simple silly.... NEED NOT SORT ANYTHING.
using namespace std;
int a[55],n;
int main()
{
    int t,m,k,i,j,count=0;
    char str[55];
    scanf("%d",&t);
    while(t--)
    {
              count=0;
              scanf("%d%d%d",&n,&m,&k);
              for(i=0;i<n;i++)
              {
                              a[i]=0;
                              scanf("%s",&str);
                              for(j=0;j<m;j++)
                              if(str[j]=='*')
                              a[i]++;
              }
              while(k--)
              {
                        int max=a[0],pos=0;
                        for(i=1;i<n;i++)
                        if(a[i]<max)
                        {
                        max=a[i];
                        pos=i;
                        }
                        a[pos]=m-a[pos];
              }
              for(i=0;i<n;i++)
              count+=a[i];
              printf("%d\n",count);
    }
    return 0;
}
