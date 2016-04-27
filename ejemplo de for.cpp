#include<iostream>
#include<stdlib.h>
int numero[10];
main(){
	using namespace std;
	cout<<"ingrese sus notas"<<endl;
	for(int i=0;i<10;i++){
		cout<<"ingrese nota "<<i+1<< " : ";
		cin>>numero[i];	
	}
	cout<<endl;
	float suma=0;
	for(int i=0;i<10;i++){
		suma=suma+numero[i];
		
	}
	float promedio=suma/10;
	cout<<"su promedio es "<<promedio<<endl;
	
}





