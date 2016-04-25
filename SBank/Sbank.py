t=int(input())
for test in range(t):
	a=int(input())
	y=[]
	dict={}
	j=0
	for i in range(a):
		str=input()
		y.append(str)
		if str not in dict:
			dict[str]=1
			j+=1;
		else:
			dict[str]+=1

	y=list(dict.keys())
	y.sort()
	for i in range(j):
		print(y[i],dict[y[i]])
	print('')
	if test!=t-1:
		input()