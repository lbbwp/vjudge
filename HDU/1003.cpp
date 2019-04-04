#include <cstdio>
using namespace std;
int dp[100005];
int main(int argc, char const *argv[])
{
    int t, n;
    int i, j, startPos, endPos, tempPos, maxSum;
    scanf("%d", &t);
    for(i = 1; i <= t; i++)
    {
        scanf("%d", &n);
        for(j = 0; j < n; j++)
        {
            scanf("%d", dp+j);
        }

        tempPos = startPos = endPos = 0;
        maxSum = dp[0];

        for(j = 1; j < n; j++)
        {
            if(dp[j-1] >= 0)
            {
                dp[j] = dp[j-1] + dp[j];
            }
            else
            {
                tempPos = j;
            }

            if(dp[j] > maxSum)
            {
                maxSum = dp[j];
                startPos = tempPos;
                endPos = j;
            }
        }

        printf("Case %d:\n", i);
        printf("%d %d %d\n", maxSum, startPos + 1, endPos + 1);
        if(i != t)
            printf("\n");
    }

    return 0;
}
