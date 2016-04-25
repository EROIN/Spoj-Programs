#include<stdio.h>
int strlen(char a[])
{
    int i=0;
    while(a[i])
    i++;
    return i;
}

int compare(const void *a,const void *b)
{
    return (*(char *)a-*(char *)b);
}

char a[1010],b[1010];
int x[26];
int main()
{
    int i;
    while(scanf("%s%s",&a,&b)!=EOF)
    {
          for(i=0;i<26;i++)
          x[i]=0;
          int l=strlen(a);
          for(i=0;i<l;i++)
          {
          //printf("%d\n",a[i]-'a');
          x[a[i]-'a']++;
          }
          l=strlen(b);
          //printf("%d\n",l);
          
          qsort(b,l,sizeof(char),compare);
          
          for(i=0;i<l;i++)
          if(x[b[i]-'a'])
          {
                  printf("%c",b[i]);
                  x[b[i]-'a']--;
          }
          printf("\n");
    }
}
