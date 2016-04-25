def calc(i):
	m=109546051211
	fact=1;
	s=1
	for j in range(i):
		fact=(fact*(j+1))%m
		s=(s*fact)%m
	return int(s)

t=int(input())
if(t>587116):
	print('0')
else:
	print(calc(t))
