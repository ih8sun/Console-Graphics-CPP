	#pragma once
#include "Cuadrado.h"

class ArregloCuadrado
{
private:
	Cuadrado** arreglo;	
	int N; //tam del arreglo

public:
	ArregloCuadrado();
	~ArregloCuadrado();
	//metodos
	void AgregarCuadrado(Cuadrado *objeto);
	Cuadrado *ObtenerCuadrado(int indice);
	void eliminarCuadrado();
	int get_N();

};
//IMLEMENTACION
ArregloCuadrado::ArregloCuadrado()
{
	arreglo = nullptr;
	N = 0;

}
ArregloCuadrado::~ArregloCuadrado()
{}

void ArregloCuadrado::AgregarCuadrado(Cuadrado* objeto)
{
	//crea un arreglo temporal de tam +1
	Cuadrado** temporal = new Cuadrado * [N + 1];

	//copio el arreglo original al temporal
	for (int i = 0; i < N; i++)
	{
		temporal[i] = arreglo[i];
	}
	//se agrega el nuevo objeto
	temporal[N] = objeto;

	//actualiza el tam del arreglo
	N = N + 1;

	//borra el arreglo original antes de ser actualizado
	if (arreglo != nullptr) delete arreglo;

	//actualizamos el arreglo
	arreglo = temporal;
}

Cuadrado* ArregloCuadrado::ObtenerCuadrado(int indice)
{
	return arreglo[indice];//retorna un cuadrado de la posicion indice
}

int ArregloCuadrado::get_N()
{
	return N;
}
