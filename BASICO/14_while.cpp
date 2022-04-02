#include <iostream>

using namespace std;

int main(){

    int n=0;
    
    while (n< 10)
    {
        cout<< n << "\n";
        cout<<"Posição = "<< n << "\n";
        n++;
    }


    cout<<"Rotina finalizada\n";


    int n2=0;

    while (n2<10)
    {
        cout<< n2 <<"\n";
        cout<<"Posição = " << n2 << "\n";
        n2++;
        cin>>n2;   
    }
    
    return 0;

}

