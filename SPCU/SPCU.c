#include<stdio.h>
int main()
{
    int t,n,i,a,flag=0;
    for(scanf("%d",&t);t;t--)
    {
                  scanf("%d",&n);
                  for(i=0;i<n;i++)
                  {
                          scanf("%d",&a);
                          if(a>i)
                          flag=1;
                  }
                  flag?printf("NO\n"):printf("YES\n");
    }
    return 0;
}
