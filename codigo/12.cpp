#include <iostream>

using namespace std;

int main()
{   // operador ternário
    //(expressão) ? valor 1; valor2
    int n1=0,n2=0,nota=0;
    string res;

     cout<<"\nDigite a primeira nota\n";
     cin>>n1;
     cout<<"\nDigite a segunda nota\n";
     cin>>n2;

     nota=n1+n2;

     //>=60  aprovado
     //<60  reprovado

     (nota >=60) ? res="Aprovado" : res="Reprovado";

     cout<<"Situação do aluno...="<< res <<"\n";

    return 0;
}
