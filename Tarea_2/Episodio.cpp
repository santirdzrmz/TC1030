#include "Episodio.h"
#include <string>

Episodio::Episodio(){}
Episodio::Episodio(std::string _titulo, int _temporada, double _calificacion){
    titulo = _titulo;
    temporada = _temporada;
    calificacion = _calificacion;
}

void Episodio::setTitulo(std::string value){
    titulo = value;
}
void Episodio::setTemporada(int value){
    temporada = value;
}
void Episodio::setCalificacion(double value){
    calificacion = value;
}

std::string Episodio::getTitulo(){
    return titulo;
}
int Episodio::getTemporada(){
    return temporada;
}
double Episodio::getCalificacion(){
    return calificacion;
}

std::string Episodio::str(){
    return titulo + " " + std::to_string(temporada) + " " + std::to_string(calificacion);
}