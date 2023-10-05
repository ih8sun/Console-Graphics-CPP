#include "pch.h"
#include "Lanzador.h"
#include "conio.h"

int main()
{
    //tam consola
    Console::SetWindowSize(80, 40);
    Console::CursorVisible = false;
    //dibuja el lanzador
    Console::ForegroundColor = ConsoleColor::Red;
    Console::SetCursorPosition(0, 20); cout << "#=";
    Console::ForegroundColor = ConsoleColor::White;
    
    //define puneteros
    Lanzador* ObjetoLanzador;
    Pelota * ObjetoPelota;
    //crea el lanzador
    ObjetoLanzador = new Lanzador();

    while (true)
    {
        if (_kbhit()) // detecta si se ha pulsado una tecla
        {
            char tecla = getch(); //captura la tecla pulsada

            if (tecla == 'L')
            {
                ObjetoPelota = new Pelota(); //crea el objeto pelota
                ObjetoLanzador->AgregarPelota(ObjetoPelota);
            }
        }
        //Muestra las pelotas
        if(ObjetoLanzador->getN() > 0)
        {
            ObjetoLanzador->MostrarPelotas();
        }

        _sleep(100);
    }
   

   system("pause>0");
    return 0;
}
