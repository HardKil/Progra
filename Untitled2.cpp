//hacer una calculadora 

#include <iostream>

using namespace std;

int main(){
	
	int  valor1,valor2,resultado;
	int opcion;
	cout<<"este es tu menu de calculadora"<<endl;
	
	
	cout<<"1.suma"<<endl;
	cout<<"2.resta"<<endl;
	cout<<"3.multiplicacion"<<endl;
	cout<<"4.divicion"<<endl;
	cout<<"seleciones una opcion"<<endl;
	cin>>opcion;
	
	switch(opcion){
		
		case 1:cout<<"ingrese su primer numero"<<endl;
		        cin>>valor1;
		        cout<<"ingrese su segundo numero"<<endl;
		        cin>>valor2;
		        resultado=valor1+valor2;
		        cout<<resultado;break;
		        
		        case 2:cout<<"ingrese su primer numero"<<endl;
		        cin>>valor1;
		        cout<<"ingrese su segundo numero"<<endl;
		        cin>>valor2;
		        resultado=valor1-valor2;
		        cout<<resultado;break;
		        
		        case 3:cout<<"ingrese su primer numero"<<endl;
		        cin>>valor1;
		        cout<<"ingrese su segundo numero"<<endl;
		        cin>>valor2;
		        resultado=valor1*valor2;
		        cout<<resultado;break;
		        
		        case 4:cout<<"ingrese su primer numero"<<endl;
		        cin>>valor1;
		        cout<<"ingrese su segundo numero"<<endl;
		        cin>>valor2;
		        resultado=valor1/valor2;
		        cout<<resultado;break; 
		         }
		         return 0;
}
