#include <iostream>

using namespace std;

int main()
{
   int num=5;

   if((num >= 3 && num <=6) ||(num > 9 && num <15) || (num > 15 && num <20)){
       cout<<"Valor aceito\n";
   }else{
       cout<<"Valor não aceito\n";
   }

    return 0;

}
