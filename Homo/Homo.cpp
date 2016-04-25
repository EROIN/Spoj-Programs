#include<iostream>
#include<map>
#include<cstdio>
using namespace std;
int main()
{
    int n,i,x,count=0,homo=0;
    map<int,int> m;
    char str[10];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
            scanf("%s%d",&str,&x);
            //printf("%s %d\n",str,x);
            if(str[0]=='i')             
            {
                     m[x]++;
                     if(m[x]==1)
                     count++;
                     if(m[x]==2)
                     homo++;
            }
            else
            {
            if(m[x]!=0)
            {
                     m[x]--;
                     if(m[x]==0)
                     count--;
                     if(m[x]==1)
                     homo--;
                     if(homo<0)
                     homo=0;
            }
            }
            //printf("h%d c%d\n",homo,count);
            if(homo>0&&count>1)
            printf("both\n");
            else if(homo>0)
            printf("homo\n");
            else if(count>1)
            printf("hetero\n");
            else if(count<2)
            printf("neither\n");
    }
    return 0;
}
            
