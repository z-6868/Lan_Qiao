#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std; 
int main(int argc, char** argv) {
	//计数变量
  int count = 0;
  //存储要处理的数字
  int num;
  //存储末尾数字
  int end_num;
   //循环数字范围
   for (int i = 1;i <= 2020; i++)
   {
     
    num = i;
    //判断是否还有位数可进行
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
