#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

class carro{
    public:
          string marca;
          int ano;
          string cor;
    private:
          string placa;       
};



int main(){

   carro c1;
   c1.marca = "Fiat";
   c1.ano = 2017;
   c1.cor = "vermelho";  

   carro c2;
   c2.marca = "Volk";
   c2.ano = 2021;
   c2.cor = "cinza";

    cout<< c1.marca << endl;
    cout<< c2.marca << endl;


   return 0;
}

