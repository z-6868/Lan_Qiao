#include <iostream>
#include <vector> 
#include <algorithm> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

	vector <int> d_count(10);
	

bool cmp (int  A,int  B)
{
	//初始化统计变量
	int a=A,b=B;
	int cot_A = 0; 
	int cot_B = 0; 
	
	//统计封闭图形
	while(a)
	{
		cot_A += d_count[a % 10];
		a/=10; 
	}
	while(b)
	{
		cot_B += d_count[b % 10];
		b/=10; 
	}
	//判断
	if(cot_A==cot_B)
	{
		return a<b;
	 } 
	 else
	 {
	 	return cot_A < cot_B;
	 }
}

int main(int argc, char** argv) {
	//统计每个数字的封闭图形个数

	d_count[0] = 1; d_count[1] = 0; d_count[2] = 0; d_count[3] = 0; d_count[4] = 1;
    d_count[5] = 0; d_count[6] = 1; d_count[7] = 0; d_count[8] = 2; d_count[9] = 1; 
	//输入
	int n;
	cin >> n;
	vector <int> num(n);
	for(int i = 0;i<n;i++)
	{
		cin >> num[i];
	}
	
	//排序 
	sort(num.begin(),num.end(),cmp);
	
	//输出 
	for(int i = 0;i<n;i++)
	{
		cout << num[i] << " ";
	}
	return 0; 
}
