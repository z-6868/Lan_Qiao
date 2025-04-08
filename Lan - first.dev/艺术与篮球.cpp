#include <iostream>
#include <vector>
#include <map>
#include <string> 
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	//初始化变量
	int sum = 0;
	int basketball = 0;
	int calligraphy = 0;
	//八位数数组
	vector <int> v_m_days = {0,31,28,31,30,31,30,31,31,30,31,30,31} ;
	vector <int> data(8); 
	map <int,int> m_bihua = {
	                    {0,13},
	                    {1,1},
	                    {2,2},
	                    {3,3},
	                    {4,5},
	                    {5,4},
	                    {6,4},
	                    {7,2},
	                    {8,2},
	                    {9,2}
	                  };
	//单个数字的日期补0
	string s0 = "0";
	string s_y; 
	string s_m; 
	string s_d; 
	string s; 
	//年月大循环
	for (int i = 2000;i<=2024;i++)
	{
		for (int j = 1;j<=12;j++)
		{
		     //判断闰年 月的天数
	        if ((i%4==0&&i%100!=0)||(i%400==0))
	        { 
	         	if(j==2)
	    	    v_m_days[2]++;
	   	    }
	    	
			for(int d = 1;d<=v_m_days[j];d++)
		    {
			    //保存八字
		       s_y = to_string(i);
		       s_m = to_string(j);
		       s_d = to_string(d);
		        
				//补0情况
		         if(j < 10)
		       {
		 	        s_m = s0 + to_string(j);
		       }  
		         if(d < 10)
		       {
		       		s_d = s0 + to_string(d);
			   }
		        
		       s = s_y + s_m + s_d;
		       
		       //将字符串转换为数组
			   for(char c:s)
			   {
			   	data.push_back(c-'0');
			   } 
			   
			   //利用数组  键值对  求每天的笔画数
			   for(int l=0;l<8;l++)
			   {
			    sum +=  m_bihua[data[l]];
			   } 
			   
			   //判断笔画数是否超过50
			   if(sum > 50) 
			     {
			     	basketball++;
			     }
			   else
				  {
				  	  calligraphy++;
				  }
			    
	    	}
		}
	}
	
	//输出在这段时间内打篮球和书法的天数
	cout << "打篮球天数：" << basketball << endl; 
	cout << "练书法天数：" << calligraphy << endl; 
	
	
	
	return 0;
}
