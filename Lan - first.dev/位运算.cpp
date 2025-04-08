#include <iostream>
#include <bitset>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	long long i = 1;
	int count = 23;
	
	while (count)
	{
		bitset <9> b (i++);
		if(b.count()==3)
		{
			count--;
		}
	}
	cout << --i << endl;
	return 0;
}
