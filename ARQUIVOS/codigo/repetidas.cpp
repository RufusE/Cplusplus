#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{

string anterior =" ";//palavra anterior. Inica com uma não palavra.
string atual;        //palavra atual
cout<<"Digite uma palavra\n";
while(cin>>atual){  //Lê uma sequencia de palavras 
                  if(anterior == atual)  //confere se a palavra é a mesma que a anterior
		    cout<<"palavra reptida:"<< atual<<"\n";
	          anterior = atual;	  
                 }


}
