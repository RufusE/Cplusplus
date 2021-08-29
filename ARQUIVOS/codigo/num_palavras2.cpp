#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
  int num_de_palavras =0;
  string anterior =" "; //não é uma palavra
  string atual;
  
  while(cin>>atual)
  {
   ++num_de_palavras; //incrementa o contador de palavras
   if(anterior == atual)
	   cout<<"palavra número"<<num_de_palavras
	       <<"repetida:"<<atual<<"\n";
		anterior==atual;   
  }

}
