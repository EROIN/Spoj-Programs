#include<stdio.h>
int prime[10000005],count[10000005];
void find()
{
    int i,j;
    for(i=3;i<3163;i+=2)
    {
                           if(!prime[i])
                           {
                                        for(j=i*i;j<10000000;j+=2*i)
                                        prime[j]=1;
                           }
    }
    prime[2]=1;
    count[2]=1;
    
    for(i=3;i<10000000;i++)
    count[i]=(!prime[i]&&i%2==1)?count[i-1]+1:count[i-1];
}

void dis()
{
     int i;
     for(i=0;i<10;i++)
     printf("%d\n",count[i]);
}

int main()
{
    int t,a;
    scanf("%d",&t);
    find();
    //dis();
    while(t--)
    {
              scanf("%d",&a);
              printf("%d\n",count[a]-count[a/2]);
    }
    return 0;
}
    
