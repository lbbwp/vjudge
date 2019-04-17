#include <cstdio>
int gcd(int a, int b)
{
    if(b == 0)
        return a;
    return gcd(b, a % b);
}

int main(int argc, char const *argv[])
{
    int n, m, number;
    int temp, res;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &m);
        res = temp = 1;
        while(m--)
        {
            scanf("%d", &number);
            res = temp / gcd(number, temp) * number;
            temp = res;
        }
        printf("%d\n", res);
    }
    return 0;
}
