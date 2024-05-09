#include <iostream>
#include <vector>

using namespace std;

int main()
{
    using MyVector = vector<int>; // Define un alias MyVector para el tipo vector<int>.

    MyVector vectorA(1); // Crea un vector de un solo elemento, inicializado con el valor 1.
    cout << vectorA.size() << " " << vectorA[0] << endl; // Imprime el tamaño del vectorA y su primer elemento.

    MyVector vectorB(1, 10); // Crea un vector de un solo elemento, inicializado con el valor 10.
    cout << vectorB.size() << " " << vectorB[0] << endl; // Imprime el tamaño del vectorB y su primer elemento.

    MyVector vectorC{1, 10}; // Utiliza la inicialización uniforme para crear un vector con dos elementos: 1 y 10.
    cout << vectorC.size() << " " << vectorC[0] << endl; // Imprime el tamaño del vectorC y su primer elemento.

    return 0;
}
