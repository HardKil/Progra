#include<iostream>

using namespace std;

int main(){
	
	int numero;
	 
	cout<<"ingrese el numero"<<endl;
	cin>>numero;
	
	if(numero>0){
		cout<<"el numero es verdadero"<<endl;
	}
	else if(numero<0){
		cout<<"el numero es falso"<<endl;
	}
	
	else{
		cout<<"el numero es: 0"<<endl;
	}
	return 0;
}
