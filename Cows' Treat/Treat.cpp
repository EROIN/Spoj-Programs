#include<cstdio>
int a[2001][2001],item[2001];

int find(int left,int right,int age)
{
    if(left>right)
    return 0;
    //printf("%d %d\n",left,right);
    
    if(a[left][right])
    return a[left][right];
    
    //printf("AKSBSS");
    int x=item[left]*age+find(left+1,right,age+1);
    int y=item[right]*age+find(left,right-1,age+1);
    //printf("%d %d %d\n",x,y,age);
    a[left][right]=x>y?x:y;
    return a[left][right];
}
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&item[i]);
    for( i=0;i<n;i++)
    for(j=0;j<n;j++)
    a[i][j]=0;
    printf("%d\n",find(0,n-1,1));
    scanf("%d",&n);
}
