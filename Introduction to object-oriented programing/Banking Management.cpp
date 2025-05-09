#include<iostream>
#include<string>
using namespace std;

class Bank{
	   public:
	   	string name;
	   	int ac_no,bal=5000,de,we;
	   	register1()
	   	{
	   	  cout<<"Enter The Name :";
	   	  cin>>name;
	   	  cout<<"Enter Ac number :";
	   	  cin>>ac_no;
	   	  
	   	  cout<<"your intial balance is :"<<bal<<endl;
	   	  this -> bal=bal;
		}
		deposit()
		{
			cout<<"Enter Amout of deposit :";
			cin>>de;
			
			this ->bal+=de;
			cout<<"Deposit successfully!!"<<endl;
		}
		withdraw()
		{
			cout<<"Enter Amout of withdraw :";
			cin>>we;
			
			this ->bal-=we;
			
			cout<<"withdraw successfully!!"<<endl;
			
		}
		check()
		{
		  cout<<"your balance is :"<<this->bal<<endl;	
		}


main()
{
	Bank obj;
	
	cout<<"press 1 for register!!"<<endl;
	cout<<"press 2 for exit!!"<<endl;
	
	int ch;
	
	cout<<"Enter choice :";
    cin>>ch;
    
	if(ch==1)
	{
		
		obj.register1();
		while(1)
		{
			
			
			cout<<"press 1 for deposit!!"<<endl;
			cout<<"press 2 for withdraw!!"<<endl;
			cout<<"press 3 for check balance!!"<<endl;
			cout<<"press 4 Exit!!"<<endl;
			
			int ch1;
			cout<<"Enter your choice :";
			cin>>ch1;
			
			if(ch==1)
			{
				obj.deposit();
			}
			else if(ch==2)
			{
				obj.withdraw();
			}
			else if(ch==3)
			{
				obj.check();
			}
			else if(ch==4)
			{
			  cout<<"Thank you!!";
			  break;
			}
		}
	}
	else
	{
		cout<<"Thank you!!";
	}
}
};
