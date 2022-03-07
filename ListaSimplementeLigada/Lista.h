#pragma once
#include "Nodo.h"

class Lista
{
	Nodo* primero;
	int tamano;

public:
	Lista();
	bool EstaVacia(); // retorna true si la lista esta
	void InsertaAlInicio(int dato); // inserta elementos al inicio de la lista
	void InsertaAlFinal(int dato); // Inserta elementos al final de la lista
	void InsertaEnPosicion(int dato, int posicion); // Inserta elementos en la posicion especificada de la lista
	void Mostrar(); // Imprime en consola los elementos de la lista
	int ObtenerDato(int posicion); // Retorna el elemento de la posicion especificada
	int Eliminar(int posicion); // Elinina el elemento de la posicion especificada, retorna el dato eliminado
	int EliminarTodo(); // Elimina todos los elementos de la lista, retorna el número de elementos eliminados
	void Ordenar(); // Ordena la lista de menor a mayor
	int ObtenerTamano(); // Retorna el tamano de la lista
};

