int main()
{
    int number{ 0 }; // Inicializa una variable entera llamada number con el valor 0.
    char another{ static_cast<char>(512) }; // Utiliza static_cast para realizar una conversión explícita de un entero a un char.
    // La conversión implícita de 512 a char sería un desbordamiento de rango, pero static_cast permite realizarla explícitamente.

    double bigNumber{ 1.0 }; // Inicializa una variable de tipo double llamada bigNumber con el valor 1.0.
    float littleNumber{ static_cast<float>(bigNumber) }; // Utiliza static_cast para realizar una conversión explícita de un double a un float.
    // La conversión implícita de double a float puede provocar pérdida de precisión, pero static_cast permite realizarla explícitamente.

    return 0;
}
