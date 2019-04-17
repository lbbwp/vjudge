#include<cstdio>
#include<cstring>
int seed[100000+10];
int flag[100000+10];

int main(int argc, char const *argv[])
{
    int step, mod;
    while (~scanf("%d%d", &step, &mod))
    {
        int i;
        memset(seed, 0, sizeof(seed));
        memset(flag, 0, sizeof(flag));
        for(i = 0; i < 100000; i++)
        {
            seed[i+1] = (seed[i] + step) % mod;
            flag[seed[i]] = 1;
            if(seed[i+1] == seed[0])
                break;
        }

        for(i = 0; i < mod; i++)
        {
            if(flag[i] == 0)
                break;
        }

        if(i != mod)
            printf("%10d%10d    Bad Choice\n\n", step, mod);
        else
            printf("%10d%10d    Good Choice\n\n", step, mod);
    }
    return 0;
}
