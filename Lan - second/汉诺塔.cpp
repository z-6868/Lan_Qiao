#include <iostream>
using namespace std;
int M;
int  cnt = 0;//������ 
void H(int N,char A,char B,char C)
{
	if (N == 1)
	   {
	   	cnt++;
	   	if (M==cnt)
	    {
	   	cout << "#" << N <<"��" << A << "->" << C <<endl;	
	    }
	   }
	else
	   {
	   	H(N-1,A,C,B);
	
	    cnt++;
	   	if (M==cnt)
	    {
	   	cout << "#" << N <<"��" << A << "->" << C<<endl;	
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
//int cnt = 0;//������
//int m;
//void hanoi(string A, string B, string C, int n)//A���ϲ�n������ͨ��B����ת��ȫ���ŵ�C
//{
//  if(n == 1)//���ֻ��Ҫ��һ�����ӣ���ôһ�ξͿ�����������
//  {
//    cnt ++;
//    if(cnt == m)cout << "#" << n << ": " << A << "->" << C << '\n';//���������������m�β���������ֻ�ƶ�һ���̵��ǲ�������m�Σ��ǾͲ�����
//  }
//  else
//  {
//    hanoi(A, C, B, n - 1);//�����˵��������������������ͨ��C�ƶ���B
//    cnt ++;
//    if(cnt == m)cout << "#" << n << ": " << A << "->" << C << '\n';//�������������һ�ֵĵݹ鶼�������Ӧ��һ�ֵ�n,��Ϊ��һ���ƶ��ľ��ǵ�ǰ��n���̣�mֻ�ǲ��裬����ֱ�ӶԱ��̺ţ�
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
