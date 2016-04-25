#include<stdio.h>
int main()
{
    int n,i;
    int a[100005];
    while(scanf("%d",&n)&&n)
    {
               int flag=0;
               for(i=1;i<=n;i++)
               scanf("%d",&a[i]);
               for(i=1;i<=n;i++)
               if(a[a[i]]==i)
               flag++;
               flag==n?printf("ambiguous\n"):printf("not ambiguous\n");
    }
    return 0;
}
