#include<iostream>
using namespace std;
void check(int a[],int n)
{
     int cnt,max=0;
     for(int i=0;i<n-1;i++)
     {
             cnt=0;
             for(int j=i+1;j<n;j++)
             {
             if(a[j]==(a[j-1]+1))
             cnt++;
             if(max<cnt)         max=cnt;
             if(a[j]!=a[j-1]+1)  cnt=0;
             }
     }
     cout<<max+1<<endl;
}
main()
{
      int n,m,i;
      cin>>n>>m;
      int a[n];
      for(i=0;i<n;i++)
      cin>>a[i];
      for(i=0;i<m;i++)
      {
      check(a,n);
      int x,y;
      cin>>x>>y;
      a[x-1]=y;
      }
      check(a,n);
}
