#include<stdio.h>
char str[55][55];
int best,idx,n;
void fd()
{
    int i,k,j,poss;
    best=idx=0;
    for(k=0;k<n;k++)
    {
                    poss=0;
                    for(i=0;i<n;i++)
                    {
                                    if(i!=k&&str[k][i]=='N')
                                    for(j=0;j<n;j++)
                                    {
                                                    if(str[j][k]=='Y'&&str[j][i]=='Y')
                                                    {
                                                    poss++;
                                                    break;
                                                    }
                                    }
                                    if(poss>best)
                                    {
                                                 best=poss;
                                                 idx=k;
                                    }
                    }
    }
}
int main()
{
    int t,i;
    scanf("%d",&t);
    while(t--)
    {
              scanf("%s",&str[0]);
              for(i=0;str[0][i];i++);

              for(n=i,i=1;i<n;i++)
              scanf("%s",&str[i]);
              
              fd();
              printf("%d %d\n",idx,best);
              
              //for(i=0;i<n;i++)
              //printf("%s\n",str[i]);
    }
    return 0;
}
