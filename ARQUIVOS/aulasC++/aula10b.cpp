#include <iostream>

using namespace std;

int main()
{
   
   int n1,n2,res;
   char opc;

inicio:

    system("clear");	

   cout<<"Digite o valor da nota 1 :\n";
   cin>>n1;
   cout<<"Digite o valor da nata 2 :\n";
   cin>>n2;

   res = n1+n2;


   if( res >= 60){
	  cout<<"Aluno aprovado\n";
   }
   else if(res >= 40) {
	  cout<<"Aluno em recuperação, pensa!\n";
   } else{
         cout<<"Aluno reprovado\n";
	 }

  cout<<"\nDigitar outras notas? (s / n): ";
  cin>>opc;
  
   if( opc == 's' or opc == 'S'){
	 goto inicio;
   }	 


return 0;
}
	

