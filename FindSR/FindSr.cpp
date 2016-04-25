#include<iostream>
#include<cstdio>
using namespace std;
char str[100005];
int f[100005],n;

void build()
{
     f[0]=f[1]=0;
     int i,j;
     for(i=2;i<=n;i++)
     {
                      j=f[i-1];
                      for(;;)
                      {
                             if(str[j]==str[i-1])
                             {
                             f[i]=j+1;
                             break;
                             }
                             if(j==0)
                             {
                             f[i]=0;
                             break;
                             }
                             j=f[j];
                      }
     }
     //for(i=0;i<=n;i++)
     //cout<<str[i]<<" "<<f[i]<<endl;
     
}
int main()
{
    while(scanf("%s%n\n",&str,&n)&&str[0]!='*')
    {
    //cout<<n;
    build();
    f[n]=n-f[n];
    (n%f[n]==0)?printf("%d\n",n/f[n]):printf("1\n");
    }
    return 0;
}
