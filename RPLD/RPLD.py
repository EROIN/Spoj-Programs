#This solution, despite of being correct, gives TLE.
#Never break from a loop while reading the input, even when the answer has been found at that stage, as it would result in input mismatch and therefore a WA would be ineluctable.

t=int(input())
for sc in range(t):
	n,r=input().split()
	n=int(n)
	r=int(r)
	flag=0
	d={}
	for i in range(r):
		id,sub=input().split()
		id=int(id)
		sub=int(sub)
		if id in d:
			if sub in d[id]:
				flag=1
			else:
				d[id].append(sub)
		else:
			y=[]
			y.append(sub)
			d[id]=y
		#print(d)
	print('Scenario #',sc+1,': ',end='',sep='')
	print("possible") if flag==0 else print("impossible")