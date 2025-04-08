#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//�����·ݵ�����
	int getDaysInMonths (int year,int month)
	{
		static const vector <int> MonthDays = {0,31,28,31,30,31,30,31,31,30,31,30,31};
		if (month == 2)
		{
			bool isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
		    return isLeap ? 29 : 28;
		}
	    return MonthDays[month];
	}

int main(int argc, char** argv) {
	
	int basketball = 0,calligraphy = 0; 
	
	//�ʻ���Ӧ 
	map <int,int> strokeMap = {{0,13}, {1,1}, {2,2}, {3,3}, {4,5}, {5,4}, {6,4}, {7,2}, {8,2}, {9,2}};
	
	//�������� 
	for (int year = 2000; year <= 2024;year++)
	{
		int endMonth = (year<2024) ? 12 : 4;//�жϽ������� 
		for(int month = 1;month <= endMonth;month++)
		{
			//�ж����� 
				int days = getDaysInMonths(year,month);
			    if (year == 2024 && month == 4) days = 13;
			//ȷ�����ڰ���
		    for (int day = 1;day <= days;day++)
		    {
		    	string s = to_string(year) 
		                + ((month < 10? string("0"):"") + to_string(month))
		                + ((day < 10?string("0") :"" )+ to_string(day));
//      string s = (year < 1000 ? "0" : "") + to_string(year); // ��ȫ4λ���
//                s += (month < 10 ? "0" : "") + to_string(month);
//                s += (day < 10 ? "0" : "") + to_string(day);
//		                
		        //�������ڰ��ֱʻ��� 
			      int sum = 0;
			      for (char c : s)
		     	{
			       sum += strokeMap[c - '0'];	
		    	} 
			
		        //ͳ��Ҫȥ��ʲĪ 
		        sum > 50 ?  basketball++ : calligraphy++;
			}
					 
		}
	}
	//��ӡ���������� 
	printf("%d",basketball);
	return 0;
}
