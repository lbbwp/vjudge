#include <cstdio>
using namespace std;
int fn[55];

int main(int argc, char const *argv[])
{
    int i, a, b, n;
    fn[1] = fn[2] = 1;
    while(~scanf("%d%d%d", &a, &b, &n), a || b || n)
    {
        for(i = 3; i <= 52; i++)
        {
            fn[i] = (a * fn[i-1] + b * fn[i-2]) % 7;
        }
        printf("%d\n", fn[n%49]);
    }
    return 0;
}
