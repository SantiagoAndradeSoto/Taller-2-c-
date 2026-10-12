#include <iostream>
#include <string>
using namespace std;

int main(){
    int n1;
    int n2;
    int n3;
    
    cout<<"Digite el primer numero entero: ";
    cin>> n1;
    cout<<"Digite el segundo numero entero: ";
    cin>> n2;
    cout<<"Digite el tercer numero entero: ";
    cin>> n3;

    if(n1 == n2 && n2 == n3){
        cout<<"Los 3 numeros son iguales";
        
    } else if(n1 == n2 || n2 == n3 || n1 == n3){
        cout<<"\nHay dos numeros iguales y uno distinto. \n";
        if(n1 > n2 && n1 > n3){
            cout<<"El numero " << n1 << " es el mayor y " << n2 << " es el menor";
        }else if(n2 > n1 && n2 > n3){
            cout<<"El numero " << n2 << " es el mayor y " << n1 << " es el menor";
            
        }else{
            cout<<"El numero " << n3 << " es el mayor y " << n1 << " es el menor";

        }
    }else{
        cout<<"\nLos 3 numeros son distintos \n";
        if(n1 > n2 && n1 > n3){
            if(n2>n3){
                cout<<"El numero " << n1 << " es el mayor y " << n3 << " es el numero menor";
            } else{
                cout<<"El numero " << n1 << " es el mayor y " << n2 << " es el numero menor";
            }
        }else if(n2 > n1 && n2 > n3){
            if (n1 > n3){
                cout<<"El numero " << n2 << " es el mayor y " << n3 << " es el numero menor";
            }else{
                cout<<"El numero " << n2 << " es el mayor y " << n1 << " es el numero menor";
                
            }
        
        }else{
            if(n2> n1){
                cout<<"El numero " << n3 << " es el mayor y " << n1 << " es el numero menor";
            }else{
                cout<<"El numero " << n3 << " es el mayor y " << n2 << " es el numero menor";

            }
            

        }    

    }
    return 0;
}