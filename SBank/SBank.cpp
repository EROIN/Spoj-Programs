#include<iostream>
#include<cstdio>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
    int t,n;
    scanf("%d",&t);
    string s;
    char str[50];
    map <string,int> m;
    while(t--)
    {
              m.clear();
              scanf("%d\n",&n);         // extra '\n' beacause of gets that follows
              //printf("%d\n",n);
              for(int i=0;i<n;i++)
              {
                      gets(str);                      //gets following scanf.
                      //printf("%s\n",str);
                      s=(string)str;
                      m[s]++;
              }
              map<string,int>::iterator it,start,end;
              start=m.begin();
              end=m.end();
              for(it=start;it!=end;it++)             //Didnt have to sort the values before printing them. Must be inserted in the ascending order. Can use this feature in future!
              printf("%s %d\n",it->first.c_str(),it->second);     //returns a null terminated c-style string.
              printf("\n");
    }
    return 0;
}
                      
