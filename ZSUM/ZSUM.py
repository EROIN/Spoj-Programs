#This program gives TLE. :(
def calc(n,k):
	m=10000007
	return ((2*pow(n-1,n-1,m))%m+pow(n,n,m)+(2*pow(n-1,k,m))%m+pow(n,k,m))%m

n,k=input().split()
n=int(n)
k=int(k)
	
while n!=0 and k!=0:
	print(calc(n,k))
	n,k=input().split()
	n=int(n)
	k=int(k)
	