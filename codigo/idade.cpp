#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{

  cout<<"Operação com idade\n";
  cout<<"Digite sua idade\n";

  int idade;
  cin>>idade;

  cout<<"\nIdade em meses...:"<< idade*12 <<"\n";
  cout<<"\nIdade em dias...:"<<idade*30*12<<"\n";
  cout<<"\nIdade em semanas...:"<<idade*7*30*12<<"\n";

  return 0;  


}
