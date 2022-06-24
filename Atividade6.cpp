#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

int main() {

int i, valor;
for (i = 1; i <= 7; i++)
{
    cout<<"\nInforme um numero: ";
    cin>>valor;
if (valor % 5 == 0 && valor > 10)
    cout<<"\nO numero "<<valor<<" e divisivel por 5 e maior que 10\n";
}
    return 0;
}
