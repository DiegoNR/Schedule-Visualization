#include <iostream>
#include <string>

using namespace std;

void draw(string a[4][3]){

    int fila;
    int columna;

    for(fila = 0; fila < 4; fila++){
        for(columna = 0; columna < 3; columna++){
            cout<<a[fila][columna];
        }
        cout<<endl;
    }

}

int main(){

    string grupo;
    string asesor;
    
    int const x =4;
    int const y = 3;

    string a1[x][y]={
        {"[   Materias  ]","[  Maestros  ]","[   Horario   ]"},
        {"[ Matematicas ]","[   Eduardo  ]","[10:00 - 11:00]"},
        {"[   Ciencias  ]","[   Gaston   ]","[11:00 - 12:00]"},
        {"[   Lenguaje  ]","[  Guadalupe ]","[12:00 - 13:00]"}
    };

    string b1[x][y]={
        {"[   Materias  ]","[  Maestros  ]","[   Horario   ]"},
        {"[ Matematicas ]","[  Emiliano  ]","[10:00 - 11:00]"},
        {"[   Ciencias  ]","[    Jose    ]","[11:00 - 12:00]"},
        {"[  Lenguaje   ]","[    Diana   ]","[12:00 - 13:00]"}
    };

    string a2[x][y]={
        {"[   Materias  ]","[  Maestros  ]","[   Horario   ]"},
        {"[  Geometria  ]","[   Eduardo  ]","[13:00 - 14:00]"},
        {"[   Quimica   ]","[   Gaston   ]","[14:00 - 15:00]"},
        {"[  Escritura  ]","[  Guadalupe ]","[16:00 - 17:00]"}
    };

    string b2[x][y]={
        {"[   Materias  ]","[  Maestros  ]","[   Horario   ]"},
        {"[  Geometria  ]","[    Raul    ]","[13:00 - 14:00]"},
        {"[   Quimica   ]","[   Ruben    ]","[14:00 - 15:00]"},
        {"[  Escritura  ]","[   Samuel   ]","[16:00 - 17:00]"}
    };

    cout<<"Hola, De que grado y grupo eres? : "<<endl;
    cin>>grupo;


    if(grupo == "1a"){
        asesor = "Jamin";
        cout<<"Perfecto!! Tu asesor es " << asesor << " y tu horario es:"<<endl;
        cout<<endl;
        draw(a1);
        
    }
    else if(grupo == "1b"){
        asesor = "Diego";
        cout<<"Perfecto!! Tu asesor es " << asesor << " y tu horario es:"<<endl;
        cout<<endl;
        draw(b1);
        
    }
    else if(grupo == "2a"){
        asesor = "Javier";
        cout<<"Perfecto!! Tu asesor es " << asesor << " y tu horario es:"<<endl;
        cout<<endl;
        draw(a2);
        
    }
    else if(grupo == "2b"){
        asesor = "Jesus";
        cout<<"Perfecto!! Tu asesor es " << asesor << " y tu horario es:"<<endl;
        cout<<endl;
        draw(b2);
        
    }
    else{
        cout<<"De que grupo hablas??"<<endl;
    }



    return 0;
}


