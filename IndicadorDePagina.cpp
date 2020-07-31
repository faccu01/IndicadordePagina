#include <iostream>

#include "IndicadorDePagina.h"







IndicadorDePagina::IndicadorDePagina(int numeroDePaginas)

{

	try

	{

		if (numeroDePaginas > 0)

		{

			paginasTotales = numeroDePaginas;

			/* La primera pagina es la 1 */

			paginaActual = 1;

		}

		else

		{

			throw "El numero de paginas es invalido, o menor a 0\n";

		}

	}

	catch(const char* dato)

	{

		std::cout << dato;

	}

}



int IndicadorDePagina::devolverPaginaActual()

{

	return paginaActual;

}



int IndicadorDePagina::devolverPaginasTotales()

{

	return paginasTotales;

}



void IndicadorDePagina::pasarAPaginaSiguiente()

{

	if (paginaActual < paginasTotales)

	{

		paginaActual++;

	}

}



void IndicadorDePagina::pasarAPaginaAnterior()

{

	if (paginaActual > 1)

	{

		paginaActual--;

	}

}


