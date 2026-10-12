#include <iostream>
#include <string>
using namespace std;

int main(){
    float peso;
    float distancia;
    string pf;
    int zona;
    double total; 
    int agregado_kg = 1200;
    int agregado_km = 50; 
    
    cout << "Digite el peso en Kilogramos: ";
    cin >> peso;
    if (peso > 30){
        cout << "\nError, el peso debe ser menor a 30 kilogramos\n";
        return 0; 
    } else if(peso < 0){
        cout << "\nError, el peso deben ser numeros positivos.\n";
        return 0;
    }
    
    cout << "Digite la distancia en Kilometros: ";
    cin >> distancia;
    if(distancia < 0){
        cout << "\nError, la distancia debe ser numeros positivos.\n";
        return 0;
    }
    
    total = (8000 + (1200 * peso)) + (50 * distancia);
    
    cout << "Digite la zona del envio (1 para nacional o 2 para internacional): ";
    cin >> zona;
    if(zona == 1 || zona == 2){
        if(zona == 2){
            total = total * 1.5;
        }
    } else {
        cout << "\nError, por favor digite una opcion valida (1 para nacional o 2 para internacional)\n";
        return 0;        
    }       

    cout << "¿El paquete es fragil? (S para si o N para no): ";
    cin >> pf;
    if(pf == "S" || pf == "s" || pf == "N" || pf == "n"){
        if(pf == "S" || pf == "s"){
            total = total * 1.20;
        }
    } else {
        cout << "\nError, por favor digite una opcion valida (S para si o N para no)\n";
        return 0;        
    }
     
    cout << "\n\nLa cotizacion de este envio tiene un total de: " << total << " pesos\n";
    
    return 0;
}