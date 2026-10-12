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
    if(ingreso_mensual<0){
        cout<<"\nError, por favor digite un monto valido (monto positivo)";
        return 0;
    }else{
        
    }
    
    cout<<"\nDigite la deuda mensual: ";
    cin>> deuda_mensual;
    if(deuda_mensual<0){
        cout<<"\nError, por favor digite un monto valido (monto positivo)";
        return 0;
    }else{
        
    }
    
    cout<<"\nDigite su edad: ";
    cin>> edad;
    if(edad< 18){
        cout<<"\nInvalido, no eres mayor de edad ";
        return 0;
    }else if(edad > 100){
        cout<<"\nInvalido, la edad debe ser menor a 100";
        return 0;
    }else{
        
    }
    
    cout<<"\n¿Usted tiene historial crediticio? (1 para si y 0 pero no): ";
    cin>> historial;
    if(historial != 1 ){
        if(historial != 0){
            cout<<"\nError, por favor digite una opcion valida (1 para si y 0 paro no)";
            return 0;
        }else{
            
        }
    }else{
        
    }
    
    double relacion = deuda_mensual / ingreso_mensual;
    int capacidad_de_pago = ingreso_mensual - deuda_mensual;
    
    if(relacion>0.5 || capacidad_de_pago<0){
        riesgo = "Alto";
    }else if(relacion<= 0.3 && edad < 25 && historial == 1){
        riesgo = "Bajo";
    }else{
        riesgo = "Medio";
    }
    
    cout<<"\n====== Informe Final ======\n";
    cout<<"Relacion: " << relacion << "\n";
    cout<<"Capacidad de pago: "<< capacidad_de_pago << "\n";
    cout<<"Nivel de riesgo: "<< riesgo << "\n";
    
    return 0;
    
}