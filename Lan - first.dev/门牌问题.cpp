#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std; 
int main(int argc, char** argv) {
	//��������
  int count = 0;
  //�洢Ҫ���������
  int num;
  //�洢ĩβ����
  int end_num;
   //ѭ�����ַ�Χ
   for (int i = 1;i <= 2020; i++)
   {
     
    num = i;
    //�ж��Ƿ���λ���ɽ���
    while(num > 0)
    {
      end_num = num % 10;
      if (end_num == 2)
      {
        count++;
      }
      num /= 10; 
    }
   
   }
    cout << count << endl;

	return 0;
}
