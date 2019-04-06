#include <iostream>
#include <string>
using namespace std;

int digitalRoots(int n)
{
    int temp;
    int sum = 0;
    if(n < 10)
        return n;
    while(n != 0)
    {
        temp = n % 10;
        n /= 10;
        sum += temp;
    }
    return digitalRoots(sum);
}


int main(int argc, char const *argv[])
{
    int i, sum;
    string str;
    while(cin >> str, str != "0")
    {
        i = sum = 0;
        while(str[i] != '\0')
        {
            sum += (str[i] - '0');
            i++;
        }
        cout << digitalRoots(sum) << endl;
    }
    return 0;
}
