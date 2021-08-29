#include <iostream>

using namespace std;



int main()
{

    int n1,n2,n3;

    n1=0;
    n2=10;
    n3=0;

    cout<< n1 << "\n\n";
    n1=n1+5;//incremento
    cout<< n1 <<"\n\n";

    n1+=1; //incremento
    cout<< n1 <<"\n\n";

    //Incremento ++
    n1++;
    cout<< n1 << "\n\n";

    //decremento
    n1--;
    cout<< n1 << "\n\n";

    n2+=10;
    cout<< n2 <<"\n\n";

    //pós n1++; pre ++n1;

    n2=10;

    n2++;
    cout<< n2 <<"\n\n";

    //comando inline
    //primeiro mostra n3
    //depois incrementa
    cout<< n3++ <<"\n\n";
    cout<< n3 <<"\n\n";











   // cout << "Hello World!" << endl;
    return 0;
}
