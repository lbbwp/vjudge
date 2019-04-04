#include <iostream>
#include <map>
#include <iterator>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    int max;
    string color, res;
    map<string, int> map;

    while(cin >> n, n)
    {
        max = 0;
        while(n--)
        {
            cin >> color;
            map[color]++;
            if(map[color] > max)
            {
                max = map[color];
                res = color;
            }
        }

        map.clear();
        cout << res << endl;
    }

    return 0;
}
