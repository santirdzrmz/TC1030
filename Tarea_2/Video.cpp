#include "Video.h"
#include <string>

Video::Video(){}

Video::Video(std::string _ID,
    std::string _titulo,
    int _duracion,
    std::string _genero,
    double _calificacionPromedio){
    ID = _ID;
    titulo = _titulo;
    duracion = _duracion;
    genero = _genero;
    calificacionPromedio = _calificacionPromedio;
}

void Video::setID(std::string value){
    ID = value;
}
void Video::setNombre(std::string value){
    titulo = value;
}
void Video::setDuracion(int value){
    duracion = value;
}
void Video::setGenero(std::string value){
    genero = value;
}
void Video::SetCalificacion(double value){
    calificacionPromedio = value;
}

std::string Video::getID(){
    return ID;
}
std::string Video::getNombre(){
    return titulo;
}
int Video::getDuracion(){
    return duracion;
}
std::string Video::getGenero(){
    return genero;
}
double Video::getCalificacion(){
    return calificacionPromedio;
}

std::string Video::str(){
    return ID + " " + titulo + " " + std::to_string(duracion) + " " + genero + " " + std::to_string(calificacionPromedio);
}