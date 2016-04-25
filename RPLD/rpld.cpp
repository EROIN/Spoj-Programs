//Learnt a LOT through this problem, especially about the STLs.
#include<iostream>
#include<cstdio>
#include<map>
#include<set>
using namespace std;
int main()
{
    int t,n,r,id,sub,i;
    scanf("%d",&t);
    map <int, set <int> > m;                              //Map type declared here.
    for(int loop=1;loop<=t;loop++)
    {
              scanf("%d%d",&n,&r);
              m.clear();
              bool flag=true;
              for(i=0;i<r;i++)
              {
                              scanf("%d%d",&id,&sub);
                              if(flag)
                              {
                              pair<set<int>::iterator,bool> p=m[id].insert(sub);   //map[data type 1] is data type of map data type two(set here).
                              if(p.second==false)
                              flag=false;
                              }
              }
              printf("Scenario #%d: ",loop);
              flag?printf("possible\n"):printf("impossible\n");
    }
    return 0;
}
                                                
