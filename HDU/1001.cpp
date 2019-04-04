#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int n, res;
  while(cin >> n){
    res = (n % 2) ? ((n + 1) / 2) * n : ((n / 2) * (n + 1));
    cout << res << endl;
    cout << endl;
  }
  return 0;
}
