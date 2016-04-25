#include<stdio.h>
int a[100005],m[400005],n;
void build(int node,int i,int j)
{
     if(i>j)
     return;

     if(i==j)
     {
     m[node]=i;
     return;
     }

     build(2*node,i,(i+j)/2);
     build(2*node+1,(i+j)/2+1,j);

     if(a[m[2*node]]>=a[m[2*node+1]])
     m[node]=m[2*node];
     else
     m[node]=m[2*node+1];
}
int query(int node,int b,int e,int i,int j)
{
     if(i>e||b>j)
     return -1;

    // printf("%d %d %d %d %d\n",node,b,e,i,j);

     if(b>=i&&e<=j)
     return m[node];

     int p1=query(2*node,b,(b+e)/2,i,j);
     int p2=query(2*node+1,(b+e)/2+1,e,i,j);

     if(p1==-1)
     return p2;

     if(p2==-1)
     return p1;

     if(a[p1]>=a[p2])
     return p1;
     return p2;
}
int main()
{
    int i,q,x,y;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    build(1,0,n-1);
    scanf("%d",&q);
    for(i=0;i<q;i++)
    {
    scanf("%d%d",&x,&y);
    printf("%d\n",a[query(1,0,n-1,x,y)]);
    }
    return 0;
}
