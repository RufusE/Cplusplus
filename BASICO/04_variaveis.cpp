#include <iostream>

using namespace std;

int main (){

    // Tipo e nome da variável
    // Tipo nome = VALOR;

    int vidas; //variável inteiro
    char letra; // Letra, um caracter 'b'
    char letras[20]; // vetores e matrizes 
    double decimal; // 2,49999999 
    float decimal2; // 2,5 precisão menor
    bool vivo;  // true or false  0 1
    string nome; //"texto"

    vidas = 0;
    letra ='b';
    decimal = 5.2;
    decimal2 = 5.2;
    vivo = true;
    nome = "'Bruno'";

    cout<< vidas <<"\n" << endl;
    cout<< letra <<"\n" << endl;
    cout<< decimal <<"\n" << endl;
    cout<< decimal2 <<"\n" << endl;
    cout<< vivo <<"\n" << endl;
    cout<< nome <<"\n" << endl;

    cout<<"Digite o número de vidas \n"<<endl;
        cin>>vidas;

    cout<<"Quantidade de vidas:" << vidas <<endl;
    
    return 0;
}