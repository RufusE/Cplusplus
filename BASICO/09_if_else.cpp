#include <iostream>

using namespace std;

int main(){

    int num=10;
    int num2=50;
    char ocp='s';

    /*
    se(teste lógico){
        //Se o teste for verdadeiro
    }se nao (caso contrário){
        //Se o teste for falso
    }
    */

    //Teste lógico
    // >  <  >= <= == !=

    if(num >= 10){
        cout<<"Valor de num maior ou igual a 10\n\n"; 
    }else{
        cout<<"Valor é menor que 10\n\n";
    }

    if (num > num2)
    {
        cout<<"Num é menor que num2\n\n";
    }else{
        cout<<"Num é menor que num2\n\n";
    }
    
    //False = 0
    //True = 1

    int sol = 1;

    if(sol == 1){
        cout<<"Vou ao clube\n\n";
    }else{
        cout<<"Vou ao cinema\n\n";
    }



    return 0;
}