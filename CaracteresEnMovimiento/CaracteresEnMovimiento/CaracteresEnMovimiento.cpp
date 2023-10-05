#include "pch.h"
#include "ArregloCuadrados.h"
#include "conio.h"
using namespace System;

int main()
{
    Console::SetWindowSize(80, 40);
    Console::CursorVisible = false;
    //punteros
    ArregloCuadrado *ObjetoArregloCuadrados;
    Cuadrado* ObjetoCuadrado;

    //instancia el arreglo de cuadrados
    ObjetoArregloCuadrados = new ArregloCuadrado();
    Console::Clear();

    while (1)
    {
        if (ObjetoArregloCuadrados->get_N() > 0)//si hay datos en el arreglo
        {
            for (int i = 0; i < ObjetoArregloCuadrados->get_N(); i++)
            {
                //Obtener el cuadraro de la posicion i
                ObjetoCuadrado = ObjetoArregloCuadrados->ObtenerCuadrado(i);
                ObjetoCuadrado->borrar();
                ObjetoCuadrado->mover();
                ObjetoCuadrado->dibujar();

            }
        }
        //agrega cuadrados con una tecla
        if (kbhit())//si se pulsó alguna tecla
        {
            char tecla = getch(); //captura la tecla pulsada
            if (tecla == 'A')
            {
                ObjetoCuadrado = new Cuadrado(0, 0);//se crea un nuevo cuadrado
                ObjetoArregloCuadrados->AgregarCuadrado(ObjetoCuadrado);
            }
        }

        _sleep(100);
    }

    return 0;
}
