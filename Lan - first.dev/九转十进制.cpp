#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
  // 请在此输入您的代码
  //循环计算每一位权重和
  int n = 2022;
  int sum = 0;
  int i  = 0; 
  string s = to_string(n);
  for (i =0;i<4;i++)
  {
     sum += (s[3-i] -'0')* pow(9,i);
  }
  //输出
  cout << sum << endl;
  return 0;
}



using namespace std;
int main()
{
  
  cout << 2*pow(9,3)+0*pow(9,2)+2*pow(9,1)+2*pow(9,0) << endl;
  return 0;
}


