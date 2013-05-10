let rec fac n =
    if n = 0 then 1
    else n * fac(n-1);;

for i = 1 to 1000000 do
    fac(10);
done
