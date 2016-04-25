#include<stdio.h>
//run this programs using cmd and input output redirection.
void mergesort(int a[],int start,int end)
{
     int i=start,j=(start+end)/2+1;
     if(start<end)
     {
                  mergesort(a,start,(start+end)/2);
                  mergesort(a,(start+end)/2+1,end); 
                  int b[end-start+1];int k=0;
                  while(i<=(start+end)/2&&j<=end)
                  b[k++]=a[i]<a[j]?a[i++]:a[j++];
                  while(i<=(start+end)/2)
                  b[k++]=a[i++];
                  while(j<=end)
                  b[k++]=a[j++];
                  for(i=0;i<=end-start;i++)
                  a[i+start]=b[i];
     }            
}

int main()
{
    int t,i,n,sum;
    scanf("%d",&t);
    while(t--)
    {
              scanf("%d",&n);
              int m[n],w[n];
              for(i=0;i<n;i++)
              scanf("%d",&m[i]);
              for(i=0;i<n;i++)
              scanf("%d",&w[i]);
              mergesort(m,0,n-1);
              mergesort(w,0,n-1);
              sum=0;
              for(i=0;i<n;i++)
              sum+=m[i]*w[i];
              printf("%d\n",sum);
    }
}
