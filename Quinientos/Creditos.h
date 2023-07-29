
#ifndef CREDITOS_H_INCLUDED
#define CREDITOS_H_INCLUDED


void mostrarCreditos()
{
    rlutil::setColor(rlutil::BLUE);

    rlutil::locate(25, 10);
    std::cout << "                                Creditos" << std::endl;

    rlutil::locate(25, 11);
    std::cout << "                    --------------------------------" << std::endl;

    rlutil::locate(25, 12);
    std::cout << "                   | Joaquin Nicolas Pizarro #25354 |" << std::endl;

    rlutil::locate(25, 13);
    std::cout << "                    --------------------------------" << std::endl;

    rlutil::setColor(rlutil::WHITE);
}

void ronda(int x, char* nombre,int& total){
    char grado=248;
    rlutil::locate(25, 10);
    cout<<"                              RONDA N"<<grado<<": "<<x << endl;
    rlutil::locate(25, 11);
    cout<<"                        ------------------------"<<endl;
    rlutil::locate(25, 12);
    cout<<"                       | Nombre: "<<nombre ;
    rlutil::locate(72, 12);
    cout << "|"<< endl;
    rlutil::locate(25, 13);
    cout<<"                       | Puntaje: "<<total ;
    rlutil::locate(72, 13);
    cout << "|"<< endl;
    rlutil::locate(25, 14);
    cout<<"                        ------------------------"<<endl;
    rlutil::locate(25, 17);
    cout<<"                 PRESIONE CUALQUIER TECLA PARA CONTINUAR"<<endl;
}

void calcularPuntMax(char nombre[], int puntos, int& puntMax, char nombrePuntMax[]){

if (puntMax==0){
puntMax=puntos;
strcpy(nombrePuntMax,nombre);
}
else if (puntos>puntMax){
    puntMax=puntos;
    strcpy(nombrePuntMax,nombre);
}
}



void mostrarEstadisticas(int& puntMax, char nombrePuntMax[])
{
    rlutil::locate(25, 10);
    cout<<"                          Puntuacion mas alta"<<endl;
    rlutil::locate(25, 11);
    cout<<"                        ------------------------"<<endl;
    rlutil::locate(25, 12);
    cout<<"                       | Nombre: "<<nombrePuntMax<<"       |"<<endl;
    rlutil::locate(25, 13);
    cout<<"                       | Puntaje: "<<puntMax<<"            |"<<endl;
    rlutil::locate(25, 14);
    cout<<"                        ------------------------"<<endl;

}





#endif // CREDITOS_H_INCLUDED
