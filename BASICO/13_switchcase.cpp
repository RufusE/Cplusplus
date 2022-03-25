#include <iostream>

using namespace std;

int main(){

    int valor;
    cout<<"Selecione uma cor:\n";
    cout<<"[1]=Verde, [2]=Azul, [3]=Vermelho\n";
    cin>>valor;

    switch(valor) {
        case 1:
             cout<<"Cor selecionada verde\n";
             break;
        case 2:
             cout<<"Cor selecionada azul\n";
             break;
        case 3:
             cout<<"Cor selecionada vermelha\n";
             break;
        default:
            cout<<"Valor selecionado inválido\n";          
    }

    cout<<"\nPrograma finalizado\n";

    return 0;
}