var g,b:integer;
	gap:real;
begin
g:=0;
read(g,b);
while g<> -1 do
begin
	if (g>b) then	gap:=g/(b+1) else gap:=b/(g+1);
	if (int(gap))<gap then gap:=gap+1;
	writeln(Trunc(gap):0);
	read(g,b)
end;
end.
	