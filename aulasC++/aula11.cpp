#include <iostream>

using namespace std;

int main(){

  int num;

   
   /*
   if(num > 4 && num < 7){            //and
      cout<<"\n\nValor aceito\n";
   }
	else {
		cout<<"\n\nNao aceito\n";
	}
    

   if(num < 3 || num > 8){                   // or
      cout<<"\n\nValor aceito\n";
   }
        else {
                cout<<"\n\nNao aceito\n";
        }


   cout<<"\nInsira um número \n\n";   
   cin>>num;	

   if( (num >= 3 && num <=6) || ( num > 9 && num < 15) || (num > 15 && num < 20) ){
      cout<<"\n\nValor aceito\n";
   }
        else {
                cout<<"\n\nNao aceito\n";
        }

*/

// 1 = verdadeiro          0 = falso
// ! NOT
  cout<<"\nInsira um número 1 ou 0 \n\n";
   cin>>num;

   if( !num ){
      cout<<"\n\nVou ao Club\n";
   }
        else {
                cout<<"\n\nVou ao cinema\n";
        }





  return 0;
}	
