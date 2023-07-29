#ifndef INSTRUCCIONES_H_INCLUDED
#define INSTRUCCIONES_H_INCLUDED

void Instrucciones() {
    system("cls");
    cout << "                                                                                              "<<endl;
    cout << "                                                                                              "<<endl;
    cout << "                                                  INSTRUCCIONES                               "<<endl;
    cout << "                                                                                              "<<endl;
    cout << "                                 * Tu reto es sumar la mayor cantidad de puntos en            "<<endl;
    cout << "                                   el menor tiempo posible hasta llegar a 500 puntos.         "<<endl;
    cout << "                                                                                              "<<endl;
    cout << "                                 * Primero debes ingresar tu nombre para jugar                "<<endl;
    cout << "                                                                                              "<<endl;
    cout << "                                 * Luego deberas lanzar los dados                             "<<endl;
    cout << "                                                                                              "<<endl;
    cout << "                                 * Por cada ronda tendras 3 (tres) lanzamientos               "<<endl;
    cout << "                                                                                              "<<endl;
    cout << "                                 * En caso del modo 2 jugadores, los lanzamientos             "<<endl;
    cout << "                                   seran alternados                                           "<<endl;
    cout << "                                                                                              "<<endl;
    cout << "                                      * EXISTEN 4 COMBINACIONES POSIBLES *                    "<<endl;
    cout << "                                                                                              "<<endl;
    cout << "                                 * Si salen menos de 3 dados con valores iguales:             "<<endl;
    cout << "                                   el puntaje sera la suma de los valores de todos            "<<endl;;
    cout << "                                   los dados                                                  "<<endl;
    cout << "                                                                                              "<<endl;
    cout << "                                 * 3 dados o más con el mismo valor (hasta 5 iguales):        "<<endl;
    cout << "                                   Trío X++ (X es el número del dado), puntaje: X*10puntos    "<<endl;
    cout << "                                   En el caso que haya 2 ternas de dados se debe elegir       "<<endl;
    cout << "                                   la que otorgue el puntaje mayor.                           "<<endl;
    cout << "                                                                                              "<<endl;
    cout << "                                 * 6 dados iguales (menos para el número 6):                  "<<endl;
    cout << "                                   Sexteto X (X es el número del dado): X*50 puntos           "<<endl;
    cout << "                                                                                              "<<endl;
    cout << "                                 * Escalera (1, 2, 3, 4, 5, 6): Gana la partida en esa ronda. "<<endl;
    cout << "                                                                                              "<<endl;
    cout << "                                 * Seis 6. Sexteto6: Pierde todos los puntos de la ronda      "<<endl;
}

#endif // INSTRUCCIONES_H_INCLUDED
