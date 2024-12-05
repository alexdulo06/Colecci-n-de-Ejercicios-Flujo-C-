namespace Ciencia {
    namespace Física {
        const double velocidadDeLaLuz = 299792458.0;
        double calcularEnergía(double masa) {
            return masa * velocidadDeLaLuz * velocidadDeLaLuz;
        }
    }
}
