#ifndef INDICADORDEPAGINA_H

#define INDICADORDEPAGINA_H



class IndicadorDePagina

{

	private:

		int paginasTotales;

		int paginaActual;



	public:

		/* pre: numeroDePaginas es la cantidad de paginas totales del libro, debe ser mayor a 0

		   post: crea un Indicador de pagina listo para utilizarse, iniciandolo en la pagina numero 1

		*/

		IndicadorDePagina(int numeroDePaginas);

		/* pre: el indicador de pagina ya ha sido creado

		   post: retorna la pagina actual

		*/

		int devolverPaginaActual();

		/* pre: el indicador de pagina ya ha sido creado

		   post: retorna la cantidad de paginas totales

		*/

		int devolverPaginasTotales();

		/* pre: el indicador de pagina ya ha sido creado, y

			paginaActual debe ser menor a paginasTotales, de otro modo, no habria pagina siguiente

		   post: si es posible, pasa a la siguiente pagina, sino se queda en la actual

		*/

		void pasarAPaginaSiguiente();

		/* pre: el indicador de pagina ya ha sido creado, y

			paginaActual debe ser mayor que 1, de otro modo, no habria pagina anterior

		   post:  si es posible, pasa a la pagina anterior, sino se queda en la actual

		*/

		void pasarAPaginaAnterior();



};



#endif //INDICADORDEPAGINA_H
