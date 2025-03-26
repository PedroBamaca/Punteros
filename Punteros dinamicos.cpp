#include <iostream>
using namespace std;

main(){
	
	int edad,*p_edad;
	p_edad=&edad;
	
	cout<<"Ingrese edad: ";
	cin>>edad;
	cout<<*p_edad<<endl;
	
	if(*p_edad>18){
		cout<<"Mayor de edad"<<endl;
	}else{
		cout<<"Menor de edad"<<endl;
	}


/*punters con asignacion de memori dinamica;
new= reserva un espacio en memoria
delete [] = libera la memoria*/
	
	
  int total=0;
	int notas[total];
	char res;
	int *p_notas = notas;
	
	
	do{
		cout<<"Ingrese nota "<<total<<": ";
		cin>>notas[total];
		total++;
		cout<<"Desea ingtesar otro valor (s/n): ";
		cin>>res;
		
	}while(res=='s'|| res=='S');
	
	for(int i=0; i<total;i++){
		cout<<"Nota ("<<i<<"): "<<*p_notas<<endl;
		p_notas++;}
	
	
	
	
	
	
	int total=0, *p_notas;
	p_notas = new int [total];
	char res;
	
	do{
		cout<<"Ingrese nota "<<total<<": ";
		cin>>p_notas[total];
		total++;
		cout<<"Desea ingtesar otro valor (s/n): ";
		cin>>res;
		
	}while(res=='s'|| res=='S');
	
	for(int i=0; i<total;i++){
		cout<<"Nota ("<<i<<"): "<<*p_notas<<endl;
		p_notas++;	
	}
	delete[]p_notas;*/ 
	
	int fil =0, col=0,**pm_notas;
	
	cout<<"Ingrese la cantidad estudiantes: ";
	cin>>fil;
	cout<<"Ingrese la cantidad de notas por estudiante: ";
	cin>>col;
	
	pm_notas=new int *[fil];
	for(int i=0;i<fil;i++){
		pm_notas[i]=new int[col];
	}
	
	for(int i=0;i<fil;i++){
		cout<<"-----------------  Estudiante: "<<i<<"  -----------------"<<endl;
		for(int ii=0;ii<col;ii++){
			cout<<"Nota:"<<ii<<" : ";
			cin>>*(*(pm_notas+i)+ii);
			}
	}
	
	cout<<"----------  Mostrar notas  ----------"<<endl;
	
	for(int i=0;i<fil;i++){
		for(int ii=0;ii<col;ii++){
			cout<<*(*(pm_notas+i)+ii)<<endl;
			}
		cout<<"--------------------------"<<endl;
	}
	
	for(int i=0;i<fil;i++){
		delete [] pm_notas [i];
	}
	delete [] pm_notas;
	
	
	system("pause");
}

