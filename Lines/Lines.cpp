#include<iostream>
#include<map>
using namespace std;
int gcd(int a,int b)
{
    int r;
    while(b)
    {
            r=a%b;
            a=b;
            b=r;
    }
    return a;
}
int main()
{
    map<string, int> m;
    int n,x[201],y[201],i,j;
    char str[10];
    while(scanf("%d",&n)&&n)
    {
               m.clear();
               for(i=0;i<n;i++)
               scanf("%d%d",&x[i],&y[i]);
               for(i=0;i<n-1;i++)
               for(j=i+1;j<n;j++)
               {
                         int mx=x[i]-x[j];
                         int my=y[i]-y[j];
                         int hcf=gcd(mx,my);
                         sprintf(str,"%d %d",mx/hcf,my/hcf);
                         string s=(string)str;
                         m[s]=1;
               }
               printf("%d\n",m.size());
    }
    return 0;
}
