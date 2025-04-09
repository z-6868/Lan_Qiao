#include <iostream>
using namespace std;
int M;
int  cnt = 0;//计数器 
void H(int N,char A,char B,char C)
{
	if (N == 1)
	   {
	   	cnt++;
	   	if (M==cnt)
	    {
	   	cout << "#" << N <<"：" << A << "->" << C <<endl;	
	    }
	   }
	else
	   {
	   	H(N-1,A,C,B);
	
	    cnt++;
	   	if (M==cnt)
	    {
	   	cout << "#" << N <<"：" << A << "->" << C<<endl;	
	    }
	    
	    H(N-1,B,A,C);   
	   }
}

int main(int argc, char** argv) {
	int N;
	cin >> N >> M;
	H(N,'A','B','C');
	cout << cnt << endl;
	return 0;
}
//
//#include <iostream>
//using namespace std;
//int cnt = 0;//计数器
//int m;
//void hanoi(string A, string B, string C, int n)//A的上层n的盘子通过B的中转，全部放到C
//{
//  if(n == 1)//如果只需要移一个盘子，那么一次就可以输出结果了
//  {
//    cnt ++;
//    if(cnt == m)cout << "#" << n << ": " << A << "->" << C << '\n';//这里必须满足特判m次才输出，如果只移动一个盘但是不满足在m次，那就不管他
//  }
//  else
//  {
//    hanoi(A, C, B, n - 1);//将除了底下最大的盘子以外的盘子通过C移动到B
//    cnt ++;
//    if(cnt == m)cout << "#" << n << ": " << A << "->" << C << '\n';//反正无论如何这一轮的递归都是输出对应这一轮的n,因为这一轮移动的就是当前第n个盘（m只是步骤，不是直接对标盘号）
//    hanoi(B, A, C, n - 1);
//  }
//}
//int main()
//{
//  int n;cin >> n >> m;
//  hanoi("A", "B", "C", n);
//  cout << cnt << endl;
//  return 0;
//}
