#include<iostream>
using namespace std;
int countzero(int x)
{
    int i,cn=0;
    for(i=5;x/i;i*=5)
    cn+=x/i;
    return cn;
}
main()
{
      int t,i;
      cin>>t;
      int a[t];
      for(i=0;i<t;i++)
      cin>>a[i];
      for(i=0;i<t;i++)
      cout<<countzero(a[i])<<endl;
      cin>>t;
}
