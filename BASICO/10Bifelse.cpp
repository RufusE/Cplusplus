#include <iostream>
#include <stdlib.h>
#include <cstdlib>

using namespace std;

int main(){

    int n1, n2, res;
    char opc;

    /*
     >= 60           Aprovado
     >= 40  e  <60   Recuperação
     <40             reprovado
    */

   inicio:   //Label

  //  system("cls");     

    cout<<"Digite a primeira nota\n";
    cin>>n1;
    cout<<"Digite a segunda nota\n";
    cin>>n2;

    res = n1 + n2;

    if(res >= 60){
        cout<<"\nAprovado\n";
    }else if(res >= 40){
        cout<<"\nRecuperação\n";        
    }else{
        cout<<"\nReprovado\n";
    }

   cout<<"\nDigitar outras notas? ( s / n ): ";
   cin>>opc; 

   if(opc == 's' or opc == 'S'){
       goto inicio;
   }

    return 0;    
}