#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cstring>
using namespace std;
struct node
{
       int nr[2];
       int p;
}L[20005];
char str1[10005],str[20005];
int n,p[20005];

bool operator<(const node &a,const node &b)
{
     return a.nr[0]==b.nr[0]? a.nr[1]<b.nr[1]: a.nr[0]<b.nr[0];
}
void build()
{
     int i;
     for(i=0;i<n;i++)
     p[i]=str[i]-'a';
     for(int cnt=1;cnt<n;cnt=cnt<<1)
     {
             for(i=0;i<n;i++)
             {
                             L[i].nr[0]=p[i];
                             L[i].nr[1]= i+cnt<n?p[i+cnt]:999999;
                             L[i].p=i;
             }
             sort(L,L+n);
             
             for(i=0;i<n;i++)
             p[L[i].p]= i>0&& L[i].nr[0]==L[i-1].nr[0]&&L[i].nr[1]==L[i-1].nr[1]? p[L[i-1].p]:i;
             
     }
}
void display()
{
     int i;
     for(i=0;i<n;i++)
     cout<<L[i].p<<" "<<str+L[i].p<<endl;
     cout<<"\n";
}
int main()
{
    int t;
    scanf("%d\n",&t);
    while(t--)
    {
              scanf("%s%n\n",&str1,&n);
              n+=n;
              strcat(str,str1);

              strcat(str,str1);
              //cout<<str<<endl;
              //cout<<n<<endl;
              build();
              //display();
              printf("%d\n",L[0].p+1);
              str[0]='\0';
    }
    return 0;
}
