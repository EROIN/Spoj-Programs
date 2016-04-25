#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
char * p;
int *f;
int n;
//This program runs 0.02 seconds faster!!!
void build()
{
     f[0]=f[1]=0;
     int i,j;
     for(i=2;i<=n;i++)
     {
                      j=f[i-1];
                      while(1)
                      {
                              if(p[j]==p[i-1])
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
}
     

int main()
{
    int i,j;
    char c;
    bool ny1=false,ft=true;
    while(scanf("%d\n",&n)!=EOF)
    {
    if(!ft)
    printf("\n");
    ft=false;
    //cout<<n;
    ny1=false;
    //getchar();
    p=new char[n+5];
    f=new int[n+5];
    //cout<<"AS";
    gets(p);
    //cout<<p;
    build();
    
    for(i=0,j=0,c=getchar();c!='\n';c=getchar(),j++)
    {
    //cout<<c<<" "<<i<<" "<<p[i]<<endl;
    if(c==p[i])
    {
    i++;
    if(i==n)
    {
              printf("%d\n",j-n+1);
              i=f[i];
              ny1=true;
    }
    }
    else if(i==0)
    continue;
    else
    {
        while(1)
        {
                i=f[i];
                if(c==p[i])
                {
                i++;
                if(i==n)
                {
                        i=f[i];
                        printf("%d\n",j-n+1);
                        ny1=true;
                }
                break;
                }
                else if(i==0)
                break;
        }
    }
    }
    if(!ny1)
    printf("\n");

    delete[] p;
    delete[] f;
    }
    return 0;
}
