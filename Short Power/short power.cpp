#include<iostream>
using namespace std;
int calc(int x,int p)
{
    static int t=0;
    cout<<++t<<" "<<p<<endl;
    if(p==1)
    return x;
    if(p%2==0)
    return calc(x,p/2)*calc(x,p/2);
    else
    return x*calc(x,(p-1)/2)*calc(x,(p-1)/2);
}
main()
{
      int x,p;
      cin>>x>>p;
      cout<<calc(x,p);
      cin>>x;
}
