#include <iostream>
#include <string> // Para usar std::string
using namespace std;

// Constante para el número máximo de películas
const int MAX_PELICULAS = 100;

// Clase para representar una película
class Pelicula {
public:
    string titulo;
    bool disponible;

    // Constructor para inicializar una película
    Pelicula(string t = "", bool d = true) : titulo(t), disponible(d) {}
};

// Función para mostrar el menú
void mostrarMenu() {
    cout << "\n--- Blockbuster de Películas ---\n";
    cout << "1. Agregar película\n";
    cout << "2. Ver películas disponibles\n";
    cout << "3. Rentar película\n";
    cout << "4. Salir\n";
    cout << "Selecciona una opción: ";
}

int main() {
    Pelicula peliculas[MAX_PELICULAS]; // Arreglo para almacenar las películas
    int totalPeliculas = 0;            // Contador de películas agregadas
    int opcion;

    do {
        mostrarMenu();
        cin >> opcion;
        cin.ignore(); // Limpiar el buffer de entrada

        switch (opcion) {
            case 1: { // Agregar película
                if (totalPeliculas < MAX_PELICULAS) {
                    string titulo;
                    cout << "Ingresa el título de la película: ";
                    getline(cin, titulo);
                    peliculas[totalPeliculas] = Pelicula(titulo, true);
                    totalPeliculas++;
                    cout << "Película agregada con éxito.\n";
                } else {
                    cout << "No se pueden agregar más películas. Límite alcanzado.\n";
                }
                break;
            }

         
