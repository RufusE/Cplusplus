#include <iostream>

using namespace std;

int main(){

    // and / &&
    // or  / ||
    /*
    1 2 3 4 5 6 7 8 9 0
    >4 e <7
    */

    int num;
    num =5;

    if(num >4 && num <7){
        cout<<"Valor aceito\n\n";
    }else{
        cout<<"Não aceito\n\n";
    }


    /*
    1 2 3 4 5 6 7 8 9 0
    < ou >8
    */

   num = 1;
   if(num <3 || num >8){
       cout<<"\nValor Aceito\n\n";
   }else{
       cout<<"Valor não aceito\n\n";
   }


    // or  / ||
    /*
    1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
    3 a 6
    10 a 14 
    16 a 19
    */
   num =12;

   if ((num >= 3 && num <= 6) || (num > 9 && num <15) || (num > 15 && num < 20)){
       cout<<"\nValor aceito\n\n";
   }else{
       cout<<"\n\nNão aceito\n\n";
   }

    /*
    1 = true
    0 = false
    */


    int  num2 = 1;

    if(!num){
        cout<<"\n\nVou ao clube\n";
    }else{
        cout<<"\nVou ao cinema\n";
    }







    return 0;
}