#include<stdio.h>
char str[100];
int convert(int s,int e)
{
    int i,sum=0;
    for(i=s;i<=e-2;i++)
    {
    //printf("%d",str[i]);
    sum=sum*10+(str[i]-48);
    }
    return sum;
}
main()
{
      int i=0,pl=0,el=0,n1=0,n2=0,n3=0,m,mac=0,t;
      char c;
      scanf("%d",&t);
      getchar();
      //printf("asass%s",str);
      for(;t;t--)
      {
      i=pl=el=n1=n2=n3=mac=0;
      getchar();
      gets(str);
      //printf("asass%s",str);
      c=str[i];
      while(c!='\0')
      {
           if(c=='+')
           {
                     pl=i;
                     if(!mac)
                     n1=convert(0,pl);
                     //printf("%d\n",n1);
           }
           if(c=='=')
           {
                     el=i;
                     if(!mac||m<pl)
                     n2=convert(pl+2,el);
                     //printf("%d\n",n2);
           }
           if(c=='m')
           {
                     m=i;
                     mac=1;
                     if(pl&&el)
                     break;
           }
           i++;     
           c=str[i];
      }
                     if(m<el)
                     {
                            n3=convert(el+2,i+1);
                            m<pl?(n1=n3-n2):(n2=n3-n1);
                     }
                     else
                     n3=n1+n2;               
      (!pl)?printf("%s\n",str): printf("%d + %d = %d\n",n1,n2,n3);
      }
      scanf("%c",&c);
}
