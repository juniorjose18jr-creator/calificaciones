// Sistema de control de calificaciones - "La Nueva Escuela"
// Estudiante: Junior Ivon Jose Jean - Matricula: 2026-1655
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    char respuesta;

    // Bucle do-while: repite todo el programa mientras el usuario responda 's'
    do {
        int cantidadEstudiantes;
        int aprobados = 0;            // contador de aprobados
        int reprobados = 0;           // contador de reprobados
        double sumaPromedios = 0;     // acumulador de promedios
        double mejorPromedio = -1;
        string mejorEstudiante = "";

        cout << fixed << setprecision(2);

        // Bucle do-while: valida que la cantidad de estudiantes sea mayor que 0
        do {
            cout << "\nCantidad de estudiantes: ";
            cin >> cantidadEstudiantes;
            if (cin.fail()) {         // si escriben letras, se limpia la entrada
                cin.clear();
                cin.ignore(1000, '\n');
                cantidadEstudiantes = 0;
            }
            if (cantidadEstudiantes <= 0) {
                cout << "Valor invalido. Debe ser mayor que 0." << endl;
            }
        } while (cantidadEstudiantes <= 0);

        // Bucle for: recorre cada estudiante del grupo
        for (int estudiante = 1; estudiante <= cantidadEstudiantes; estudiante++) {
            string nombre;
            double sumaNotas = 0;     // acumulador de las notas del estudiante

            cout << "\n--- Estudiante " << estudiante << " ---" << endl;
            cout << "Nombre: ";
            cin >> ws;
            getline(cin, nombre);

            // Bucle for: recorre las 4 calificaciones del estudiante
            for (int numeroNota = 1; numeroNota <= 4; numeroNota++) {
                double calificacion;

                // Bucle do-while: repite la solicitud si la nota esta fuera de 0 a 100
                do {
                    cout << "Calificacion " << numeroNota << ": ";
                    cin >> calificacion;
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(1000, '\n');
                        calificacion = -1;
                    }
                    if (calificacion < 0 || calificacion > 100) {
                        cout << "Calificacion invalida. Debe estar entre 0 y 100." << endl;
                    }
                } while (calificacion < 0 || calificacion > 100);

                sumaNotas += calificacion;
            }

            double promedio = sumaNotas / 4;
            sumaPromedios += promedio;

            if (promedio >= 70) {
                aprobados++;
                cout << "Promedio: " << promedio << " - Aprobado" << endl;
            }
            else {
                reprobados++;
                cout << "Promedio: " << promedio << " - Reprobado" << endl;
            }

            // Guarda el estudiante con el promedio mas alto
            if (promedio > mejorPromedio) {
                mejorPromedio = promedio;
                mejorEstudiante = nombre;
            }
        }

        double promedioGrupo = sumaPromedios / cantidadEstudiantes;

        cout << "\n===== RESUMEN =====" << endl;
        cout << "Aprobados: " << aprobados << " | Reprobados: " << reprobados << endl;
        cout << "Promedio del grupo: " << promedioGrupo << endl;
        cout << "Mejor promedio: " << mejorEstudiante << " (" << mejorPromedio << ")" << endl;

        cout << "\nDesea procesar otro grupo? (s/n): ";
        cin >> respuesta;

    } while (respuesta == 's' || respuesta == 'S');

    cout << "Programa finalizado." << endl;
    return 0;
}