#include<stdio.h>
int a[1025][1025],n;

void update(int x1,int y1,int val)
{
     int x,y;
     for(x=x1;x<=n;x+=(x&-x))
     for(y=y1;y<=n;y+=(y&-y))
     a[x][y]+=val;
}
int find(int x1,int y1)
{
    int sum=0,x,y;
    for(x=x1;x>0;x-=(x&-x))
    for(y=y1;y>0;y-=(y&-y))
    sum+=a[x][y];
    return sum;
}   
int query(int x1,int y1,int x2,int y2)
{
    int ans=0;
    ans+=find(x2,y2);
    ans-=find(x1-1,y2);
    ans-=find(x2,y1-1);
    ans+=find(x1-1,y1-1);
    return ans;
}
int main()
{
    int t,x1,y1,val,x2,y2;
    char str[5];
    scanf("%d",&t);
    while(t--)
    {
              scanf("%d",&n);
              for(x1=0;x1<=n;x1++)
              for(x2=0;x2<=n;x2++)
              a[x1][x2]=0;
              
              while(scanf("%s",&str)&&str[1]!='N')
              {
                         // printf("%s\n",str);
                          if(str[1]=='E')
                          {
                                         scanf("%d%d%d",&x1,&y1,&val);
                                         x1++;
                                         y1++;
                                         int pval=query(x1,y1,x1,y1);
                           //              printf("%d %d\n",pval,val);
                                         val=val-pval;
                                         update(x1,y1,val);
                          }
                          else
                          {
                                         scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
                                         x1++;
                                         y1++;
                                         x2++;
                                         y2++;
                                         printf("%d\n",query(x1,y1,x2,y2));
                          }
              }
    }
    return 0;
}
