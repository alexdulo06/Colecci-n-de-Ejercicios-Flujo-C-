namespace Geometría {
    class Círculo {
        double radio;
    public:
        Círculo(double r) : radio(r) {}
        double calcularArea() { return 3.14159 * radio * radio; }
        double calcularPerímetro() { return 2 * 3.14159 * radio; }
    };
}
