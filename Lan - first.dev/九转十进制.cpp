#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
  // ���ڴ��������Ĵ���
  //ѭ������ÿһλȨ�غ�
  int n = 2022;
  int sum = 0;
  int i  = 0; 
  string s = to_string(n);
  for (i =0;i<4;i++)
  {
     sum += (s[3-i] -'0')* pow(9,i);
  }
  //���
  cout << sum << endl;
  return 0;
}



using namespace std;
int main()
{
  
  cout << 2*pow(9,3)+0*pow(9,2)+2*pow(9,1)+2*pow(9,0) << endl;
  return 0;
}


