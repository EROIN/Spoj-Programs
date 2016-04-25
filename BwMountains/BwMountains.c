#include<stdio.h>
int main()
{
    int n,a[1005],b[1005],t,i,m,j;
    scanf("%d",&t);
    while(t--)
    {
              scanf("%d",&n);
              for(i=0;i<n;i++)
              scanf("%d",&a[i]);
              
              scanf("%d",&m);
              for(i=0;i<m;i++)
              scanf("%d",&b[i]);
              
              int min=10000010;
              for(i=0;i<n;i++)
              {
                              for(j=0;j<m;j++)
                              {
                                              //printf("%d %d\n",a[i],b[j]);
                                              int sub=a[i]-b[j];
                                              if(sub<0)
                                              sub=-sub;
                                              if(sub<min)
                                              min=sub;
                              }
              }
              printf("%d\n",min);
    }
    return 0;
}
