#include "Lista.h"

Lista::Lista()
{
	primero = NULL;
	tamano = 0;
}

bool Lista::EstaVacia()
{
	return primero == NULL;
}

void Lista::InsertaAlInicio(int dato)
{
	Nodo* nuevo = new Nodo(dato);

	if (EstaVacia())
	{
		primero = nuevo;
	}
	else
	{
		nuevo->sig = primero;
		primero = nuevo;
	}

	tamano++;
}

void Lista::InsertaAlFinal(int dato)
{
	Nodo* nuevo = new Nodo(dato);

	if (EstaVacia())
	{
		primero = nuevo;
	}
	else
	{
		Nodo* aux = primero;

		while (aux->sig != NULL)
		{
			aux = aux->sig;
		}

		aux->sig = nuevo;
	}

	tamano++;
}

void Lista::InsertaEnPosicion(int dato, int posicion)
{
	if (posicion < 1 || posicion > tamano + 1)
	{
		std::cout << "La posicion ingresada es invalida" << std::endl;
	}
	else if (posicion == 1)
	{
		InsertaAlInicio(dato);
	}
	else if (posicion == tamano + 1)
	{
		InsertaAlFinal(dato);
	}
	else
	{
		Nodo* nuevo = new Nodo(dato);
		Nodo* aux = primero;

		for (int i = 0; i < posicion - 2; i++)
		{
			aux = aux->sig;
		}

		nuevo->sig = aux->sig;
		aux->sig = nuevo;
		tamano++;
	}
}

void Lista::Mostrar()
{
	Nodo* aux = primero;

	while (aux != NULL)
	{
		std::cout << aux->dato << std::endl;
		aux = aux->sig;
	}
}

int Lista::ObtenerDato(int posicion)
{
	if (posicion < 1 || posicion > tamano)
	{
		std::cout << "La posicion ingresada es invalida" << std::endl;
	}
	else
	{
		Nodo* aux = primero;

		for (int i = 0; i < posicion - 1; i++)
		{
			aux = aux->sig;
		}

		return aux->dato;
	}

	return -1;
}

int Lista::Eliminar(int posicion)
{
	if (posicion < 1 || posicion > tamano)
	{
		std::cout << "La posicion ingresada es invalida" << std::endl;
	}
	else if (posicion == 1)
	{
		Nodo* aux = primero;
		primero = primero->sig;
		int tmp = aux->dato;
		delete (aux);
		tamano--;
		return tmp;
	}
	else
	{
		Nodo* aux = primero;
		Nodo* aux2 = primero;

		for (int i = 0; i < posicion - 1; i++)
		{
			aux = aux2;
			aux2 = aux2->sig;
		}

		aux->sig = aux2->sig;
		int tmp = aux2->dato;
		delete (aux2);
		tamano--;
		return tmp;
	}
}

int Lista::EliminarTodo()
{
	Nodo* aux = primero;

	while (primero != NULL)
	{
		aux = primero;
		primero = primero->sig;
		delete (aux);
	}

	int tmp = tamano;
	tamano = 0;
	return tmp;
}

void Lista::Ordenar()
{
	Nodo* aux = primero;
	Nodo* aux2 = aux->sig;

	while (aux->sig != NULL)
	{
		aux2 = aux->sig;

		while (aux2 != NULL)
		{
			if (aux->dato > aux2->dato)
			{
				int tmp = aux->dato;
				aux->dato = aux2->dato;
				aux2->dato = tmp;
			}

			aux2 = aux2->sig;
		}

		aux = aux->sig;
	}
}

int Lista::ObtenerTamano()
{
	return tamano;
}