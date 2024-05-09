#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
    auto variable = 1; // Utiliza la palabra clave auto para deducir el tipo de la variable en tiempo de compilación.
    cout << "Type of variable: " << typeid(variable).name() << endl; // Imprime el tipo de la variable utilizando la función typeid.

    return 0;
}
