#include<cstdio>

void mergesort(int a[],int start,int end)
{
     int i=start,j=(start+end)/2+1;
     if(start<end)
     {
                  mergesort(a,start,(start+end)/2);
                  mergesort(a,(start+end)/2+1,end); 
                  int b[end-start+1];int k=0;
                  while(i<=(start+end)/2&&j<=end)
                  a[i]>a[j]?b[k++]=a[i++]:b[k++]=a[j++];
                  while(i<=(start+end)/2)
                  b[k++]=a[i++];
                  while(j<=end)
                  b[k++]=a[j++];
                  for(i=0;i<=end-start;i++)
                  a[i+start]=b[i];
     }            
}

main()
{
      int g,m,i,x,y,t;
      scanf("%d",&t);
      while(t--)
      {
      //getchar();
      scanf("%d%d",&g,&m);
      int ng[g],nm[m];
      for(i=0;i<g;i++)
      scanf("%d",&ng[i]);
      for(i=0;i<m;i++)
      scanf("%d",&nm[i]);
      mergesort(ng,0,g-1);
      mergesort(nm,0,m-1);
      x=g;
      y=m;
      while(x&&y)
      (ng[x-1]>=nm[y-1])?y--:x--;
      if(!x)
      printf("MechaGodzilla\n");
      if(!y)
      printf("Godzilla\n");
      }
      scanf("%d",&i);
}
