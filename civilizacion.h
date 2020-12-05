#ifndef CIVILIZACION_H
#define CIVILIZACION_H
#include <iomanip>
#include<iostream>

using namespace std;

class Civilizacion {
  private:
    string nombre;
    int ubicacion_x;
    int ubicacion_y;
    int puntuacion;

  public:
    Civilizacion();
    Civilizacion(const string &nombre,int ubicacion_x,int ubicacion_y,int puntuacion);

    void setNombre(const string &v);
    string getNombre();

    void setUbicacion_x(int v);
    int getUbicacion_x();

    void setUbicacion_y(int v);
    int getUbicacion_y();

    void setPuntuacion(int v);
    int getPuntuacion();


    friend ostream& operator<<(ostream &out, const Civilizacion &p)
    {
      out<<left;
      out <<setw(15)<<p.nombre;
      out <<setw(22)<<p.ubicacion_x;
      out <<setw(22)<<p.ubicacion_y;
      out <<setw(7)<<p.puntuacion;
      out <<endl;
      return out;
    }
    friend istream& operator>>(istream &in, Civilizacion &p)
    {
     
    
      cout <<"Nombre: ";
      getline(cin, p.nombre);
      cout <<"ubicacion en x: ";
      cin>> p.ubicacion_x;
      cout <<"ubicacion en y: ";
      cin>>p.ubicacion_y;
      cout <<"puntuacion: ";
      cin>>p.puntuacion;



      return in;
    }
    bool operator==(const Civilizacion& p)
    {
      return nombre==p.nombre;
    }
    bool operator==(const Civilizacion& p)const
    {
      return nombre==p.nombre;
    }
    bool operator<(const Civilizacion& p)
    {
      return nombre < p.nombre;
    }
    bool operator<(const Civilizacion& p)const
    {
      return nombre< p.nombre;
    }
  };

#endif
