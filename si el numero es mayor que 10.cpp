#include <iostream>

using namespace std;

int main(){
	
	int numero;
	 
	cout<<"ingrese el numero"<<endl;
	cin>>numero;
	
	if(numero>10){
		cout<<"el numero es mayor"<<endl;
	}
	else if(numero<10){
		cout<<"el numero es menor"<<endl;
	}
	
	else{
		cout<<"el numero es igua"<<endl;
	}
	return 0;
}
