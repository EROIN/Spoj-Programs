import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
class Valences
{
public static void main(String [] args)throws Exception
{
int n,sum,i;
BufferedReader r=new BufferedReader(new InputStreamReader(System.in));
while(true)
{
StringTokenizer str=new StringTokenizer(r.readLine());
n=Integer.parseInt(str.nextToken());
if(n<=0)
break;
for(i=1;i<=n/2;i++)
str.nextToken();
sum=0;
for(;i<=n;i++)
sum+=(Integer.parseInt(str.nextToken()));
System.out.println(sum);
}
}
}