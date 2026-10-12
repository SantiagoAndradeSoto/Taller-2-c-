#include <iostream>
#include <string>
using namespace std;

int main(){
    double valorhora;
    int hora;
    double salario;
    double vhe;
    double vhd;
    double descuento;
    double salario_neto;
    int horas_normales = 0;
    int horas_extras = 0;
    int horas_dobles = 0;

    cout<<"Digite el valor de cada hora: ";
    cin>>valorhora;
    if(valorhora< 0){
        cout<<"Error, digite un valor correcto (numeros positivos): ";
        cin>>valorhora;
    }else{
        
    }
    
    cout<<"Digite la cantidad de horas trabajadas: ";
    cin>>hora;
    if(hora< 0){
        cout<<"Error, digite una cantidad de horas correctas (numeros positivos): ";
        cin>>hora;
    }else{
        
    }

    if(hora <= 40){
        salario = valorhora * hora;
        horas_normales = hora;
        cout<<"Trabajaste menos o igual a 40 horas, el valor por hora sigue siendo "<<valorhora <<" pesos\n";
    }else if(hora >= 41 && hora <= 48 ){
        horas_normales = 40;
        horas_extras = hora - 40;
        vhe = valorhora * 1.5;
        cout<<"Trabajaste mas de 40 horas pero menos que 48, el valor de la hora aumento a " << vhe << " pesos\n";
        salario = (horas_normales * valorhora) + (horas_extras * vhe);
    }else{
        horas_normales = 40;
        horas_extras = 8;
        horas_dobles = hora - 48; 
        vhe = valorhora * 1.5;
        vhd = valorhora * 2;
        cout<<"Trabajaste mas de 48 horas, el valor de la hora aumento a " << vhe << " pesos hasta las 48 horas\n";
        cout<<"A partir de las 48 horas se le pagara el valor de la hora a " << vhd <<" pesos\n";
        salario = (horas_normales * valorhora) + (horas_extras * vhe) + (horas_dobles * vhd);

    }
    
    if (salario >= 2000000){
        cout<<"Su salario bruto es de mas de 2 millones, su descuento es del 8%\n\n";
        descuento = salario * 0.08;
        salario_neto = salario - descuento;
    } else{
        cout<<"Su salario bruto no es de mas de 2 millones, su descuento es del 4%\n\n";
        descuento = salario * 0.04;
        salario_neto = salario - descuento;
    }
    
    cout<<"================= Informe salario =================== \n";
    cout<<"    Trabajo: " << horas_normales << " horas normales\n";
    cout<<"    Trabajo: " << horas_extras << " horas extras\n";
    cout<<"    Trabajo: " << horas_dobles << " horas dobles\n";
    cout<<"    Su salario bruto es: " << salario << " pesos \n";
    cout<<"    Su descuento es de: " << descuento <<" pesos \n";
    cout<<"    Su salario neto es: " << salario_neto << " pesos \n";
    cout<<"======================================================";
    return 0;
}