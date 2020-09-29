#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{

  cout<<"Por favor insira um número ponto flutuante\n";
   double numero = 0;
    cin>>numero;	

  cout<<"\nNúmero == "<< numero
	<<"\nNúmero + Dobro  == "<<numero + numero
        <<"\nNúmero / divisão  == "<<numero / numero
        <<"\nNúmero * multiplicado == "<< numero * numero
        <<"\nNúmero - Subtração por 1 == " << numero - 1	
        <<"\nNúmero raiz == " << sqrt(numero)
	<<endl;

  return 0;
}
