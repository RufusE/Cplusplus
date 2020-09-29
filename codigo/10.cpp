#include <iostream>
//#include <cstdlib>  referente ao system("cls")

using namespace std;

int main()
{
    int n1=0,n2=0,res=0;
    char opc;

    inicio:
    //system("cls"); windows

    cout<<"digite o valor da nota 1\n";
    cin>>n1;

    cout<<"digite o valor da nota 2\n";
    cin>>n2;

    res=n1+n2;
    /*
     * >= 60 aprovado
     * >= 40 e <60  recuperação
     * <40 reprovado
     */

    if(res>= 60){
        cout<<"\nEstá aprovado\n";
    }else if(res >=40){
        cout<<"\nAluno Recuperação\n";
    }else{
        cout<<"Aluno reprovado\n";
    }


    cout<<"\nDigitar outras notas?(s/n)";
    cin>>opc;

    if(opc == 's' or opc == 'S'){
        goto inicio;
    }

   return 0;
}
