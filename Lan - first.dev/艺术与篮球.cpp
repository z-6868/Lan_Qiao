#include <iostream>
#include <vector>
#include <map>
#include <string> 
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	//��ʼ������
	int sum = 0;
	int basketball = 0;
	int calligraphy = 0;
	//��λ������
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
	//�������ֵ����ڲ�0
	string s0 = "0";
	string s_y; 
	string s_m; 
	string s_d; 
	string s; 
	//���´�ѭ��
	for (int i = 2000;i<=2024;i++)
	{
		for (int j = 1;j<=12;j++)
		{
		     //�ж����� �µ�����
	        if ((i%4==0&&i%100!=0)||(i%400==0))
	        { 
	         	if(j==2)
	    	    v_m_days[2]++;
	   	    }
	    	
			for(int d = 1;d<=v_m_days[j];d++)
		    {
			    //�������
		       s_y = to_string(i);
		       s_m = to_string(j);
		       s_d = to_string(d);
		        
				//��0���
		         if(j < 10)
		       {
		 	        s_m = s0 + to_string(j);
		       }  
		         if(d < 10)
		       {
		       		s_d = s0 + to_string(d);
			   }
		        
		       s = s_y + s_m + s_d;
		       
		       //���ַ���ת��Ϊ����
			   for(char c:s)
			   {
			   	data.push_back(c-'0');
			   } 
			   
			   //��������  ��ֵ��  ��ÿ��ıʻ���
			   for(int l=0;l<8;l++)
			   {
			    sum +=  m_bihua[data[l]];
			   } 
			   
			   //�жϱʻ����Ƿ񳬹�50
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
	
	//��������ʱ���ڴ�������鷨������
	cout << "������������" << basketball << endl; 
	cout << "���鷨������" << calligraphy << endl; 
	
	
	
	return 0;
}
