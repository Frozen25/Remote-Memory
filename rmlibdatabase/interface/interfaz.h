//interfaz.h
#ifndef INTERFACE_H
#define INTERFACE_H

#include "GUI.h"
#include <iostream>
//#include "../server/server.h"


Server* ServerPtr;
Windows window(Point(w, 0), w, h, "Interfaz");


Line line2(Point(w/2,0),Point(w/2,h),3,FL_WHITE);
Text text1(Point(200,50),FL_HELVETICA,25,FL_RED,"Cache");
Text text2(Point(w/2+200,50),FL_HELVETICA,25,FL_RED,"Lista");
//Out_box outbox1(Point(50,120),100,30,"Number of collisions.");
//Out_box outbox2(Point(w/2+50,120),100,30,"Time elapsed (seconds).");

#include "callback1.h"
#include "callback2.h"
Button button1(Point(200,70),100,30,"Actualizar",callback1);
Button button2(Point(w/2+200,70),100,30,"Actualizar",callback2);



int interfaz(Server* _server) {
    
    ServerPtr = _server;
    
    window.attach(line2);
    window.attach(text1);
    window.attach(text2);

    window.attach(button1);
    //window.attach(outbox1);
    //window.attach(outbox2);

    window.attach(button2);

    //outbox1.set_value("0");
    //outbox2.set_value("hola");
    return Fl::run();
}

#endif //INTERFACE_H
