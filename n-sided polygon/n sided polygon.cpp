#include<iostream>
#include<conio.h>
using namespace std;
struct particle
{
       int v,s;
};
int main()
{
      int n,l,cn=0;
      cout<<"entr d no of particles.";
      cin>>n;
      particle p[n];
      cout<<"entr d length of each side.";
      cin>>l;
      cout<<"entr d respective velocities.";
      for(int i=0;i<n;i++)
      {
      cin>>p[i].v;
      p[i].s=i*l;
      }
      int t=n;
      while(n!=1)
      {
              cout<<n<<endl<<endl<<endl;
              getch();
              for(int i=0;i<n;i++)
              {
              p[i].s+=p[i].v;
              if(p[i].s>=t*l)
              p[i].s-=t*l;
              cout<<p[i].s<<endl;
              }
              for(int i=0;i<n;i++)
              {
              for(int k=i+1;k<n;k++)
              {
              if(p[i].s==p[k].s)
              {
              p[i].v=(p[i].v+p[k].v)/2;
              for(int j=k;j<n-1;j++)
              p[j]=p[j+1];
              n--;
              }
              }
              }
      cn++;
      }
      cout<<"cn="<<cn;
      cin>>n;
      return 0;
}
