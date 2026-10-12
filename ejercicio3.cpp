#include <iostream>
#include <string>
using namespace std;

int main(){
    float peso;
    float estatura;
    
    cout<<"Digite su estatura en metros (1.xx): ";
    cin>>estatura;
    if(estatura<= 0){
        cout<<"Error, digite una estatura correcta: ";
        cin>>estatura;
    }else{
        
    }
    
    cout<<"Digite su peso en Kilogramos: ";
    cin>>peso;
        if(peso<= 0){
        cout<<"Error, digite un peso correcto: ";
        cin>>peso;
    }else{
        
    }
    float imc = peso / (estatura*estatura);
    
    if(imc<18.5){
        cout<<"Su imc es de " << imc << ", usted tiene bajo peso.";
    }else if(imc<25){
        cout<<"Su imc es de " << imc << ", usted esta normal.";
    }else if(imc<30){
        cout<<"Su imc es de " << imc << ", usted tiene sobrepeso.";
    }else{
        cout<<"Su imc es de " << imc << ", usted tiene obesidad.";

    }
    return 0;

}