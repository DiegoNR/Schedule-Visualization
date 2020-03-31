#include <iostream> 
#include <string>

using namespace std;

int const x = 4;
int const y = 3;


namespace sch{
    
    string a1[x][y]={
        {"[   Subjects  ]","[  Teachers  ]","[  Schedule   ]"},
        {"[ Mathematics ]","[   Eduardo  ]","[10:00 - 11:00]"},
        {"[    Cience   ]","[   Gaston   ]","[11:00 - 12:00]"},
        {"[   Lenguage  ]","[  Guadalupe ]","[12:00 - 13:00]"}
    };

    string b1[x][y]={
        {"[   Subjects  ]","[  Teachers  ]","[  Schedule   ]"},
        {"[ Mathematics ]","[  Emiliano  ]","[10:00 - 11:00]"},
        {"[    Cience   ]","[    Jose    ]","[11:00 - 12:00]"},
        {"[  Lenguage   ]","[    Diana   ]","[12:00 - 13:00]"}
    };

    string a2[x][y]={
        {"[   Subjects  ]","[  Teachers  ]","[  Schedule   ]"},
        {"[  Geometry   ]","[   Eduardo  ]","[13:00 - 14:00]"},
        {"[  Chemistry  ]","[   Gaston   ]","[14:00 - 15:00]"},
        {"[   Writing   ]","[  Guadalupe ]","[16:00 - 17:00]"}
    };

    string b2[x][y]={
        {"[   Subjects  ]","[  Teachers  ]","[  Schedule   ]"},
        {"[  Geometry   ]","[    Raul    ]","[13:00 - 14:00]"},
        {"[  Chemistry  ]","[   Ruben    ]","[14:00 - 15:00]"},
        {"[   writing   ]","[   Samuel   ]","[16:00 - 17:00]"}
    };
}
