#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;
char str[100005]="banana";
int p[100005];
int comp(const void * a,const void *b)
{
     return strcmp(str+*(int *)a,str+*(int *)b);
}
int main()
{
    int i,n;
    scanf("%s",&str);
    for(n=0;str[n];n++);
    for(i=0;i<n;i++)
    p[i]=i;
    
    qsort(p,n,sizeof(int),comp);
    
    for(i=0;i<n;i++)
    printf("%d\n",p[i]);
    scanf("%d",&i);
    return 0;
}
