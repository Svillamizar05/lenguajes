class MyClass
{
private:
    int m_Member; // Declara un miembro entero privado llamado m_Member.

public:
    MyClass() = default; // Declara un constructor predeterminado para la clase MyClass.
    MyClass(const MyClass& rhs) = default; // Declara un constructor de copia predeterminado para la clase MyClass.
};

int main()
{
    MyClass objectA; // Crea un objeto de la clase MyClass llamado objectA utilizando el constructor predeterminado.
    MyClass objectB{MyClass{}}; // Utiliza la inicialización uniforme para crear un objeto MyClass temporal y luego utiliza ese objeto para inicializar objectB.
    return 0;
}
