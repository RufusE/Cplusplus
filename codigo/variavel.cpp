/*
 *Variáveis
 *
 *
 */
#include <iostream>

using namespace std;

int main()
{  
  // = atribuição  	 
  //Variáveis - tipo e nome
  
  int numero = 0;	
  char letra ='?';
  double real =0.0; 
  float decimal=0.0; //precisão menor
  bool vivo=true; //verdadeiro ou falso
  string nome="teste";

  cout<<numero<<"\n";
  cout<<nome<<"\n";
  cout<<"Digite um número double\n";
  cin>>real;
  cout<<"Você digitou..:\n"<<real<<"\n";
  cout<<"Digite outro número..:\n";
  cin>>real;
  cout<<"Você digitou...:\n"<<real<<"\n";

  return 0;
} 
