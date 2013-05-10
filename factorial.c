
int fac(int n)
{
    if(n==0) return 1;
    int res = 1;
    while(n>0)
    {
        res *= n;
        n -= 1;
    }
    return res;
}

int main()
{
    int i=0;
    for(i=0; i<1000000; i++)
        fac(10);
    return 0;
}
