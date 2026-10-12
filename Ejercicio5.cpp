#include <iostream>
#include <string>
using namespace std;

int main(){
    float L1;
    float L2;
    float L3;


    cout<<"Digite el primer lado del triangulo: ";
    cin>>L1;
    if(L1<= 0){
        cout<<"Error, digite una medida correcta para el primer lado:";
        cin>>L1;
    }else{
        
    }
    
    cout<<"Digite el segundo lado del triangulo: ";
    cin>>L2;
    if(L2<= 0){
        cout<<"Error, digite una medida correcta para el segundo lado:";
        cin>>L2;
    }else{
        
    }
    
    cout<<"Digite el tercer lado del triangulo: ";
    cin>>L3;
    if(L3<= 0){
        cout<<"Error, digite una medida correcta para el tercer lado: ";
        cin>>L3;
    }else{
        
    }
    
    if((L1 + L2 > L3) && L1 + L3 > L2 && L3 + L2 > L1){
        cout<<"\nCumple con la desigualdad triangular (si se forma un triangulo) \n";
    } else{
        cout<<"\nNo cumple con la desigualdad triangular (no se forma un triangulo). por favor vuelva y digite las medidas. \n";
        cout<<"Digite el primer lado del triangulo: ";
        cin>>L1;
            if(L1<= 0){
                cout<<"Error, digite una medida correcta";
                cin>>L1;
            }else{
        
            }
    
        cout<<"Digite el segundo lado del triangulo: ";
        cin>>L2;
        if(L2<= 0){
            cout<<"Error, digite una medida correcta";
            cin>>L2;
        }else{
        
        }
    
        cout<<"Digite el tercer lado del triangulo: ";
        cin>>L3;
        if(L3<= 0){
            cout<<"Error, digite una medida correcta";
            cin>>L3;
        }else{
        
        }
    }
    
    float perimetro = L1 + L2 + L3;
    
    if(L1 == L2 && L2 == L3){
        cout<<"Este es un triangulo equilatero y su perimetro es: "<< perimetro;
    }else if(L1 == L2 || L3 == L1 || L3 == L2){
        cout<<"Este es un triangulo isosceles y su perimetro es: "<< perimetro;
    }else{
        cout<<"Este es un triangulo escaleno y su perimetro es: "<< perimetro;

    }
    return 0;
}