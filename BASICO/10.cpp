#include<iostream>

using namespace std;

int main(){

    int n1,n2, res;
    char opc;

    cout<<"Digite valor nota1\n\n";
    cin>> n1;

    cout<<"Digite valor nota2\n\n";
    cin>> n2;

    cout<<"valor das notas..:"<< n1 + n2 <<"\n\n";
    res= n1 + n2;

    if(res >= 60){
        cout<<"Aprovado\n";
    }else {
        cout<<"Reprovado\n";
    }


    return 0;
} 