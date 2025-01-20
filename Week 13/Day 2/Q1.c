#include <stdio.h>
int isPrime(int n)
{
    int flag = 1;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 0;
        }
    }
    if (flag == 1)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    scanf("%d", &n);
    int l = isPrime(n);
    printf("%d", l);
    return 0;
}