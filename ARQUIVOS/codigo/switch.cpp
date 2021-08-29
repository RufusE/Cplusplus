#include <iostream>

using namespace std;

int main()
{
    int val;
    cout<<"Selecione uma cor\n";
    cout<<"\n [1] = Verde - [2]= Azul - [3]=Vermelho\n\n";
    cin>>val;

    switch (val) {
        case 1:
          cout<<"Selecionado cor verde\n";
             break;
        case 2:
         cout<<"Selecionado cor Azul\n";
             break;
        case 3:
          cout<<"Selecionado cor vermelha\n";
             break;
    default:
        cout<<"Nenhuma opção válida selecionada\n";
    }

    return 0;
}

/*
 *switch(expressão){
 *
 * case cont1:
 *   comando
 *   break;
 * case cont2:
 *   comando
 *   break;
 * default:
 *   comando;
 *
 */
