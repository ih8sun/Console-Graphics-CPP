#pragma once
#include "Pelota.h"

class Lanzador
{
private:
	Pelota** arreglo;
	int* N; //para el tam del arreglo
public:
	Lanzador();
	~Lanzador();
	//metodos
	void AgregarPelota(Pelota* objeto);
	Pelota *ObtenerPelota(int index);
	void MostrarPelotas();
	int getN();
};
//IMPLEMENTACION DE LA CLASE
Lanzador::Lanzador()
{
	arreglo = nullptr;
	N = new int;
	*N = 0;//tam arreglo
}

Lanzador::~Lanzador()
{}

void Lanzador::AgregarPelota(Pelota* objeto)
{
	//crea un arreglo temporal del mismo tipo y tam +1
	Pelota** temporal = new Pelota * [*N + 1];

	//copia todo el arreglo al temporal
	if(temporal!=nullptr)
	{
		for (int i = 0; i < *N; i++)
		{
			temporal[i] = arreglo[i];
		}
	}
	//agrega el nuevo elemento
	temporal[*N] = objeto;

	//actualiza el tam del arreglo
	*N = *N + 1;
	
	//elimina el arreglo original
	if(arreglo!=nullptr ) delete arreglo;

	arreglo = temporal;
}

Pelota* Lanzador::ObtenerPelota(int index)
{
	return arreglo[index];
}

void Lanzador::MostrarPelotas()
{
	for (int i = 0; i < *N; i++)
	{
		arreglo[i]->borrar();
		arreglo[i]->mover();
		arreglo[i]->dibujar();
	}
}

int Lanzador::getN()
{
	return *N;
}