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
