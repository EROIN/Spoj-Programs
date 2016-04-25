var a,b,c:integer;
begin
while true do
begin
	read(a,b,c);
	if (a=0) and (b=0) and (c=0) then
	Break;
	if (2*b=a+c) then writeln('AP ',c+(c-b)) else writeln('GP ',Trunc(c*(c/b)));
end;
end.