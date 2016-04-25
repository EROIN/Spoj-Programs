#include<stdio.h>
int main()
{
    int count[3]={0},left[3]={0},n,i,x,y,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
                    scanf("%d/%d",&x,&y);
                    if(x==3&&y==4)      count[2]++;
                    else if(x==1&&y==2) count[1]++;
                    else                count[0]++;
    }
    
    sum+=count[2];
    left[0]=count[2];
    count[2]=0;
    sum+=count[1]/2+count[1]%2;
    
    left[0]+=(count[1]%2)*2;
    
    if(count[0]>left[0])
    {
                        count[0]-=left[0];
                        sum+=count[0]/4+(count[0]%4?1:0);
    }
    printf("%d\n",sum+1);
    scanf("%d",&i);
    return 0;
}
    
    
