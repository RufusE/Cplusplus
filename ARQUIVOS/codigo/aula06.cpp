#include <iostream>

using namespace std;

int n1=0, n2=0; //variáveis globais

int main()
{
  //operadores matemáticos : + - / * %      raiz sqrt()	
  int n3=0,n4=0; //variáveis locais
  int res=0;
  
  n1=11;
  n2=3;
  n3=5;
  n4=3;

  res=n1+n2+n3+n4;

  cout<<"A soma de todas variáveis é ...:\n"<<res<<"\n";    
  res = res/2;
  cout<<"Divisão é ...:\n"<<res<<"\n";
    

  return 0;
}
