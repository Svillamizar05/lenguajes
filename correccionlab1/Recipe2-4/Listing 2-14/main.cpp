#include <iostream>

using namespace std;

// Define una función de plantilla llamada AutoFunctionFromParameter
template <typename T>
auto AutoFunctionFromParameter(T parameter)
{
    return parameter; // La función devuelve el parámetro que recibe.
}

int main()
{
    auto value = AutoFunctionFromParameter(2); // Utiliza la palabra clave auto para deducir el tipo de la variable "value".
    cout << value << endl; // Imprime el valor de "value".

    return 0;
}
