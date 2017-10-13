//callback2.h
#include "../list/ListHandler.h"
#include "../container/InfoContainer.h"


//ListHandler<InfoContainer> linkedDataBase;

void callback2(Fl_Widget*, void* ) {
    


    



    while(true){

    	
    	Rectangle rect2(Point((w/2)+2,160),Point(w-1,h),3,FL_BLACK);

    	window.attach(rect2);
  
    	int _size = (ServerPtr->getlist()).size();


    	int cont_y = 1;
		for (int i = 0; i < _size; i++)
		    {
		    	string keyn = (ServerPtr->getlist())[i].get_key();

		    	string sizen = std::to_string((ServerPtr->getlist())[i].get_size());

		    	

		    	Text *txt = new Text(Point(w/2+100,160+50*cont_y),FL_HELVETICA,25,FL_RED, keyn);
		    	
    			window.attach(*txt);

    			

    			Line *linen = new Line(Point(w/2+225,163+50*cont_y),Point(w/2+225,187+50*cont_y),1,FL_WHITE);
    			window.attach(*linen);

    			Line *linen2 = new Line(Point(w/2+230,175+50*cont_y),Point(w/2+225,187+50*cont_y),1,FL_WHITE);
    			window.attach(*linen2);

    			Line *linen3 = new Line(Point(w/2+220,175+50*cont_y),Point(w/2+225,187+50*cont_y),1,FL_WHITE);
    			window.attach(*linen3);



				Line *lineder = new Line(Point(w/2+90,140+50*cont_y),Point(w/2+90,160+50*cont_y),1,FL_WHITE);
    			window.attach(*lineder);

    			Line *linenup = new Line(Point(w/2+90,137+50*cont_y),Point(w/2+400,137+50*cont_y),1,FL_WHITE);
    			window.attach(*linenup);

    			Line *linendown = new Line(Point(w/2+90,163+50*cont_y),Point(w/2+400,163+50*cont_y),1,FL_WHITE);
    			window.attach(*linendown);

    			Line *lineizq = new Line(Point(w/2+400,140+50*cont_y),Point(w/2+400,160+50*cont_y),1,FL_WHITE);
    			window.attach(*lineizq);

    			Text *txt2 = new Text(Point(w/2+365,160+50*cont_y),FL_HELVETICA,25,FL_RED, sizen );
		    	
    			window.attach(*txt2);

    			Line *lineder2 = new Line(Point(w/2+350,140+50*cont_y),Point(w/2+350,160+50*cont_y),1,FL_WHITE);
    			window.attach(*lineder2);


    			++cont_y;
		        //std::cout << keyn << "," << sizen << std::endl;
		    }

		
    	
    	//ServerPtr->cacheDataBase
		
		std::this_thread::sleep_for(std::chrono::seconds(1));



	    Fl::check();
	    Fl::redraw();
}


}