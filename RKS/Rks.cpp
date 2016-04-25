#include<iostream>
#include<cstdio>
#include<map>
using namespace std;
map <int,int> f,c;
int compare(const void *a,const void *b)
{
    int x=*(int *)a;
    int y=*(int *)b;
    //printf("%d %d\n%d %d\n%d %d\n",x,y,f[x],f[y],c[x],c[y]);
    if(f[x]!=f[y])
    return f[x]<f[y];
    else
    return c[x]>c[y];
}
int main()
{
    int a[1001],i,x,index=0,t,n;
    scanf("%d%d",&n,&t);
    for(i=1;i<=n;i++)
    {
                     scanf("%d",&x);
                     if(f[x]==0)
                     {
                     c[x]=i;
                     a[index++]=x;
                     }
                     f[x]++;
    }
    /*for(i=0;i<index;i++)
    printf("%d %d %d\n",a[i],f[a[i]],c[a[i]]);*/
    qsort(a,index,sizeof(int),compare);
    for(i=0;i<index;i++)
    for(int j=1;j<=f[a[i]];j++)
    printf("%d ",a[i]);
    //scanf("%d",&a[0]);
    return 0;
}
