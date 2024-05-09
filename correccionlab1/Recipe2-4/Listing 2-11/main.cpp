#include <iostream>

using namespace std;

auto AutoFunctionFromReturn(int parameter)
{
    return parameter; // La función devuelve el parámetro que recibe.
}

int main()
{
    auto value = AutoFunctionFromReturn(1); // Utiliza la palabra clave auto para deducir el tipo de la variable "value".
    cout << value << endl; // Imprime el valor de "value".

    return 0;
}
