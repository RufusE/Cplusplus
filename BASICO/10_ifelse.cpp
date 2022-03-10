#include <iostream>

using namespace std;

int main(){

    int n1,n2,res;
    char opc;

    cout<<"Digite o valor da primeira nota: \n";
    cin>>n1;

    cout<<"Digite o valor da segunda nota: \n";
    cin>>n2;

    res= n1 + n2;

    if(res >= 60){
        cout<<"Aprovado\n\n";
    }else{
        cout<<"Reprovado\n\n";
    }


    return 0;
}