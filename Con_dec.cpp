#include "Num_dec.cpp"
#include <iostream>
using namespace std;

class Con_dec : public Num_dec {
public:
    // Constructores
    Con_dec() : Num_dec() {}

    Con_dec(double nu) : Num_dec(nu) {}

    // M�todos
    // Set (modificar)
    void setnu(double nu) {numero = nu; }
    

    // Get (mostrar)
    double getnu() { return numero; }
    
   // Funci�n para convertir n�meros enteros a letras
string convertirNumeroALetras(int num) {
    string unidades[] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
    string especiales[] = {"diez", "once", "doce", "trece", "catorce", "quince", "dieciseis", "diecisiete", "dieciocho", "diecinueve"};
    string decenas[] = {"", "diez", "veinti", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
    string resultado;

    if (num >= 1 && num <= 19) {
        resultado = especiales[num - 10];
    } else if (num >= 20 && num <= 99) {
        int decena = num / 10;
        int unidad = num % 10;
        if (unidad == 0) {
            resultado = decenas[decena];
        } else {
            resultado = decenas[decena] + " y " + unidades[unidad];
        }
    } else {
        resultado = "Numero fuera de rango.";
    }

    return resultado;
}

// Funci�n para convertir la parte decimal a letras
string convertirDecimalALetras(int num) {
    string resultado;
    if (num == 0) {
        resultado = "cero";
    } else {
        resultado = convertirNumeroALetras(num) + " centesimas";
    }
    return resultado;
}

// Funci�n para obtener la parte entera de un n�mero decimal
int obtenerParteEntera(double num) {
    return static_cast<int>(num);
}

// Funci�n para obtener la parte decimal de un n�mero decimal
int obtenerParteDecimal(double num) {
    return static_cast<int>((num - obtenerParteEntera(num)) * 100);
}

// Funci�n para convertir n�meros decimales a letras
string convertirDecimalALetras(double num) {
    int parte_entera = obtenerParteEntera(num);
    int parte_decimal = obtenerParteDecimal(num);
    string resultado;

    if (parte_entera == 0) {
        resultado = convertirDecimalALetras(parte_decimal);
    } else {
        resultado = convertirNumeroALetras(parte_entera) + "";
        if (parte_decimal != 0) {
            resultado += " punto " + convertirDecimalALetras(parte_decimal);
        }
    }

    return resultado;
}

    // M�todo para determinar si la palabra es pal�ndroma
    void Conve() {
    	
    	cout << "El numero " << numero << " en letras es: " << convertirDecimalALetras(numero) << endl;
		cout<<"\n\n";
		
    }
};
   
