#include <iostream>

using namespace std;

int main(){
	
	int numero;
	 
	cout<<"ingrese el numero"<<endl;
	cin>>numero;
	
	if(numero>=18){
		cout<<"puede ingresar al sitio"<<endl;
	}
	else if(numero<=17)
		cout<<"no puede ingresar al sitio"<<endl;
	
	return 0;
}
