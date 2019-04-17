#include <cstdio>
int main(int argc, char const *argv[])
{
    int i, j, t, m, n, count, kase;
    scanf("%d", &t);
    while(t--)
    {
        kase = 0;
        while (~scanf("%d%d", &n, &m), n || m)
        {
            count = 0;
            for(i = 1; i < n; i++)
            {
                for(j = i + 1; j < n; j++)
                {
                    if( (i*i + j*j + m) % (i * j) == 0 )
                        count++;
                }
            }
            printf("Case %d: %d\n", ++kase, count);
        }
        if(t)
            printf("\n");
    }
    return 0;
}
