#include<stdio.h>
int mark[100000000]={0};
int main()
{
    int i,j,srt,n=100000000,count=0;
    srt=10000;                          //pre calculate the square root.
    for(i=3;i<srt;i+=2)                 // no need to count the even numbers after two which is explicitly printed.
    {
                      if(mark[i]==0)
                      {
                                    for(j=i*i;j<n;j+=2*i)
                                    mark[j]=1;
                      }
    }
    printf("2\n");
    count++;
    for(i=3;i<n;i+=2)
    if(mark[i]==0)
    {
    count++;
    if(count%100==1)
    printf("%d\n",i);
    }
    scanf("%d",&i);
    return 0;
}
