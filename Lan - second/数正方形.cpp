//#include <iostream>
//#include <vector> 
///* run this program using the console pauser or add your own getch, system("pause") or input loop */
//using namespace std;
//const long long Mod = 1e9 + 7;
//int main(int argc, char** argv) {
//	long long N;
//	cin >> N;
//	//�����Ѿ��������������
//	vector <long long> ans(N+1,-1);
//	ans[1] = 1;
//	// ѭ������ 
//	for (long long i = 2;i<=N;i++) 
//	{
//	  	long long count = 2;
//		  for (long long j = i;j>0;j--)//Ҫ���μ���  ѭ���� 
//		  {
//		  	ans[i] += ans[j-1]*count*count%Mod;
//		   } 
//		
//		ans[i] += i; 
//	}
//	//ȡģ��� 
//	 cout << ans[N]%Mod << endl;
//	return 0;
//}

#include <iostream>

using namespace std;

const long long Mod = 1e9 + 7;
int main ()
{
	long long n;
	cin >> n;
	long long ans = 0;
	for(long long i=1;i<n;i++)
	{
		ans += i*(n-i)*(n-i)%Mod; 
	 } 
	 cout << ans%Mod << endl;
  return 0;	
}
