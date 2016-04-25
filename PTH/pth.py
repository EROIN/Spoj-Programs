#This program gives TLE for large input outputs, of order 10^17-18. Hence a corresponding C program was written to achieve the same in half the time required by this program.

from math import *
t=int(input())
for i in range(t):
	n=int(input())
	x=sqrt(1+n)-1
	print('Case ',i+1,': ',int(x),sep='');
