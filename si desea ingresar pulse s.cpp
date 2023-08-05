#include <iostream>

using namespace std;

int main(){
	
	int valor1,valor2,resultado;
	char i='s';
	while(i=='s'){
		cout<<"ingrese primer valor"<<endl;
		cin>>valor1;
		cout<<"ingrese el segundo valo"<<endl;
		cin>>valor2;
		
		resultado = valor1,+valor2;
		cout<<"resultado es"<<resultado<<endl;
		cout<<"si desea continuar oprima 's'";
		cin>>i;
	}
	return 0;
}
