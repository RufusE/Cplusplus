#include <iostream>

using namespace std;

int main(){

    // > , < , >= , <= , == , !=
    int num=0;

    cout<<"Digite um valor inteiro entre '0' e '10'\n";
    cin>>num;

    if(num == 0){
        cout<<"O número digitado é zero\n";
    }
    else if(num ==5){
        cout<<"O número digitado é 5'\n";
    }else if(num >=5 && num <=9){
        cout<<"O número digitado está entre '5 e 9\n";
    }else if(num == 10){
        cout<<"O número digitado foi o 10\n";
    } else if(num > 10){
        cout<<"número digitado está fora '0 a 10'\n";
    }



    return 0;
}
