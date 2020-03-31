#include <iostream>
#include "./headers/visualization.h"
#include "./headers/schedules.h"

using namespace std;

int main(){

    string group;
    string asesor;

    cout<<"Hey, Wich is your grade and group? : "<<endl;
    cin>>group;


    if(group == "1a"){
        asesor = "Jamin";
        cout<<"Perfect! Your professor is " << asesor << " And your schedule is:"<<endl;
        cout<<endl;
        vs::draw(sch::a1);
        
    }
    else if(group == "1b"){
        asesor = "Diego";
        cout<<"Perfect! Your professor is " << asesor << " And your schedule is:"<<endl;
        cout<<endl;
        vs::draw(sch::b1);
        
    }
    else if(group == "2a"){
        asesor = "Javier";
        cout<<"Perfect! Your professor is " << asesor << " And your schedule is:"<<endl;
        cout<<endl;
        vs::draw(sch::a2);
        
    }
    else if(group == "2b"){
        asesor = "Jesus";
        cout<<"Perfect! Your professor is " << asesor << ". And your schedule is:"<<endl;
        cout<<endl;
        vs::draw(sch::b2);
        
    }
    else{
        cout<<"What are you talking about?"<<endl;
    }



    return 0;
}


