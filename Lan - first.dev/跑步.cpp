#include <iostream>
#include <vector>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std; 
int main(int argc, char** argv) {
	int sum = 6,runday = 0,week;
	vector <int> MonthDays = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	 
	 //循环每一天
	 for(int month = 1;month<=12;month++)
	{
	 	for (int day = 1;day<=MonthDays[month];day++)
	   {
	   	//周几
		week=sum++ % 7; 
	   	bool judge = week==6||week==0||day==1||day==11||day==21||day==31;
	   	if(judge) 
	   	  runday++;
	 	
    
	   } 
	} 
	cout << runday << endl;
	return 0;
}
