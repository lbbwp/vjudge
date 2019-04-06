#include <cstdio>
int main(int argc, char const *argv[])
{
    int n, pre, curr, cost;
    while(~scanf("%d", &n), n)
    {
        pre = cost = 0;
        while(n--)
        {
            scanf("%d", &curr);
            if(curr > pre)
            {
                cost += (curr - pre) * 6;
            }
            else
            {
                cost += (pre - curr) * 4;
            }

            cost += 5;
            pre = curr;
        }
        printf("%d\n", cost);
    }
    return 0;
}
