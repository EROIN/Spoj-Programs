#include<stdio.h>
int n,a[105][105];
void display()
{
    int i,j;
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    printf("%d ",a[i][j]);
    printf("\n");
    }
}
int fd()
{
    int i,j,k,tot=0;
    for(k=0;k<n;k++)
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    a[i][j]=a[i][j]||(a[i][k]&&a[k][j]);
    
    //display();
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    if(a[i][j]==1)
    tot++;
    return tot;
}
int main()
{
    int test,i,x,y,t,tot;
    scanf("%d",&t);
    for(test=1;test<=t;test++)
    {
    scanf("%d",&n);
    tot=n;
    
    for(x=0;x<n;x++)
    for(y=0;y<n;y++)
    a[x][y]=0;
    
    for(i=0;i<n;i++)
    {
    scanf("%d%d",&x,&y);
    if(a[x][y]==1)
    tot--;
    a[x][y]=1;
    }
    //display();
    printf("Case #%d: %d\n",test,fd()-tot);
    }
    return 0;
}
