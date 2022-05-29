unsigned long long int fibonacci(int n)
{
    unsigned long long int first = 0;
    unsigned long long int second = 1;
    unsigned long long int res;

    if(n == 0)
        return 0;
    
    if(n == 1)
        return 1;

    for(int i = 2; i < n; i++)
    {
        res = first + second;
        first = second;
        second = res;
    }

    return res;
}

unsigned long long int factorial(int n)
{
    unsigned long long int res = 1;

    while(n > 0)
    {
        res = res * n;
        n--;
    }

    return res;
}

int divisorSum(int n)
{
    int res = 0;
    if(n == 1)
        return res;

    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            if(i == (n / i))
                res += i;
            else
                res += (i + n / i);
        }
    }

    return res + 1;
}

int perfectNumber(int n)
{
    return (n == divisorSum(n)) ? 1 : 0;
}