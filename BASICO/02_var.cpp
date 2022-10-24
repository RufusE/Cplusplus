#include <iostream>
//variável

using namespace std;

int main()
{
    //Tipo nome;
    //Tipo nome = Valor;

    int vidas = 0;           //10,25
    char letra = 'B';          //'b'
    double decimal = 5.2;      //2.49999999  
    float decimal2 = 5.3 ;      //2.5
    bool vivo = true;           //true / false
    string nome = "String teste";         //"caracteres"
    char letras[20];     //vetor 20 caracteres

    cout<< vidas<<"\n";
    cout<<letra<<"\n";
    cout<<decimal<<"\n";
    cout<<decimal2<<"\n";
    cout<<vivo<<"\n";
    cout<<nome<<"\n";
    cout<<"\n";
    cout<<vidas << "\n" << letra;

    cout<<"Digite o número de vidas\n";
    cin>>vidas;
    cout<<"\nQuantidade de vidas: " << vidas ;
    

    return 0;
}
