#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int n1,n2, res;
    char opc;

    inicio:
    system("cls");

    cout<<"Digite o valor da nota 1:\n";
    cin>> n1;
    cout<<"Digite o valor da nota 2:\n";
    cin>>n2;

    res=n1+n2;


    if(res >= 60){
        cout<<"Aprovado\n";
    }else if (res >= 40 & res < 60)
    {
        cout<<"Recuperação\n";   
    }
    else{
        cout<<"Reprovado\n";
    }

    cout<<"\n\nDigitar outras nota? (s / n ): ";
    cin>> opc;

    if(opc == 's' or opc == 'S'){
        goto inicio;        
    }


    return 0;
}