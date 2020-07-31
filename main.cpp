//============================================================================
// Name        : Prueba.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "IndicadorDePagina.h"
using namespace std;

int main()

{

	cout << ".::Creando Indicador de Pagina ::.\n";
	cout << ".:: Indique la cantidad de pagina ::.\n";
	int paginas;
	cin>>paginas;

	IndicadorDePagina miPagina(paginas);



	cout << "La pagina actual es la numero "

		 << miPagina.devolverPaginaActual()

		 << ", y \nla cantidad total de paginas del libro es de "

		 << miPagina.devolverPaginasTotales()

		 << " paginas.\n\n";



	/* Paso dos paginas */

	cout << "Paso a la siguiente pagina...\n";

	miPagina.pasarAPaginaSiguiente();



	cout << "Paso a la siguiente pagina...\n";

	miPagina.pasarAPaginaSiguiente();

	cout << "La pagina actual es la numero " << miPagina.devolverPaginaActual() << "\n";



	cout << "Paso a la pagina anterior...\n";

	miPagina.pasarAPaginaAnterior();



	cout << "La pagina actual es la numero " << miPagina.devolverPaginaActual() << "\n";




	return 0;

}
