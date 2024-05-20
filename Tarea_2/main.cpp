#include "Episodio.h"
#include "Video.h"
#include <iostream>
#include <string>

int main() {
    std::string idNewVideo;
    std::string tituloNewVideo;
    int duracionNewVideo;
    std::string generoNewVideo;
    double calificacionNewVideo;
    std::cout<< "Empezando con el video\n";
    std::cout<< "Ingrese el ID del video: ";
    std::cin>> idNewVideo;
    std::cout<< "Ingrese el titulo del video: ";
    std::cin>> tituloNewVideo;
    std::cout<< "Ingrese la duracion del video: ";
    std::cin>> duracionNewVideo;
    std::cout<< "Ingrese el genero del video: ";
    std::cin>> generoNewVideo;
    std::cout<< "Ingrese la calificacion del video: ";
    std::cin>> calificacionNewVideo;
    Video newVideo(idNewVideo,
    tituloNewVideo,
    duracionNewVideo,
    generoNewVideo,
    calificacionNewVideo);

    std::cout<< "Ingrese el nuevo ID del video: ";
    std::cin>> idNewVideo;
    std::cout<< "Ingrese el nuevo titulo del video: ";
    std::cin>> tituloNewVideo;
    std::cout<< "Ingrese la nueva duracion del video: ";
    std::cin>> duracionNewVideo;
    std::cout<< "Ingrese el nuevo genero del video: ";
    std::cin>> generoNewVideo;
    std::cout<< "Ingrese la nueva calificacion del video: ";
    std::cin>> calificacionNewVideo;
    newVideo.setID(idNewVideo);
    newVideo.setNombre(tituloNewVideo);
    newVideo.setDuracion(duracionNewVideo);
    newVideo.setGenero(generoNewVideo);
    newVideo.SetCalificacion(calificacionNewVideo);

    std::cout<< "Imprimiendo valores de video: \n";
    std::cout<< newVideo.getID() + " ";
    std::cout<< newVideo.getNombre() + " ";
    std::cout<< newVideo.getDuracion();
    std::cout<< " "+newVideo.getGenero()+" ";
    std::cout<< newVideo.getCalificacion();
    std::cout<< "\n ";

    std::cout<<newVideo.str()<< + "\n";

    std::cout<< "Ahora la clase de Episodio\n";

    std::string titulo;
    int temporada;
    double calificacion;
    std::cout<< "Ingrese el titulo del episodio: ";
    std::cin>> titulo;
    std::cout<< "Ingrese la temporada del episodio: ";
    std::cin>> temporada;
    std::cout<< "Ingrese la calificacion del episodio: ";
    std::cin>> calificacion;
    Episodio newEpisodio(titulo, temporada, calificacion);


    std::cout<< "Ingrese el nuevo titulo del episodio: ";
    std::cin>> titulo;
    std::cout<< "Ingrese la nueva temporada del episodio: ";
    std::cin>> temporada;
    std::cout<< "Ingrese la nueva calificacion del episodio: ";
    std::cin>> calificacion;
    newEpisodio.setTitulo(titulo);
    newEpisodio.setTemporada(temporada);
    newEpisodio.setCalificacion(calificacion);

    std::cout<< "Imprimiendo valores del episodio\n ";

    std::cout<< newEpisodio.getTitulo() + " ";
    std::cout<< newEpisodio.getTemporada();
    std::cout<< " ";
    std::cout<< newEpisodio.getCalificacion();

    std::cout<< "\n";

    std::cout<< newEpisodio.str();

    return 0;
}