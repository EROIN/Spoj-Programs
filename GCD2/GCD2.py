t=int(input())

def gcd(a,b):
	while(b!=0):
		t=a%b
		a=b
		b=t
	return a

for i in range(t):
	a,b=input().split()
	a=int(a)
	b=int(b)
	print(gcd(a,b))