t=int(input())
for i in range(t):
	s=input()
	n=int(input())
	s=0
	for j in range(n):
		x=int(input())
		s+=x
	if(s%n==0):
		print("YES")
	else:
		print("NO")
	