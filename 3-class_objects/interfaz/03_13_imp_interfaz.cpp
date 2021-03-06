// fig03_13
// Desmostración de la clase LibroCalificaciones después de separar
// su interfaz de su implementación.
#include <iostream>
using std::cout;
using std::endl;

#include "LibroCalificaciones.h" // incluye la definición de la clase LibroCalificaciones

// la función main empieza la ejecución del programa
int main()
{
	// crea dos objetos LibroCalificaciones
	LibroCalificaciones libroCalificaciones1( "CS101 Introducción a la programación en C++" );
	LibroCalificaciones libroCalificaciones2( "CS102 Estructuras de datos en C++" );

	// muestra el valor inicial de courseName para cada LibroCalificaciones
	cout << "libroCalificaciones1 creado para el curso: " << libroCalificaciones1.obtenerNombreCurso()
		<< "\nlibroCalificaciones2 creado para el curso: " << libroCalificaciones2.obtenerNombreCurso()
		<< endl;
		return 0; // indica que terminó correctamente
} // fin de main