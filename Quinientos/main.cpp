#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string.h>

#include "rlutil.h"
#include "Menu.h"
#include "Dados.h"
#include "Creditos.h"
#include "Instrucciones.h"
#include "jugadores2.h"


int main() {
char nombre[100];
char nombre1[100];
char nombre2[100];
char nombrePuntMax[100];
strcpy(nombrePuntMax, "Ninguno");
int puntMax[1]= {0};

menu(nombre,nombre1,nombre2,puntMax[0],nombrePuntMax);



    return 0;
}

