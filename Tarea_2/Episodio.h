#include <string>

#ifndef EPISODIO_H
#define EPISODIO_H

class Episodio{
private:
    std::string titulo;
    int temporada;
    double calificacion;
public:
    Episodio();
    Episodio(std::string _titulo, int _temporada, double _calificacion);

    void setTitulo(std::string value);
    void setTemporada(int value);
    void setCalificacion(double value);

    std::string getTitulo();
    int getTemporada();
    double getCalificacion();

    std::string str();
};

#endif //EPISODIO.H