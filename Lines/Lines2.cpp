//This program runs 3 times faster than lines.cpp!!!
#include<iostream>
#include<set>
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
    int n,x[201],y[201],i,j;
    set< pair<int,int> > s;
    while(scanf("%d",&n)&&n)
    {
               s.clear();
               for(i=0;i<n;i++)
               scanf("%d%d",&x[i],&y[i]);
               for(i=0;i<n-1;i++)
               for(j=i+1;j<n;j++)
               {
                         int mx=x[i]-x[j];
                         int my=y[i]-y[j];
                         int hcf=gcd(mx,my);
                         s.insert(make_pair(mx/hcf,my/hcf));
               }
               printf("%d\n",s.size());
    }
    return 0;
}

