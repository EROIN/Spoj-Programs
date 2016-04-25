#include<iostream>
#include<math.h>
using namespace std;
main()
{
      int a[8],ratio[4],i,max=0;
      while(true)
      {
      max=0;
      for(i=0;i<8;i++)
      scanf("%d",&a[i]);
      if(a[0]==-1)
      break;
                  for(i=0;i<4;i++)
                  {
                  ratio[i]=(int)ceil((float)a[i]/(float)a[i+4]);
                  if(ratio[i]>max)
                  max=ratio[i];
                  }
                  printf("%d %d %d %d\n",a[4]*max-a[0],a[5]*max-a[1],a[6]*max-a[2],a[7]*max-a[3]);
      }
      scanf("%d",&i);
}
