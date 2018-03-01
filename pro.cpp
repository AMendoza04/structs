#include <bits/stdc++.h>

using namespace std;


class Persona
{
public:

  string getnombres(){return this->nombres;};
  string getapellidos(){return this->apellidos;};
  string getpid(){return this->pid;};
  string getciudad(){return this->ciudad;};
  string getdir(){return this->dir;};
  string gettel(){return this->tel;};
  void setnombres(string value){this->nombres = value;};
  void setapellidos(string value){this->apellidos = value;};
  void setpid(string value){this->pid = value;};
  void setciudad(string value){this->ciudad = value;};
  void setdir(string value){this->dir = value;};
  void settel(string value){this->tel = value;};

private:

  string nombres;
  string apellidos;
  string pid;
  string ciudad;
  string dir;
  string tel;


};
class Paquete
{
public:

  Persona getremit(){return this->remit;};
  Persona getdestin(){return this->destin;};
  double getpeso(){return this->peso;};
  string gettipo(){return this->tipo;};
  string getnumguia(){return this->tipo;};
  string getrid(){return this->rid;};
  void setremit(Persona value){this->remit = value;};
  void setdestin(Persona value){this->destin = value;};
  void setpeso(double value){this->peso = value;};
  void settipo(string value){this->tipo = value;};
  void setnumguia(string value){this->tipo = value;};
  void setrid(string value){this->rid = value;};

private:

  Persona remit;
  Persona destin;
  double peso;
  string tipo;
  string numgia;

  string rid;

};

class Region
{
public:

  string getnombre(){return this->nombre;};
  string getrid(){return this->rid;};
  vector < Paquete > getpaquetes(){return this->paquetes;};
  string getoid(){return this->oid;};
  void setnombre(string value){this->nombre = value;};
  void setrid(string value){this->rid = value;};
  void setpaquetes(vector < Paquete > value){this->paquetes = value;};
  void setoid(string value){this->oid = value;};

private:

  string nombre;
  string rid;

  vector < Paquete > paquetes;
  string oid;

};

class OfiRep
{
public:
  string getoid(){return this->oid;};
  string getnombre(){return this->nombre;};
  string getdir(){return this->dir;};
  string getciudad(){return this->ciudad;};
  vector < Region > getregiones(){return this->regiones;};
  void setoid(string value){this->oid = value;};
  void setnombre(string value){this->nombre = value;};
  void setdir(string value){this->dir = value;};
  void setciudad(string value){this->ciudad = value;};
  void setregiones(vector < Region > value){this->regiones = value;};

private:

  string oid;
  string nombre;
  string dir;
  string ciudad;

  vector < Region > regiones;

};




class Empresa
{
public:
  bool leerPersonas( char* archivo);
  bool leerPaquetes(char* archivo);
  bool ingresarPersona();
  bool esta(Persona p);
  bool esta(Paquete p);
  bool ingresarPaquete();
private:
  vector < OfiRep > oficinas;
  vector < Persona > personas;

};
int main(int argc, char* argv[])
{
  if(argc > 1)
  {
    string file_name = argv[1];
    ifstream input(file_name);
    string value;
    if(!input)
    {
      return(1);
    }
    int i = 0;
    string datos[6];
    while( !input.eof() )
    {
      getline(input,value,',');
      if(i >= 5)
      {
        if(i%5 == 0 && i > 5)
        {
          cout << i << endl;
          cout << value << endl;
        }
      }
      ++i;
    }
  }

}
