#pragma once
#include <iostream>

class Nodo
{
	int dato;
	Nodo* sig;

	friend class Lista;
public:
	Nodo(int _dato);
};

