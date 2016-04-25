t=int(input())
while(t>0):
	c=1
	d=1
	n,m=input().split(" ")
	n=int(n)
	m=int(m)
	for i in range(n-1):
		c=c+d
		if(c>=m):
			c=c%m
		d=c+d
		if(d>=m):
			d=d%m
	print(c%m,'/',d%m,sep='')
	t-=1
