#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	cout<<"\n\t\t__________welcome to codsoft_____\n"<< endl;
	cout<<"\n\t\t You have to guess number between 1 to 100";
	cout<<"\n\t\t Lets start playing "<<endl;
	
	srand(time(0));
	int randNumber=(rand() %100)+1;
	cout<< "\n^^**You have 5 chance to guess the number.**^^\n";
	int chanceLeft =5;
	int playerInput;
	
	for (int i=1;i<=5;i++)
{
	
	cout <<"\n Enter the Number:";
	cin >>playerInput;
	
	
	if(playerInput ==randNumber)
	{
		cout<<"\n congrats!!..YOU have successfully guessed the number\n";
		cout<<"\n Thanks for playing....";
		break;
	}
	else
	{
		
		if (playerInput >randNumber)
		{
			cout<< "\n ""insert a smaller  number . try Again"""<<endl;
		}
		else
		{
			cout<<"\n[Insert a Larger Number .try Again]"""<<endl;
			
		}
		
	}
	
	chanceLeft--;
	cout<<"\n (chances Left to guess the Random Number:"<<chanceLeft<<")"<<endl;
	
	if(chanceLeft ==0)
	{
		cout<<"\n sorry your chance has been finished... \n"<<endl;
		cout<<"the rand Number was:"<<randNumber<<endl;
		cout<<"thanks for playing ";
		
	}
}
cout<<"\n";

	return 0;
}



