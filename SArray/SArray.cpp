#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
using namespace std;
struct sr
{
       int nr[2];
       int p;
} L[100005];
char str[100005]="abracadabra0AbRa4Cad14abra";
int n,i;
int p[100005];

bool comp(const sr &a,const sr &b)
{
     return a.nr[0]==b.nr[0]? a.nr[1]<b.nr[1]:a.nr[0]<b.nr[0];
}
void display()
{
    for(i=0;i<n;i++)
    printf("%d\n",L[i].p);
}
void find()
{
     for(i=0;i<n;i++)
     p[i]=str[i]-'0';
     
     for(int cnt=1;cnt<n;cnt=cnt<<1)
     {
             for(i=0;i<n;i++)
             {
             L[i].nr[0]=p[i];
             L[i].nr[1]=i+cnt<n?p[i+cnt]:-1;
             L[i].p=i;
             }
             
             sort(L,L+n,comp);
             //display();
             for(i=0;i<n;i++)
             p[L[i].p]= i>0&&L[i].nr[0]==L[i-1].nr[0]&&L[i].nr[1]==L[i-1].nr[1]? p[L[i-1].p]: i;
     }
}

int main()
{
    scanf("%s",&str);
    
    for(n=0;str[n];n++);
//    cout<<"DSDSD";
    find();
    display();
    cin>>i;
    return 0;
}
