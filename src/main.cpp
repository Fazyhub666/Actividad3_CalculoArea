/*
====================================================================
Materia: Laboratorio de Programación (LPR)
E.E.S.T. N° 1 "Eduardo Ader" — Vicente López
Curso: 5° Año
Profesor: Prof. York
Estudiante: Benjamin Hlynczuk
Archivo: main.cpp
Objetivo: Calcular el area de un circulo mediante funciones modulares
y simular una diana de tiro en ASCII.
====================================================================
*/

#include <iostream> // Biblioteca estandar de entrada y salida (cout/cin)
#include <limits>
using namespace std; // Evita escribir 'std::' antes de cada comando

// ====================================================================
// 1. PROTOTIPO DE LA FUNCIÓN (Firma de la función)
// Le avisamos al compilador la existencia del módulo de cálculo antes
// ====================================================================
double calcularAreaCirculo(double radio);

int main() {
    double radioEstudiante; // Variable para guardar el radio ingresado por teclado

    // ====================================================================
    // REGLA OBLIGATORIA (EVITA EL PLAGIO):
    // Modifiquen la salida de pantalla agregando su Nombre y Apellido reales.
    // ====================================================================
    cout << "=====================================================" << endl;
    cout << " CALCULADORA DE AREA MODULAR - ESTUDIANTE: [Nombre y Apellido] " << endl;
    cout << "=====================================================" << endl;
    cout << "=> Ingrese el radio del circulo/diana (en cm): ";
    cin >> radioEstudiante; // Lee el radio ingresado por el usuario

    // FILTRO DE CONSISTENCIA (Validación del dato geométrico)
    if (radioEstudiante <= 0) {
        cout << "[ERROR] El radio debe ser un valor positivo y mayor a cero." << endl;
        return 1; // Salida controlada del sistema indicando error en consola
    }

    // ====================================================================
    // 2. LLAMADA / INVOCACIÓN DE LA FUNCIÓN
    // Se invoca el módulo 'calcularAreaCirculo' pasándole 'radioEstudiante'
    // y el valor que retorna se guarda en la variable decimal 'areaFinal'.
    // ====================================================================
    double areaFinal = calcularAreaCirculo(radioEstudiante);

    // ====================================================================
    // 3. SALIDA DE DATOS
    // Se muestra en pantalla el área calculada, combinando texto y variable.
    // ====================================================================
    cout << "El area del circulo es: " << areaFinal << " cm2." << endl;
    cout << "\n[SISTEMA] Dibujando escala de la Diana en la RAM..." << endl;

    if (radioEstudiante <= 5.0) {
        cout << "   .---.   " << endl;
        cout << "  / X   \\  -> [DIANA MINI / COMPACTA]" << endl;
        cout << "  \\  *  /  " << endl;
        cout << "   '---'   " << endl;
    } else if (radioEstudiante <= 12.0) {
        cout << "     .---.     " << endl;
        cout << "   / .---. \\   " << endl;
        cout << "  | /  O  \\ |  -> [DIANA ESTANDAR DE TIRO]" << endl;
        cout << "  | \\  *  / |  " << endl;
        cout << "   \\ '---' /   " << endl;
        cout << "     '---'     " << endl;
    } else {
        cout << "      .---.      " << endl;
        cout << "    / .---. \\    " << endl;
        cout << "   | / .-. \\ |   " << endl;
        cout << "   | | X | | |   -> [DIANA GIGANTE DE COBERTURA]" << endl;
        cout << "   | \\ '-' / |   " << endl;
        cout << "    \\ '---' /    " << endl;
        cout << "      '---'      " << endl;
    }

    cout << "=====================================================" << endl;
    cout << "\nPulsa cualquier tecla para salir...";
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    if (cin.peek() == EOF) {
        // Si no hay entrada, esperar con system
    }
    cin.get();
    return 0; // Finalización exitosa (código 0)
}

// ====================================================================
// 4. DEFINICIÓN / DESARROLLO DE LA FUNCIÓN
// Implementa la fórmula A = π · r² usando una variable local y la
// constante PI bloqueada en memoria con 'const'.
// ====================================================================
double calcularAreaCirculo(double r) {
    const double PI = 3.1415926535; // Constante: su valor no puede modificarse

    double area = PI * r * r; // Variable local: aplica A = π · r²

    return area; // Retorna el resultado al main
}