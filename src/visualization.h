#include <iostream>
#include <string>

namespace vs{

    void draw(std::string a[4][3]){

        int fila;
        int columna;

        for(fila = 0; fila < 4; fila++){
            for(columna = 0; columna < 3; columna++){
                std::cout<<a[fila][columna];
            }
            std::cout<<std::endl;
        }
        std::cout<<std::endl;

    }
}