#include<stdio.h>
int main()
{
    long int x,y,z,n;
    char str[5];
    while(scanf("%s",&str)&&str[0]-'0'||str[1]-'0'||str[3]-'0')
    {
          x=str[0]-'0';
          y=str[1]-'0';
          z=str[3]-'0';
          //printf("%d %d %d",x,y,z);
          n=(x*10+y)*pow(10,z);
          //printf("%d\n",n);
          x=2;
          while(x<=n)
          x*=2;
          x/=2;
          int ans=1+2*(n-x);
          printf("%d\n",ans);
    }
    //scanf("%d",&x);
    return 0;
}
                    
