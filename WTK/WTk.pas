var t,n,k,i,j:Longint;
begin
readln(t);
for i:=1 to t do
begin
	readln(n);
	k:=0;
	for j:=2 to n do
	k:=(k+n+1-j)mod j;
	writeln(k+1);
end;
end.