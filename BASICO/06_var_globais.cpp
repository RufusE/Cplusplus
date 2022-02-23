#include <iostream>

using namespace std;

int n1, n2; // Variáveis Globais


int main(){

    int n3, n4; // Variáveis locais
    int resultado, resultado2;
    // operadores Matemáticos + - / * % ()

    n1 = 11;
    n2 = 3;
    n3 = 5;
    n4 = 2;


    resultado = n1+n2+n3+n4;
    cout<<"Soma de todas variáveis\n "<< resultado<<"\n";

    resultado = (n1 + n2+ n3 + n4) -10;
    cout<<"Novo resultado\n" << resultado <<"\n";

    resultado = (n1 + n2) * n4;
    cout<<"Novo resultado\n" << resultado << "\n";

    resultado = n1/n2;
    resultado2 = n1%n2;

    cout<<"Div: " << resultado << "\n";
    cout<<"Resto : " << resultado2 <<"\n";

    





        








    return 0;

}