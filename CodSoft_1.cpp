#include<iostream>
using namespace std;
int main (){
	int a,b;
	char op;
	cout<<"ENTER THE VALUE OF FIRST OPERAND:";
	cin>> a;
	cout<<"ENTER THE VALUE OF SECOND OPERAND:";
	cin>>b;
	cout<<"ENTER THE OPERATION TO PERFORM:";
	cin>>op;
	switch (op){
		case '+': cout<<"addition of two operand is:"<<(a+b)<<endl;
		break;
		
		case'-': cout<<"substraction of two operand is:"<<(a-b)<<endl;
		break;
		case'*':cout<<"multiplication of two operand is:"<<(a*b)<<endl;
		break;
		
		case '/':cout<<"division of two operand is :"<<(a/b)<<endl;
		break;
		case'%':cout<<"modulus of two operand is:"<<(a%b)<<endl;
		break;
			
			}
	
}