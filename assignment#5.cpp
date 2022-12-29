  //           Ahsan Ali    //
 //           Bscs         //
//           Section      //


#include<iostream>
using namespace std;
#include<conio.h>
//WITH NO ARGUMENT AND NO RETURN VALUE//
void Ev_Od1()
{
	int num;
	cout<<"ENTER A NUMBER:";
	cin>>num;
	if(num%2==0)
	cout<<"EVEN";
	else
	cout<<"ODD";
	getch();	
}
//WITH NO ARGUMENT BUT RETURN VALUE//
string Ev_Od2()
{
	int num;
	cout<<"ENTER A NUMBER:";
	cin>>num;
	if(num%2==0)
		return "EVEN";
	else
		return "ODD";
}
//WITH ARGUMENT BUT NO RETURN VALUE//
void Ev_Od3(int num)
{
	if(num%2==0)
		cout<<"EVEN";
	else
		cout<<"ODD";
	getch();
}
//WITH ARGUMENT AND RETURN VALUE//
string Ev_Od4(int num)
{
	if(num%2==0)
		return "EVEN";
	else
		return "ODD";
}

int main()
{
	char choice;
	while(true)
	{
		system("cls");
		cout<<"1.FUNCTION WITH NO ARGUMENT AND NO RETURN VALUE"<<endl;
		cout<<"2.FUNCTION WITH NO ARGUMENT BUT RETURN VALUE"<<endl;
		cout<<"3.FUNCTION WITH ARGUMENT BUT NO RETURN VALUE"<<endl;
		cout<<"4.FUNCTION WITH ARGUMENT AND RETURN VALUE"<<endl;
		cout<<"5.EXIT"<<endl;
		choice=getche();
		cout<<endl;
		if(choice=='1')
			Ev_Od1();
		
		else if(choice=='2')
		{	cout<<Ev_Od2()<<endl;
			getch();
		}
		
		else if(choice=='3')
		{
			int num;
			cout<<"ENTER A NUMBER:";
			cin>>num;
			Ev_Od3(num);
		}
		
		else if(choice=='4')
		{
			int num;
			cout<<"ENTER A NUMBER:";
			cin>>num;
			cout<<Ev_Od4(num)<<endl;
			getch();
		}
		
		else if(choice==5)
			break;
		else
		{
			cout<<"INVALIDE"<<endl;
			getch();
		}
		
	}
	getch();
	return 0;
}
