#include <iostream>

using namespace std;

int n1, n2; // Variáveis globais

int main()
{   
    //Operadores Matemáticos: + - / * % ()
    int n3, n4; //Variáveis locais
    int res, res2;

    n1 = 11;
    n2 = 3;
    n3 = 5;
    n4 = 2;

    res = (n1+n2+n3+n4) -1;
    cout<<"A soma de todas as var: \n" << res <<"\n";

    res = n1+n2*n4;
    cout<<"Resultado\n" << res <<"\n";

    res=(n1+n2)*n4;
    cout<<"Resultado\n"<< res <<"\n";

    res = n1/n2;
    res2 = n1%n2;

    cout<<"Divisão:" << res <<"\n";
    cout<<"Resto:" << res2 << "\n";


    return 0;
}