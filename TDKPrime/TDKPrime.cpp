#include<stdio.h>
int mark[100000000]={0};
int prime[5000909];
int main()
{
    int i,j,srt,n=86044200,count=0,p=1;    //p=1 because 2 is to be printed separately.
    srt=9276;                          //pre calculate the square root.
    for(i=3;i<srt;i+=2)                 // no need to count the even numbers after two which is separately printed.
    {
                      if(mark[i]==0)
                      {
                                    for(j=i*i;j<n;j+=2*i)
                                    mark[j]=1;
                      }
    }
    prime[p++]=2;
    for(i=3;i<n;i+=2)
    if(mark[i]==0)
    prime[p++]=i;

    int t,q;
    scanf("%d",&t);
    while(t--)
    {
              scanf("%d",&q);
              printf("%d\n",prime[q]);
    }
    //scanf("%d",&i);
    return 0;
}
