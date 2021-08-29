#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
  cout<<"Por favor informe dois nomes\n";
  string primeiro ="???";
  string segundo ="???";

  cin>>primeiro>>segundo;//Lê dois strings
  if(primeiro==segundo) cout<<"Isto é o mesmo nome duplicado\n";
   if(primeiro<segundo) cout<<primeiro<<"está alfabeticamente antes de" << segundo<<"\n";
    if(primeiro>segundo) cout<<primeiro<<"está alfabeticamente depois de" <<segundo<<"\n";

    return 0;
  

}
