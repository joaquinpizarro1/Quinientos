#ifndef DADOS_H_INCLUDED
#define DADOS_H_INCLUDED

#include <iostream>
#include <ctime>
#include <cstdlib>

#include "rlutil.h"
#include "Menu.h"

using namespace std;



void dibujarCuadrado(int posx, int posy) {
  for (int x = 0; x < 7; x++) {
    for (int y = 0; y < 3; y++) {
      rlutil::locate(x + posx, y + posy);
      rlutil::setBackgroundColor(15);
      cout << " ";
    }
  }
}

int dibujarDado(int posx, int posy, int num, int& n) {
  dibujarCuadrado(posx, posy);

  switch (num)
  {
  case 1:
    rlutil::locate(posx + 3, posy + 1);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)254;
    n=1;
    break;
  case 2:
    rlutil::locate(posx + 5, posy);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)220;

    rlutil::locate(posx + 1, posy + 2);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)223;
    n=2;
    break;
  case 3:
    rlutil::locate(posx + 3, posy + 1);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)254;

    rlutil::locate(posx + 5, posy);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)220;

    rlutil::locate(posx + 1, posy + 2);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)223;
    n=3;

    break;

  case 4:
    rlutil::locate(posx + 5, posy);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)220;

    rlutil::locate(posx + 1, posy);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)220;

    rlutil::locate(posx + 1, posy + 2);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)223;

    rlutil::locate(posx + 5, posy + 2);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)223;

    n=4;

    break;

  case 5:
    rlutil::locate(posx + 5, posy);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)220;

    rlutil::locate(posx + 1, posy);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)220;

    rlutil::locate(posx + 3, posy + 1);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)254;

    rlutil::locate(posx + 1, posy + 2);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)223;

    rlutil::locate(posx + 5, posy + 2);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)223;

    n=5;

    break;

  case 6:
    rlutil::locate(posx + 5, posy);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)220;

    rlutil::locate(posx + 1, posy);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)220;

    rlutil::locate(posx + 3, posy);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)220;


    rlutil::locate(posx + 3, posy + 2);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)223;

    rlutil::locate(posx + 1, posy + 2);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)223;

    rlutil::locate(posx + 5, posy + 2);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)223;

    n=6;

    break;
  default:
    break;
  }
    return n;
}

char cartel(int &lambda){

switch (lambda) {
    case 1:
        std::cout << "Opción 1 seleccionada" << std::endl;
        break;
    case 2:
        std::cout << "Opción 2 seleccionada" << std::endl;
        break;
    case 3:
        std::cout << "Opción 3 seleccionada" << std::endl;
        break;
    case 4:
        std::cout << "Opción 4 seleccionada" << std::endl;
        break;
    case 5:
        std::cout << "Opción 5 seleccionada" << std::endl;
        break;
    default:
        std::cout << "Opción inválida" << std::endl;
        break;
}

}

int puntos(int tirada[]) {
    int i, x, y, t, v, g;
    bool todosMenoresIguales2 = true;
    bool todosdistintos = true;
    int dado[6];

    rlutil::setBackgroundColor(rlutil::BLACK);
    rlutil::setColor(rlutil::WHITE);
    for (int i = 0; i < 6; i++) {
        dado[i] = 0;
    }
    int suma = 0;
    for (x = 0; x < 6; x++) {
        for (v = 1; v <= 6; v++) {
            if (tirada[x] == v) {
                dado[v-1]++;
            }
        }
    }

    for (int i = 0; i < 6; i++) {
        if (dado[i] > 2) {
            todosMenoresIguales2 = false;
            break;
        }
    }
     for (int i = 0; i < 6; i++) {
        if (dado[i] > 1) {
            todosdistintos = false;
            break;
        }
    }
    if (todosdistintos){
        suma = 500;

    }
    else{

        if (todosMenoresIguales2) {
            for (int g = 0; g < 6; g++) {
                suma += tirada[g];

            }
        }
        else {
            for (t = 0; t < 6; t++) {
                if (dado[t] >= 3 && dado[t] < 6) {
                    suma = (t+1) * 10;

                }
                if (dado[t] == 6 && t != 5 ) {
                    suma = (t+1) * 50;

                }
                else{
                    if (dado[t] == 6 && t == 5 ) {
                        suma = 0;

                    }
                }
            }
        }

    }

    return suma;
}




int mostrardados(char* nombre,int &x, int &i, int& total) {
  srand(time(0));
  rlutil::hidecursor();
  int n;
  int tirada[6];
  int puntajeactual;

    char grado=248;
    for (int num = 1; num <= 6; num++) {
        dibujarDado(num*15, 10, rand()%6 + 1,n);
        tirada[num-1]=n;
        puntajeactual= puntos(tirada);
        if ( puntajeactual==0){
            i=3;
        }
    }
    rlutil::setBackgroundColor(15);

    rlutil::setBackgroundColor(rlutil::BLACK);
rlutil::setColor(rlutil::WHITE);

rlutil::locate(23, 5);
std::cout << " | NOMBRE DEL JUGADOR: " << nombre << "  | RONDA N" << grado << ": " << x << " | PUNTAJE TOTAL: " << total << " |";

rlutil::locate(23, 6);
std::cout << " | --------------------------------------------------------------";

rlutil::locate(23, 7);
std::cout << " | MAXIMO PUNTAJE DE LA RONDA: " << puntajeactual  << " |";

rlutil::locate(23, 8);
std::cout << " | LANZAMINETO N" << grado << " : " << i;


    rlutil::anykey();
    return puntajeactual;
}


#endif // DADOS_H_INCLUDED
