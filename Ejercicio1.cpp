#include <iostream>
#include <string>
using namespace std;

int main(){
    int segundos;
    cout<<"Digite un numero entero de segundos (Positivo): ";
    cin>> segundos;
    if (segundos > 0){
        int horas = segundos / 3600;
        int minutos = (segundos % 3600) / 60;
        int seg = segundos % 60;
        cout<<segundos << " segundo equivalen a " << horas << " Hora(s), " << minutos << " Minuto(s)" << seg << " Segundo(s) ";
    } else{
        cout<<"Error, digite una cantidad validad de segundos (Numeros positivos): ";
        cin>> segundos;
        int horas = segundos / 3600;
        int minutos = (segundos % 3600) / 60;
        int seg = segundos % 60;
        cout<<segundos << " segundo equivalen a " << horas << " Hora(s), " << minutos << " Minuto(s)" << seg << " Segundo(s) ";
    }
    return 0;
    
}