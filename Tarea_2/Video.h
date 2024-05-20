#include <string>

#ifndef VIDEO_H
#define VIDEO_H

class Video{
protected:
    std::string ID;
    std::string titulo;
    int duracion;
    std::string genero;
    double calificacionPromedio;
public:
    Video();
    Video(std::string _ID,
    std::string _titulo,
    int _duracion,
    std::string _genero,
    double _calificacionPromedio);

    void setID(std::string value);
    void setNombre(std::string value);
    void setDuracion(int value);
    void setGenero(std::string value);
    void SetCalificacion(double value);

    std::string getID();
    std::string getNombre();
    int getDuracion();
    std::string getGenero();
    double getCalificacion();

    std::string str();




};

#endif // VIDEO.H