unsigned long long int fibonacci(int n)
{
    unsigned long long int f0 = 0;
    unsigned long long int f1 = 1;

    while(n > 0)
    {
        unsigned long long int temp = f0;
        f0 = f1;
        f1 = f1 + temp;
        n--;
    }

    return f1;
}