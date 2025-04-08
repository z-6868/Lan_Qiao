#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  //变量
  long long count = 1;
  long long Sum;
  double sum;
  long long X = 2*343720;
  long long Y = 2*233333;//一个往返
  
  //计算
  while(1)
  {
    //判断完成
    if((count * 15 % X == 0 )&&(count * 17 % Y == 0))
    {
      if (count * 15 % X == count * 17 % Y)
      {
        break;
      }
    }
    count++;
  }
  Sum = pow(15*count,2)+pow(17*count,2); 
  sum = sqrt(Sum);
  //输出
  printf("%.2f",sum);
  return 0;
}
