#include<cstdio>
int tree[400005];
bool lazy[400005];
void update(int node,int l,int r,int st,int en)
{
     if(lazy[node])
     {
                   if(l<r)
                   {
                   lazy[2*node]=!lazy[2*node];
                   lazy[2*node+1]=!lazy[2*node+1];
                   }
                   tree[node]=r-l+1-tree[node];
                   lazy[node]=false;
     }
     
     if(l>r||l>en||r<st)
     return;

     if(st<=l&&r<=en)
     {
                     tree[node]=r-l+1-tree[node];
                     if(l<r)
                     {
                            lazy[2*node]=!lazy[2*node];
                            lazy[2*node+1]=!lazy[2*node+1];
                     }
                     return;
     }
     update(2*node,l,(l+r)/2,st,en);
     update(2*node+1,(l+r)/2+1,r,st,en);
     if(l<r)
     tree[node]=tree[2*node]+tree[2*node+1];
}

int query(int node,int l,int r,int st,int en)
{
    if(l>r||l>en||r<st)
    return 0;
    
    if(lazy[node])
    {
                  tree[node]=r-l+1-tree[node];
                  if(l<r)
                  {
                         lazy[2*node]=!lazy[2*node];
                         lazy[2*node+1]=!lazy[2*node+1];
                  }
                  lazy[node]=false;
    }
    
    if(st<=l&&r<=en)
    return tree[node];
    
    int p1=query(2*node,l,(l+r)/2,st,en);
    int p2=query(2*node+1,(l+r)/2+1,r,st,en);
    return p1+p2;
}

int main()
{
    int op,s,e,m,i,n;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
    {
    lazy[i]=false;
    tree[i]=0;
    }
    for(i=1;i<=m;i++)
    {
            scanf("%d%d%d",&op,&s,&e);
            if(op==1)
            printf("%d\n",query(1,1,n,s,e));
            else
            update(1,1,n,s,e);
    }
    return 0;
}
