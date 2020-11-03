#include <iostream>

using namespace std;

int main()
{
	int n1, x;

	x=1;

	cout<<"Digite um valor: ";
	cin>> n1;

	(n1 >= 10) ? x++ : x--;

	cout<<"\nNovo valor do X: " << x << "\n";

	return 0;
}
