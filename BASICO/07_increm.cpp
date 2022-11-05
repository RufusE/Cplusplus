//Incremento Decremento

#include <iostream>

using namespace std;

int main()
{

    int n1, n2;

    n1 = 0;
    n2 = 10;

    cout<< n1 << "\n\n";
    //n1 = n1+1;
    n1 += 1;
    cout<< n1 << "\n\n";

    n1++;
    cout<< n1 <<"\n\n";

    n1--;
    cout<< n1 <<"\n\n";

    n1 *=2;
    cout<< n1 <<"\n\n";

    n1 /= 2;
    cout<< n1 <<"\n\n";

    // n1++;  ++n1;
    n2++;
    cout<< n2 <<"\n";
    //cout<< n2++ <<"\n\n";   
    cout<< ++n2 <<"\n\n";
    cout<< --n2 <<"\n\n";



    return 0;
}