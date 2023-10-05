#pragma once
#include "iostream"
using namespace System;
using namespace std;

//Definicion de la clase
class Pelota
{
private:
	short x, y;
	short dx, dy;
	char forma;

public:
	Pelota();
	~Pelota();
	//metodos
	void borrar();
	void mover();
	void dibujar();
};

//IMPLEMENTACION DE LA CLASE
Pelota::Pelota()
{
	x = 2, y = 20;
	dx = dy = 1;
	forma = 79;
}

Pelota::~Pelota()
{}

void Pelota::borrar()
{
	Console::SetCursorPosition(x, y); cout << " ";
}
void Pelota::mover()
{
	if (x > 78 || x < 1) dx *= -1;
	if (y > 38 || y < 1) dy *= -1;

	x = x + dx;
	y = y + dy;
}
void Pelota::dibujar()
{
	Console::SetCursorPosition(x, y); cout << char(forma);
}