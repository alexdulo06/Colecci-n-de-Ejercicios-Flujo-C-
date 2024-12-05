#include <iostream>
#include "Ejercicio1/matematicas.cpp"
#include "Ejercicio2/triangulo.cpp"
#include "Ejercicio2/circulo.cpp"
#include "Ejercicio3/circulo_clase.cpp"
#include "Ejercicio4/fisica.cpp"
#include "Ejercicio5/contenedores.cpp"

int main() {
    // Crear flujo de salida
    std::ostream &salida = std::cout;

    // Ejercicio 1
    salida << "Ejercicio 1:\n";
    salida << "Suma (3 + 2): " << Matemáticas::suma(3, 2) << "\n";
    salida << "Resta (3 - 2): " << Matemáticas::resta(3, 2) << "\n";

    // Ejercicio 2
    salida << "\nEjercicio 2:\n";
    salida << "Área de un triángulo (base 4, altura 5): " << Geometría::calcularAreaTriángulo(4, 5) << "\n";
    salida << "Área de un círculo (radio 3): " << Geometría::calcularAreaCírculo(3) << "\n";

    // Ejercicio 3
    salida << "\nEjercicio 3:\n";
    Geometría::Círculo c(5);
    salida << "Área del círculo: " << c.calcularArea() << "\n";
    salida << "Perímetro del círculo: " << c.calcularPerímetro() << "\n";

    // Ejercicio 4
    salida << "\nEjercicio 4:\n";
    double masa = 2.0; // masa en kg
    salida << "Energía para masa de 2 kg: " << Ciencia::Física::calcularEnergía(masa) << " J\n";

    // Ejercicio 5
    salida << "\nEjercicio 5:\n";
    mostrarContenedores(salida);

    return 0;
}
