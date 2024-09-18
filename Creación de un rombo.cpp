#include <iostream>
using namespace std;
//rombo
void ejercicio1(){

int numero;
cout<<"Ingrese un numero impar mayor a uno: ";
cin>>numero;
//mitad arriba    //int i=valor inicial; i<= valor final; i+=2 (numeros pares)(i=i+2) || i-- similar a i=i-1 || i++ similar i=i+1 
	for(int i=0; i<=numero/2; i++){ 
		//3 caracteres
		for(int l=(numero/2 + 1)-i; l>1; l--) cout<<"A";
		for(int j=0; j<2*i+1; j++) cout<<"*";
		for(int k=(numero/2 + 1) -i; k>1; k--) cout<<"B";
		
		cout<<endl;		
	}
	
//mitad abajo
	for(int i=0; i<numero/2; i++){
		//3 caracteres
		for(int l=0; l<i+1; l++) cout<<"C";
		for(int j=numero; j>2*(i+1); j--) cout<<"+";
		for(int k=0; k<i+1; k++) cout<<"D";
		
		cout<<endl;
	}


}

int main(){
	ejercicio1();
	
	return 0;
}
