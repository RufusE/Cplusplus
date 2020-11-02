/*
*
* #08 - Invertendo valores de variáveis
*
*/
#include <iostream>

using namespace std;

int main()
{
  //invertendo valores	
  int num=10;

  cout<< num <<"\n\n";
  
  num = num * -1;  
 
  cout<<" O número depois da inversão ...: \n\n"<< num <<"\n"; 
  
  //testando outra forma
  int num2 =20;
  cout<<"Valor de num ...:\n\n"<< num2 << "\n";
  cout<<"Valor de decremento ...:\n\n" << -num2 <<"\n";
  cout<<"Verificando valor ...:\n\n" << num2 <<"\n";  
  
  return 0;	
}	
