#include <iostream>
using namespace std;

main(){
	
	int edad = 25,*p_edad;
	p_edad = &edad;
	
	cout<<"Varieble edad: "<<edad<<endl;
	cout<<"Puntero edad: "<<*p_edad<<endl;
	
	cout<<"----- Cambiar valores -----"<<endl;
	*p_edad=40;
	
	cout<<"Variable edad: "<<edad<<endl;
	cout<<"Puntero edad: "<<*p_edad<<endl;
	
	cout<<"----- Otro valor a p_edad valores -----"<<endl;
	int edad2=100;
	p_edad = &edad2;
	edad=400;
	
	cout<<"Variable edad: "<<edad<<endl;
	cout<<"Puntero edad: "<<*p_edad<<endl;
	cout<<"Variable edad2: "<<edad2<<endl;
	
	
	system("pause");
	
}
