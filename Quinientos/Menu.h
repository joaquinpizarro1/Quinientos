#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string.h>

#include "Dados.h"
#include "Creditos.h"
#include "Instrucciones.h"
#include "jugadores2.h"

void showItem(const char* text, int posx, int posy, bool selected) {

	if (selected) {
		rlutil::setBackgroundColor(rlutil::BLUE);
		rlutil::locate(posx - 3, posy);
		std::cout <<" " <<(char)175 << " " << text << " " << (char)174 <<" " <<std::endl;

	}
	else {
		rlutil::setBackgroundColor(rlutil:: BLACK);
		rlutil::locate(posx-3, posy);
		std::cout << "   " << text << "   "<< std::endl;
	}

	rlutil::setBackgroundColor(rlutil::BLACK);
}

enum Opciones {
	Opcion1=0,
	Opcion2=1,
	Opcion3=2,
	Opcion4=3,
	Opcion5=4,
	Opcion6=7,
	Salir=5
};


void menu(char nombre[], char nombre1[], char nombre2[], int puntMax, char nombrePuntMax[])
 {
	int op = 1;
	int y = 0;
	char grado=248;
    int i,x=1;
    int puntajeMaximo = 0;
    int total=0;
    int puntaje=0;


	rlutil::hidecursor();
	do {

		rlutil::setBackgroundColor(rlutil::BLACK);
		rlutil::setColor(rlutil::WHITE);
		rlutil::hidecursor();
		showItem("  BIENVENIDOS A QUINIENTOS! ", 43, 7, y == Opcion6);
		showItem(" INSTRUCCIONES ", 50, 10, y == Opcion1);
		showItem("  UN  JUGADOR  ", 50, 11, y == Opcion2);
		showItem(" DOS JUGADORES ", 50, 12, y == Opcion3);
		showItem("  ESTADISTICA  ", 50, 13, y == Opcion4);
		showItem("   CREDITOS    ", 50, 14, y == Opcion5);
		showItem("     SALIR     ", 50, 15, y == Salir);
		switch (rlutil::getkey())
		{
		case 14:
			rlutil::locate(48, 10 + y);
			std::cout << " " << std::endl;
			y--;
			if (y < 0) {
				y = 0;
			}
			break;
		case 15:
			rlutil::locate(28, 10 + y);
			std::cout << " " << std::endl;
			y++;
			if (y > 5) {
				y = 5;
			}
			break;
		case 1:

			switch (y)
			{
            case 0:
                rlutil:: cls();
                Instrucciones();
                rlutil::getkey();
                rlutil:: cls();
            break;
            case 1:

                rlutil:: cls();
                rlutil::locate(45, 10);
                std:: cout << " Ingrese su nombre: ";
                std:: cin>>nombre;

                while ( total < 500 ){

                        rlutil:: cls();
                        ronda(x,nombre,total);
                        rlutil::getkey();
                        rlutil:: cls();

                    for ( i = 1 ; i <3 ; i++){
                        mostrardados(nombre, x, i,total);
                    }
                        puntaje = mostrardados(nombre, x, i,total);
                        if (puntaje > puntajeMaximo) {
                            puntajeMaximo = puntaje;

                        }
                    total = total + puntajeMaximo;
                    calcularPuntMax(nombre,total,puntMax,nombrePuntMax);
                    x++;
                    puntajeMaximo=0;


                }
                total=0;
                x=1;
                rlutil:: cls();

            break;
            case 2:
                rlutil:: cls();
                rlutil::locate(35, 10);
                std::cout << " Ingrese el nombre del primer  jugador: ";
                std::cin>>nombre1;
                rlutil::locate(35, 12);
                std::cout << " Ingrese el nombre del segundo jugador: ";
                std::cin>>nombre2;
                rlutil:: cls();
                mostrardados2(nombre1,nombre2);

                rlutil:: cls();
            break;
            case 3:
                rlutil:: cls();
                mostrarEstadisticas(puntMax, nombrePuntMax);
                rlutil::getkey();
                rlutil:: cls();
                break;
            case 4:
                rlutil:: cls();
                mostrarCreditos();
                rlutil::getkey();
                rlutil:: cls();
                break;
			case 5:
				op = 0;
				break;
			default:
				break;
			}


			break;
		default:
			break;
		}
	} while (op != 0);
	std :: cout << std :: endl;
}

#endif // MENU_H_INCLUDED
