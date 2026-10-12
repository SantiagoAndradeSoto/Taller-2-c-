#include <iostream>
#include <string>
using namespace std;

int main(){
    int año;

    cout<<"Digite el año para verficar si el año es o no es bisiesto: ";
    cin>>año;
    if(año< 0){
        cout<<"Error, digite un año con numeros positivos: ";
        cin>>año;
    }else{
        
    }
    
    if(año % 4 == 0 && (año % 100 != 0 || año % 400 == 0)){
        cout<<"El año "<< año << " es bisiesto.";
    }else{
        cout<<"El año "<< año << " no es bisiesto.";

    }
    return 0;

}