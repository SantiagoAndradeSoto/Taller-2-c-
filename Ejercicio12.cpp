#include <iostream>
#include <string>
using namespace std;

int main(){
    double ingreso_mensual;
    double deuda_mensual;
    int edad;
    int historial;
    string riesgo;
    
    cout<<"Digite el ingreso mensual: ";
    cin>> ingreso_mensual;
    if(ingreso_mensual <= 0){
        cout<<"\nError, por favor digite un monto valido (monto positivo)";
        return 0;
    }
    
    cout<<"Digite la deuda mensual: ";
    cin>> deuda_mensual;
    if(deuda_mensual < 0){
        cout<<"\nError, por favor digite un monto valido (monto positivo)";
        return 0;
    }
    
    cout<<"Digite su edad: ";
    cin>> edad;
    if(edad < 18 || edad > 100){ 
        cout<<"\nInvalido, la edad debe ser entre 18 y 100 anos";
        return 0;
    }
    
    cout<<"¿Usted tiene historial crediticio? (1 para si y 0 para no): ";
    cin>> historial;
    if(historial != 1 && historial != 0){
        cout<<"\nError, por favor digite una opcion valida (1 para si y 0 para no)";
        return 0;
    }
    
    double relacion = deuda_mensual / ingreso_mensual;
    int capacidad_de_pago = ingreso_mensual - deuda_mensual;
    
    if(relacion > 0.5 || capacidad_de_pago < 0){
        riesgo = "alto";
    }else if(relacion <= 0.3 && edad >= 25 && historial == 1){
        riesgo = "bajo";
    }else{
        riesgo = "medio";
    }
    
    cout<<"\n====== Informe Final ======\n";
    cout<<"Relacion: " << relacion << "\n";
    cout<<"Capacidad de pago: "<< capacidad_de_pago << "\n";
    cout<<"Nivel de riesgo: "<< riesgo << "\n";
    
    return 0;
}