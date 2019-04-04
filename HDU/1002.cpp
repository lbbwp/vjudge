#include <iostream>
#include <string>
using namespace std;

void rmLeftZero(string &s)
{
  int count = 0;
  for(int i = 0; i < s.length() - 1; i++)   // i < s.length() - 1 确保不会把字符串删空
  {
    if(s[i] != '0')
      break;
    count++;
  }

  s.erase(0, count);
}

void bigIntegerAdd(string a, string b, string& res)
{
  int flag = 0; //是否进位+1
  int temp = 0; //保存每位的加数

  rmLeftZero(a);
  rmLeftZero(b);

  int min = a.length() < b. length() ? a.length() : b.length();
  for(int i = 1; i <= min; i++)
  {
    temp = (a[a.length() - i] - '0') + (b[b.length() - i] - '0') + flag;
    flag = temp / 10;
    temp = temp % 10;
    res.push_back(temp + '0');
  }

  while(a.length() > min)
  {
    temp = (a[a.length() - min - 1] - '0') + flag;
    flag = temp / 10;
    temp = temp % 10;
    res.push_back(temp + '0');
    min++;
  }

  while(b.length() > min)
  {
    temp = (b[b.length() - min - 1] - '0') + flag;
    flag = temp / 10;
    temp = temp % 10;
    res.push_back(temp + '0');
    min++;
  }

  if(flag)
  {
    res.push_back(flag + '0'); //判断最后是否有进位
  }

}

int main(int argc, char const *argv[])
{
  int t, i, j;
  string a, b, res;
  cin >> t;
  for(i = 1; i <= t; i++)
  {
    cin >> a >> b;
    res = "";   //每次初始化res为空
    bigIntegerAdd(a, b, res);

    cout << "Case " << i << ":" << endl;
    cout << a << " + " << b << " = " ;
    for(j = res.length() - 1; j >= 0; j--)
    {
      cout << res[j];
    }

    if(i != t)
    {
      cout << endl << endl;       //两组数据之间需要空行
    }
    else
    {
      cout << endl;             //最后一组数据之间不需要空行，否则会presentation error
    }
  }

  return 0;
}
