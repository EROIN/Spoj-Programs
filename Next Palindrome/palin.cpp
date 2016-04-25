#include<iostream>
#include<cstdio>
using namespace std;

bool nine=true;
int strleni(char num[])
{
    int len=0,i=0;
    for(;num[i]!='\0';i++,len++)
    if(num[i]!='9')
    nine=false;
    return len;
}
main()
{
      char num[1000002];
      int tests;
      scanf("%d",&tests);
//      cin>>tests;
      for(int test_no=1;test_no<=tests;test_no++)
      {
      nine=true;
      //gets(num);
      scanf("%s",&num);
      //cin>>num;
      int len=strleni(num);
      if(nine)
      {
              for(int i=1;i<len;i++)
              num[i]='0';
              num[len]='1';
              num[len+1]='\0';
              num[0]='1';
              //cout<<"ASASA";
              //cout<<num<<"\n";
              printf("%s\n",num);
      }
      else
      {
              //cout<<"ADADAADADSADADADD";
              int i=(len-1)/2;
              int j=len%2==0?i+1:i;
              //cout<<i<<j;
              while(i>=0&&num[i]==num[j])
              {
                                         i--;
                                         j++;
              }
              if(i<0)
              {
                     int midi=(len-1)/2;
                     int midj=len%2==0?midi+1:midi;
                     if(num[midi]!='9'&&num[midj]!='9')
                     num[midi]=num[midj]=num[midi]+1;
                     else
                     {
                                          while(num[midi]=='9')
                                          {
                                                               num[midi]=num[midj]='0';
                                                               midj++;
                                                               midi--;
                                          }
                                          num[midi]=num[midj]=num[midi]+1;
                     }
//                     cout<<num<<"\n";
                     printf("%s\n",num); 
                     i--;
                     j++;
              }
              else
              {
                     if(num[i]>num[j])
                     {
                                      while(i>=0)
                                      num[j++]=num[i--];
                                      //cout<<num<<"\n";
                                      printf("%s\n",num);
                     }
                     else
                     {
                                      while(i>=0)
                                      num[j++]=num[i--];
                                      int midi=(len-1)/2;
                                      int midj=len%2==0?midi+1:midi;
                                      if(num[midi]!='9'&&num[midj]!='9')
                                      num[midi]=num[midj]=num[midi]+1;
                                      else
                                      {
                                                                      while(num[midi]=='9')
                                                                      {
                                                                                           num[midi]=num[midj]='0';
                                                                                           midj++;
                                                                                           midi--;
                                                                      }
                                                                      num[midi]=num[midj]=num[midi]+1;
                                      }
                                   //   cout<<num<<"\n";
                                      printf("%s\n",num);
                     }
              }
      }
      }
      cin>>tests;
}
