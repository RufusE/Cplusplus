#include <iostream>

using namespace std;

int main()
{
  int n1=0;

  cout<< n1 <<"\n\n";

  n1=n1+1;
  
  cout<<"N1 após incremento ...:\n"<< n1 <<"\n";

  //outra forma
  n1+=1;

  cout<<"Outra forma de incremento...:\n" << n1 <<"\n";

  //decremento
  n1-=1;

  cout<<"Decremento ...: \n"<< n1 <<"\n";

  n1++;

  cout<<"Incremento n1++ ...:\n"<< n1 <<"\n";
   
  n1--;

  cout<<"Decremento n1-- \n";
  
  //teste de incremento
  int n2=10;
  cout<<"N2 tem o valor ...:\n"<< n2++ <<"\n";
  n2++;
  cout<<"N2 tem o valor...:\n" << n2 <<"\n";  

  return 0;

}
