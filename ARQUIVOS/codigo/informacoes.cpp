#include <iostream>
#include <string>

using namespace std;

int main(){

	char birthday[100];
	cout<<"Digite seu aniversário: ";
	cin.getline(birthday, 100, '\n');

	char name[100];
	cout<<"Digite seu nome : ";
	cin>>name;

	char age[100];
	cout<<"Digite sua idade : ";
	cin>>age;
	getchar();

	string hobby;
	cout<<"Digite seu hobby : ";
	getline(cin, hobby);


	char info[100];
	cout<<"Digite seu departamento : ";
	cin>>info;
	cout<<endl;

	cout<<"=================================================";
	cout<<endl;
	cout<<"<informação do membro";
	cout<<endl;

	cout<<"Nome:" << name;
	cout<<endl;

	cout<<"Aniversário:" << birthday;
	cout<<endl;

	cout<<"Idade:" << age;
	cout<<endl;

	cout<<"Hobby:" << hobby;
	cout<<endl;

	cout<<"Info:" << info;
	cout<<endl;
}
