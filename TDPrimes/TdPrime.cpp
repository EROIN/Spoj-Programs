#include<stdio.h>
int mark[100000000]={0};
int prime[15];
int main()
{
    int i,j,srt,n=100000000,count=0,p=1;    //p=1 because 2 is to be printed separately.
    srt=10000;                          //pre calculate the square root.
    for(i=3;i<srt;i+=2)                 // no need to count the even numbers after two which is separately printed.
    {
                      if(mark[i]==0)
                      {
                                    p++;
                                    if(p%100==1)
                                    prime[count++]=i;
                                    for(j=i*i;j<n;j+=2*i)
                                    mark[j]=1;
                      }
    }
    printf("2\n");
    for(i=0;i<count;i++)
    printf("%d\n",prime[i]);
//    printf("%d %d",p,count);
    for(i=10001;i<n;i+=2)
    {
                        if(mark[i]==0)
                        {
                                      p++;
                                      if(p%100==1)
                                      printf("%d\n",i);
                        }
    }
   // printf("%lf(s)\n",clock()/1e6);
    scanf("%d",&i);
    return 0;
}
