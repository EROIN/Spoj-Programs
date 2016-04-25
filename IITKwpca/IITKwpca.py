t=int(input())
for times in range(t):
	x=input()
	d={}
	for i in x.split():
		if i in d:
			continue
		else:
			d[i]=1
	print(len(d))
	