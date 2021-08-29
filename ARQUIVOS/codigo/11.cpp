#include <iostream>

using namespace std;

int main()
{
    int num=0;
    char opc;
    /*
     *1 2 3 4 5 6 7 8 9 10
     *
     */
    inicio:

    cout<<"\nInsira um valor de 1 a 10\n";
    cin>>num;

    if(num >= 1 && num <= 5){
      cout<<"\n\nValor está entre 1 e 5\n";
      cout<<"\nValor digitado é...:"<< num <<"\n";
    }else if(num >=6  && num  <=10  ){
       cout<<"\n\nValor está entre 6 e 10\n";
       cout<<"\nValor digitado é...:"<< num <<"\n";
    }else if(num == 0 || num >10){
        cout<<"\nValor digitado não aceito\n";
    }

    cout<<"\nDeseja inserir valores novamente\n";
    cin>>opc;

    if(opc == 's' || opc =='S'){
       goto inicio;
    }

    return 0;
}
