#include<iostream>
using namespace std;

int main(){
	
	//calculadora 
	
	float num1, num2;
	char op;
	int resultado;
	
	cout<< "Digite um numero: ";
	cin>> num1;
	cout<< "operacao: ";
	cin>> op;
	cout<< "Digite outro numero: ";
	cin>> num2;
   
	if(op == '+'){
	resultado = num1 + num2;
	}	
	else if(op == '-'){
	resultado = num1 - num2;
	}
	else if(op == '*'){
	resultado = num1 * num2;
	}
	else if(op == '/'){
	resultado = num1 / num2;
	}
	else{
	cout<< "operação matematica invalida.";
	}
	cout << resultado;
	return 0;
}
