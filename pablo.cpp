            case 3: { // Rentar película
                int indice;
                cout << "Ingresa el número de la película que quieres rentar: ";
                cin >> indice;
                indice--; // Ajustar al índice del arreglo

                if (indice >= 0 && indice < totalPeliculas) {
                    if (peliculas[indice].disponible) {
                        peliculas[indice].disponible = false;
                        cout << "Has rentado: " << peliculas[indice].titulo << "\n";
                    } else {
                        cout << "La película no está disponible.\n";
                    }
                } else {
                    cout << "Número de película inválido.\n";
                }
                break;
            }

            case 4: { // Salir
                cout << "Gracias por usar el Blockbuster. ¡Hasta luego!\n";
                break;
            }

            default: {
                cout << "Opción no válida. Intenta de nuevo.\n";
                break;
            }
        }
    } while (opcion != 4);

    return 0;
}
