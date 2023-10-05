#pragma once
#pragma once
#include "iostream"

using namespace System;
using namespace std;

class Cuadrado
{
private:
	int x, y, dx, dy;
public:
	Cuadrado(int px, int py);
	~Cuadrado();

	//metodos
	void borrar();
	void mover();
	void dibujar();

};

Cuadrado::Cuadrado(int px, int py)
{
	this->x = px;
	this->y = py;
	this->dx = -1;
	this->dy = -1;
}

Cuadrado::~Cuadrado()
{}

void Cuadrado::borrar()
{
	Console::SetCursorPosition(x, y);
	cout << " ";
}

void Cuadrado::mover()
{
	if (x == 0 && y == 0) { dx = 1; dy = 0; }
	if (x == 79 && y == 0) { dx = 0; dy = 1; }
	if (x == 79 && y == 39) { dx = -1; dy = 0; }
	if (x == 0 && y == 39) { dx = 0; dy = -1; }

	x += dx;
	y += dy;
}

void Cuadrado::dibujar()
{
	Console::SetCursorPosition(x, y);
	cout << (char)219;
}
