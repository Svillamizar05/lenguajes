#include <iostream>   // Incluye la biblioteca estándar <iostream> para entrada y salida estándar.
#include <memory>     // Incluye la biblioteca estándar <memory> para utilizar std::unique_ptr.

using namespace std;

class MyClass
{
private:
    string m_Name;
    int m_Value;

public:
    // Constructor que toma un nombre y un valor para inicializar los miembros de la clase.
    MyClass(const string& name, int value)
        : m_Name{ name }
        , m_Value{ value }
    {
        cout << "Constructing!" << endl; // Imprime un mensaje para indicar que se está construyendo el objeto.
    }

    // Destructor para liberar recursos antes de destruir el objeto.
    ~MyClass()
    {
        cout << "Destructing!" << endl; // Imprime un mensaje para indicar que se está destruyendo el objeto.
    }

    // Función miembro para obtener el nombre del objeto.
    const string& GetName() const
    {
        return m_Name;
    }

    // Función miembro para obtener el valor del objeto.
    int GetValue() const
    {
        return m_Value;
    }
};

// Define un alias MyUniquePtr para unique_ptr<MyClass>.
using MyUniquePtr = unique_ptr<MyClass>;

// Función que toma un unique_ptr y lo pasa a otra función, y luego lo devuelve.
auto PassUniquePtr(MyUniquePtr ptr)
{
    cout << "In Function Name: " << ptr->GetName() << endl; // Imprime el nombre del objeto apuntado por el unique_ptr.
    return ptr; // Retorna el unique_ptr recibido.
}

int main()
{
    // Crea un unique_ptr que posee un objeto MyClass recién creado con el nombre "MyClass" y el valor 10.
    auto uniquePointer = make_unique<MyClass>("MyClass", 10);

    // Llama a la función PassUniquePtr y pasa el unique_ptr mediante std::move.
    auto newUniquePointer = PassUniquePtr(move(uniquePointer));

    // Comprueba si el unique_ptr original sigue siendo válido.
    if (uniquePointer)
    {
        cout << "First Object Name: " << uniquePointer->GetName() << endl; // Imprime el nombre del objeto original.
    }

    // Imprime el nombre del objeto apuntado por el newUniquePointer.
    cout << "Second Object Name: " << newUniquePointer->GetName() << endl;

    return 0; // Retorna 0 para indicar que el programa finalizó correctamente.
}
