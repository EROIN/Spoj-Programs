#include<cstdio>
main()
{
      int n,i,a[1001],stack[1000],final[1001],top=-1,f=0;
      bool ans=true;
      scanf("%d",&n);
      while(n)
      {
      f=0;
      top=-1;
      ans=true;
      for(i=0;i<n;i++)
      scanf("%d",&a[i]);
      for(i=0;i<n;i++)
      {
                      if(top==-1)
                      {
                                 if(i<n-1)
                                 a[i]<a[i+1]?final[f++]=a[i]:stack[++top]=a[i];
                                 else
                                 final[f++]=a[i];
                      }
                      else
                      {
                                 if(stack[top]>a[i])
                                 {
                                                    (i<n-1)&&(a[i]>a[i+1])?stack[++top]=a[i]:final[f++]=a[i];
                                 }
                                 else
                                final[f++]=stack[top--];
                      }
                      if(f>0&&final[f-2]>final[f-1])
                      {
                                ans=false;
                                break;
                      }
                      //for(int i=0;i<n;i++)
                      //printf("%d %d %d\n",final[i],stack[i],a[i]);
      }
      if(ans)
      {
      while(top>=0)
      final[f++]=stack[top--];
      }
  //    for(i=0;i<n;i++)
    //printf("%d",final[i]);
      ans?printf("yes\n"):printf("no\n");
      scanf("%d",&n);
      }
      scanf("%d",&n);
}
