#include<stdio.h>

int days(int m,int y)
{
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
    return 31;
    
    if(m==4||m==6||m==9||m==11)
    return 30;
    
    if(m==2)
    return y%400==0||(y%4==0&&y%100!=0)?29:28;
}

int consec(int d1,int m1,int y1,int d2,int m2,int y2)
{
    if(m1==m2&&y1==y2&&d2==d1+1)
    return 1;
    
    if(d1==31&&m1==12&&d2==1&&m2==1&&y2==y1+1)
    return 1;
    
    if(d2==1&&y1==y2&&m2==m1+1&&d1==days(m1,y1))
    return 1;
    
    return 0;
}
int main()
{
    int n,d1,m1,y1,c1,i,d2,m2,y2,c2,sum,c;
    while(scanf("%d",&n)&&n)
    {
          c=sum=0;
          scanf("%d%d%d%d",&d1,&m1,&y1,&c1);
          for(i=1;i<n;i++)
          {
                          // printf("%d",i);
                           scanf("%d%d%d%d",&d2,&m2,&y2,&c2);
                           if(consec(d1,m1,y1,d2,m2,y2))
                           {
                           //printf("%d %d\n",d1,d2);
                           sum+=c2-c1;
                           c++;
                           }
                           d1=d2;m1=m2;y1=y2,c1=c2;
          }
          printf("%d %d\n",c,sum);
    }
    return 0;
}
