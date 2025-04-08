#include <iostream>
using namespace std;
#include <string>
int main()
{
  // 请在此输入您的代码
  long long ans = 0;
  //大循环
  for (int i = 0;i<100000000;i++)
  {
  //转换为字符串
  string s =to_string(i);
  int n = (int)s.size();
  //判断偶数位
  if(n%2!=0)
    continue;
  //左右等和
  int l = 0;
  int r = 0;
  for(int j = 0;j<n;j++)
  {
    if(j < n/2)
      l += s[j] - '0';
    else
      r += s[j] - '0';
  }
    if(l==r)
       ans++;
  }


//输出
  cout << ans << endl;

  return 0;
}
