#include "civilizacion.h"

Civilizacion::Civilizacion()
{

}

Civilizacion::Civilizacion(const string &nombre,int ubicacion_x, int ubicacion_y,int puntuacion)
{
    this->nombre = nombre;
    this->ubicacion_x = ubicacion_x;
    this->ubicacion_y = ubicacion_y;
    this->puntuacion = puntuacion;
}

void Civilizacion::setNombre(const string &v)
{
    nombre=v;
}
string Civilizacion::getNombre()
{
    return nombre;
}
void Civilizacion::setUbicacion_x(int v)
{
    ubicacion_x=v;
}
int Civilizacion::getUbicacion_x()
{
    return ubicacion_x;
}

void Civilizacion::setUbicacion_y(int v)
{
    ubicacion_y=v;
}
int Civilizacion::getUbicacion_y()
{
    return ubicacion_y;
}
void Civilizacion::setPuntuacion(int v)
{
    puntuacion=v;
}
int Civilizacion::getPuntuacion()
{
    return puntuacion;
}
