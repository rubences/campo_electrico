#include <stdio.h>
#include <math.h>

#define K 8.99e9 // Constante de Coulomb en N·m²/C²

// Función para calcular el campo eléctrico
double calcularCampoElectrico(double carga, double distancia) {
    return K * carga / (distancia * distancia);
}

int main() {
    double carga, distancia, campoElectrico;

    printf("Ingrese la carga (en Coulombs): ");
    scanf("%lf", &carga);

    printf("Ingrese la distancia desde la carga (en metros): ");
    scanf("%lf", &distancia);

    if (distancia == 0) {
        printf("La distancia no puede ser cero.\n");
        return 1;
    }

    campoElectrico = calcularCampoElectrico(carga, distancia);

    printf("El campo eléctrico es: %.2e N/C\n", campoElectrico);

    return 0;
}