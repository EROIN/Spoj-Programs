#include<stdio.h>
void mergesort(long long int a[],long long int start,long long int end)
{
     long long int i=start,j=(start+end)/2+1;
     if(start<end)
     {
                  mergesort(a,start,(start+end)/2);
                  mergesort(a,(start+end)/2+1,end); 
                  long long int b[end-start+1];long long int k=0;
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
    long long int n,c[100000],p[100000],i,sum=0,j;
    while(scanf("%lld",&n)&&n)
    {
    sum=0;
    for(i=0;i<n;i++)
    scanf("%lld",&c[i]);
    for(i=0;i<n;i++)
    scanf("%lld",&p[i]);

    mergesort(c,0,n-1);
    mergesort(p,0,n-1);
    
    //for(i=0;i<n;i++)
//    printf("%lld   %lld\n",c[i],p[i]);
    
    j=n-1;
    for(i=0;i<n;i++)
    sum+=c[i]*p[j--];
    printf("%lld\n",sum);
    }
}
