#include <iostream>
using namespace std;
#include <string>
int main()
{
  // ���ڴ��������Ĵ���
  long long ans = 0;
  //��ѭ��
  for (int i = 0;i<100000000;i++)
  {
  //ת��Ϊ�ַ���
  string s =to_string(i);
  int n = (int)s.size();
  //�ж�ż��λ
  if(n%2!=0)
    continue;
  //���ҵȺ�
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


//���
  cout << ans << endl;

  return 0;
}
