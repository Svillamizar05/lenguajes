#include <array>      // Incluye la biblioteca estándar <array> para utilizar std::array.
#include <cstdint>    // Incluye la biblioteca estándar <cstdint> para utilizar uint32_t.
#include <iostream>   // Incluye la biblioteca estándar <iostream> para entrada y salida estándar.

// Define una función constexpr llamada ArraySizeFunction que toma un parámetro entero y devuelve un uint32_t.
constexpr uint32_t ArraySizeFunction(int parameter)
{
    return parameter; // Retorna el parámetro recibido.
}

int main()
{
    constexpr uint32_t ARRAY_SIZE{ ArraySizeFunction(5) }; // Utiliza la función constexpr para definir el tamaño del array.
    std::array<uint32_t, ARRAY_SIZE> myArray{ 1, 2, 3, 4, 5 }; // Crea un std::array de tamaño ARRAY_SIZE con valores iniciales.

    // Itera sobre cada elemento del array utilizando un bucle de rango (range-based for loop).
    for (auto&& number : myArray)
    {
        std::cout << number << std::endl; // Imprime cada elemento del array.
    }

    return 0; // Retorna 0 para indicar que el programa finalizó correctamente.
}
