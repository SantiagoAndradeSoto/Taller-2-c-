#include <iostream>
#include <string>
using namespace std;

int main() {
	float nota1;
	float nota2;
	float nota3;

	cout<<"Digite la primera nota de 0.0 a 5.0: ";
	cin>>nota1;
	if (nota1>5.0 || nota1<0.0) { // validacion rango correcto para cada nota
		cout<<"\nError, digite una nota valida en el rango de 0.0 a 5.0";
		cin>>nota1;
	} else { // termina condicional y sigue para preguntar la siguiente nota

	}
	cout<<"Digite la segunda nota de 0.0 a 5.0: ";
	cin>>nota2;
	if (nota2>5.0 || nota2<0.0) {
		cout<<"\nError, digite una nota valida en el rango de 0.0 a 5.0";
		cin>>nota2;
	} else {

	}
	
    cout<<"Digite la tercera nota de 0.0 a 5.0: ";
    cin>>nota3;
    if (nota3>5.0 || nota3<0.0){ 
        cout<<"\nError, digite una nota valida en el rango de 0.0 a 5.0\n\n";
        cin>>nota3;
    } else{ 
        
    }
    
    // calculo nota final (promedio)
    float notafinal = (nota1 * 0.3) + (nota2 * 0.3) + (nota3 * 0.4);

    
    // Conceptos de la nota
    
    if (notafinal >= 4.5){
        cout<<"Su nota es: " << notafinal <<" (Excelente)";
    } else if(notafinal >= 4.0){
        cout<<"Su nota es: " << notafinal <<" (Bueno)";
    } else if(notafinal >= 3.0){
        cout<<"Su nota es: " << notafinal <<" (Aceptable)";
    } else{
        cout<<"Su nota es: " << notafinal <<" (Reprobado)";

    }
    return 0;
}