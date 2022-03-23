#include <iostream>

using namespace std;

int main(){

    //operador ternário
    //(expressão) ? valor1 : valor2;

    int n1, n2, nota;
    string res;

    //cout<<"Digite a primeira nota: ";
    //cin>> n1;

    //cout<<"Digite a segunda nota: ";
    //cin>>n2;

    //nota = n1 + n2;

    // >=60  aprovado
    // <60 reprovado
    
    //(nota >= 60) ? res="Aprovado" : res="Reprovado";
    //cout<<"\nSituação do aluno: " << res << "\n";

    //res=(nota >= 60) ? "aprovado" : "reprovado";
    //cout<<"\nSituação do aluno: " << res << "\n";


     int  x = 5;
     cout<<"Digite um valor: ";
     cin>>n1;

     (n1 >= 10) ? x++ : x--;

     cout<<"\nNovo valor do x: " << x << "\n";
     

    return 0;
}