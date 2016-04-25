#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

long long sum[4 * 100000],child[4 * 100000],v;

long long query(int node, int l, int r, int a, int b){
    if(l > b || r < a) return 0;
    
    long long ret = (min(b,r) - max(a,l) + 1) * sum[node];
    
    if(a <= l && r <= b) ret += child[node];
    else{
        int mi = (l + r) >> 1;
        
        ret += query(2 * node ,l,mi,a,b) + query(2 * node + 1,mi + 1,r,a,b);
    }
    
    return ret;
}

void update(int node, int l, int r, int a, int b){
    if(l > b || r < a) return;
    
    if(a <= l && r <= b) sum[node] += v;
    else{
        int mi = (l + r) >> 1;
        
        update(2 * node ,l,mi,a,b);
        update(2 * node + 1,mi + 1,r,a,b);
        
        child[node] = child[2 * node ] + child[2 * node +1] + (mi - l + 1) * sum[2 * node ] + (r - mi) * sum[2 * node + 1];
    }
}

int main(){
    int TC,N,C,i;
    int op,p,q;
    
    scanf("%d",&TC);
    
    while(TC--){
        scanf("%d %d",&N,&C);
        
        for(i=0;i<=4*N;i++)
        sum[i]=child[i]=0;
        for( i = 0;i < C;++i){
            scanf("%d",&op);
            
            if(op == 0){
                scanf("%d %d %d",&p,&q,&v);
                
                update(1,1,N,p,q);
            }else{
                scanf("%d %d",&p,&q);
                
                printf("%lld\n",query(1,1,N,p,q));
            }
        }
    }
    
    return 0;
}
