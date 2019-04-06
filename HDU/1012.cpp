#include <cstdio>
double sum[10];

int main(int argc, char const *argv[])
{
    sum[0] = 1;
    sum[1] = 2;
    int n = 3;
    double temp = 1;

    for(int i = 2; i <= 9; i++)
    {
        temp = temp * (1.0 / i);
        sum[i] = temp + sum[i-1];
    }

    printf("n e\n- -----------\n");
    printf("0 1\n");
    printf("1 2\n");
    printf("2 2.5\n");

    while(n < 10)
    {
        printf("%d %.9f\n", n, sum[n]);
        n++;
    }
    return 0;
}
