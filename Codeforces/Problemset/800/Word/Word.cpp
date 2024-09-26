#include <iostream>  // Biblioteca para la entrada y salida de datos
#include <string>    // Biblioteca para usar cadenas de texto (strings)
using namespace std;

int main() {
    // Declaramos una variable para almacenar la palabra ingresada por el usuario
    string palabra;
    
    // Leemos la palabra de entrada desde el teclado
    cin >> palabra;

    // Variables para contar cuántas letras minúsculas y mayúsculas hay
    int cuenta_minusculas = 0, cuenta_mayusculas = 0;

    // Recorremos cada letra de la palabra
    for (char letra : palabra) {
        // Verificamos si la letra es minúscula
        if (islower(letra)) {
            cuenta_minusculas++;  // Si es minúscula, aumentamos el contador de minúsculas
        } else {
            cuenta_mayusculas++;  // Si no (es mayúscula), aumentamos el contador de mayúsculas
        }
    }

    // Verificamos cuál tipo de letra es más frecuente
    if (cuenta_minusculas >= cuenta_mayusculas) {
        // Si hay más o igual cantidad de minúsculas, convertimos toda la palabra a minúsculas
        for (char &letra : palabra) {
            letra = tolower(letra);  // Convertimos cada letra a minúscula
        }
    } else {
        // Si hay más mayúsculas, convertimos toda la palabra a mayúsculas
        for (char &letra : palabra) {
            letra = toupper(letra);  // Convertimos cada letra a mayúscula
        }
    }

    // Imprimimos la palabra convertida
    cout << palabra << endl;

    return 0;  // Terminamos el programa
}
