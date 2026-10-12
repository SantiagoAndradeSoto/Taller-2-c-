#include <iostream>
#include <string>
using namespace std;

int main(){
    int a;
    int b;
    int c;
    double x;
    double discriminante;
    double raiz;

    cout<<"Digite el primer coeficiente: ";
    cin>>a;
    cout<<"Digite el segundo coeficiente: ";
    cin>>b;
    cout<<"Digite el tercer coeficiente: ";
    cin>>c;
    if(a == 0 && b == 0){
        cout<<"No es una ecuacion ni de primer grado ni de segundo grado. ";
    }else if (a == 0){
        cout<<"Esta es una ecuacion lineal. \n ";
        x = -c / b;
        cout<<"El valor de x es: " << x << "\n";
    }else{
        cout<<"\nCalculando el discriminante... \n";
        discriminante = (b*b) - 4 * a * c;
        cout<<"El discriminante es: " << discriminante <<"\n";
        if(discriminante > 0){
            cout<<"El discriminante es positivo, tiene 2 raices reales distintas\n ";
            cout << "x1 = (" << -b << " + v" << discriminante << ") / " << (2 * a) << "\n";
            cout << " x2 = (" << -b << " - v" << discriminante << ") / " << (2 * a) << "\n";            
        }else if(discriminante < 0){
            cout<<"El discriminante es negativo, las raices son complejas \n";
        }else{
            cout<<"El discriminante es cero, tiene una unica raiz real \n ";
            cout << "x1 = " << -b << " / " << (2 * a) << "\n";
        }
    }
    
    return 0;

}