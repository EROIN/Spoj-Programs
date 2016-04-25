#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;
int voter[105][105],c,v;
struct node
{
       int cn,nv;
       node()
       {
       nv=0;
       }
} vote[105];

bool comp(const node &a,const node &b)
{
    return a.nv<b.nv;
}
void display()
{
     int i;  
     for(i=0;i<=c;i++)
     printf("%d\t%d\n",vote[i].cn,vote[i].nv);
}
int main()
{
    int t,i,j;
    scanf("%d",&t);
    while(t--)
    {
              scanf("%d%d",&c,&v);
              for(i=1;i<=v;i++)
              for(j=1;j<=c;j++)
              scanf("%d",&voter[i][j]);
              
              for(i=1;i<=c;i++)
              vote[i].cn=vote[i].nv=0;
              
              for(i=1;i<=v;i++)
              {
              //printf("%d\n",voter[i][1]);
              vote[voter[i][1]].cn=voter[i][1];
              vote[voter[i][1]].nv++;
              }
              
              //display();
              
              vote[0].nv=-1;
              sort(vote,vote+c+1,comp);
              
             // display();
              
              if(vote[c].nv>v/2)
              printf("%d %d\n",vote[c].cn,1);
              else
              {
              vote[c].nv=vote[c-1].nv=0;
              for(i=1;i<=v;i++)
              {
              for(j=1;j<=c;j++)
              {
                               if(voter[i][j]==vote[c].cn)
                               {
                               vote[c].nv++;
                               break;
                               }
                               if(voter[i][j]==vote[c-1].cn)
                               {
                               vote[c-1].nv++;
                               break;
                               }
              }
              }
              if(vote[c].nv>vote[c-1].nv)
              printf("%d 2\n",vote[c].cn);
              else if(vote[c].nv<vote[c-1].nv)
              printf("%d 2\n",vote[c-1].cn);
              }
    }
    return 0;
}
              
