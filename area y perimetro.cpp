#include <iostream>

using namespace std;

class Rectangulo {
private:
    double longitud;
    double ancho;

public:
    Rectangulo(double l, double a) : longitud(l), ancho(a) {}

    double calcularArea() {
        return longitud * ancho;
    }

    double calcularPerimetro() {
        return 2 * (longitud + ancho);
    }
};

int main_area_y_perimetro() {
    double longitud, ancho;
    cout << "Ingrese la longitud del rect�ngulo: ";
    cin >> longitud;
    cout << "Ingrese el ancho del rect�ngulo: ";
    cin >> ancho;

    Rectangulo rect(longitud, ancho);

    cout << "El �rea del rect�ngulo es: " << rect.calcularArea() << endl;
    cout << "El per�metro del rect�ngulo es: " << rect.calcularPerimetro() << endl;

    return 0;
}

