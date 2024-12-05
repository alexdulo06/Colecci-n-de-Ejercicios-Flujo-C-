#include <iostream>

void mostrarContenedores(std::ostream &salida) {
    // Reemplazo del vector
    int vec[] = {1, 2, 3, 4};
    salida << "Vector: ";
    for (int i = 0; i < 4; i++) salida << vec[i] << " ";
    salida << "\n";

    // Reemplazo del map
    struct MapItem {
        int key;
        const char *value;
    };
    MapItem map[] = {{1, "uno"}, {2, "dos"}};
    salida << "Mapa[2]: ";
    for (int i = 0; i < 2; i++) {
        if (map[i].key == 2) salida << map[i].value << "\n";
    }

    // Reemplazo del set
    int set[] = {1, 2, 3, 4};
    salida << "Set: ";
    for (int i = 0; i < 4; i++) salida << set[i] << " ";
    salida << "\n";
}
