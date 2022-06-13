#include <iostream>
using namespace std;
double x, y, z;
double sum;
double product;
double quotient;
double difference;
void first(){
	cout << "Type your first number\n";
}
void second(){
	cout << "Type your second number\n";
}
void add(){
	cout << "Addition\n";
	first();
	cin >> x;
	second();
	cin >> y;
	sum = x+y;
	cout << "The sum is " << sum <<"\n\n";
  
}
void div(){
	cout << "Division\n";
	first();
	cin >> x;
	second();
	cin >> y;
	quotient = x/y;
	cout << "The quotient is " << quotient <<"\n\n";
}
void mult(){
	cout << "Multiplication\n";
	first();
	cin >> x;
	second();
	cin >> y;
	product = x*y;
	cout << "The product is " << product << "\n\n";
}
void sub(){
	cout << "Subtraction\n";
	first();
	cin >> x;
	second();
	cin >> y;
	difference = x-y;
	cout << "The difference is " << difference << "\n\n";
}
int main() {
	cout << "This is the C++ Calculator\n";
	for(;1==1;){
	cout << "[1] Addition\n";
	cout << "[2] Subtraction\n";
	cout << "[3] Multiplication\n";
	cout << "[4] Division\n";
	cout << "Choose a function by the number next to it\n";
	cin >> z;
	if(z == 1){
		add();
	}
	if(z==2){
		sub();
	}
	if(z==3){
		mult();
	}
	if(z==4){
		div();
	}
		}
  return 0;
	
}
