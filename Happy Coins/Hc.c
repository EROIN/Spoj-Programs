#include<stdio.h>
#include<string.h>
int main()
{
    long int t,n,i,count;
    char str[5];
    scanf("%ld",&t);
    while(t--)
    {
              count=0;
              scanf("%ld",&n);
              for(i=0;i<n;i++)
              {
                              scanf("%s",&str);
                              if(strcmp(str,"lxh")==0)
                              count++;
              }
              count%2?printf("lxh\n"):printf("hbb\n");
    }
    return 0;
}
