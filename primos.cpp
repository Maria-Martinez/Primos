#include <iostream>

using namespace std;

int main()
{
    int numero=0;   // aca se da un valor a una variable
    cout<<"$:";     // imprime la variable "numero"
    cin>>numero;    // se  ingresa una variable a "numero"
    for (int i = 2; numero >= i; i++)    // el valor inicial de "i" es 2; llega hasta i y se pasa el valor de numero
    {

        while(numero % i == 0)  // ciclo while 
        {

            cout<<i<<" x ";     // imprime el resultado 
            numero /= i;       // se divide el numero sobre i
        }

    }
}