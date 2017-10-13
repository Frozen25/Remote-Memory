//callback.h

#include <algorithm>
#include <chrono>


void callback1(Fl_Widget*, void*) {


    

   
    

    while(true){

    	Rectangle rect(Point(1,160),Point((w/2)-2,h),3,FL_WHITE);

    	window.attach(rect);
   	
    	int _size = (ServerPtr->getcache()).size();


    	int cont_y = 1;
		for (int i = 0; i < _size; i++)
		    {
		    	string keyn = (ServerPtr->getcache())[i].get_key();

		    	string sizen = std::to_string((ServerPtr->getcache())[i].get_size());

		    	

		    	Text *txt = new Text(Point(100,160+50*cont_y),FL_HELVETICA,25,FL_BLUE, keyn  );
		    	//Out_box *outboxn = new Out_box(Point(200,160 + 50*cont_y),100,30, keyn + " " + sizen );
    			window.attach(*txt);

    			//Line line2(Point(w/2,0),Point(w/2,h),3,FL_BLACK);

    			Line *linen = new Line(Point(225,163+50*cont_y),Point(225,187+50*cont_y),1,FL_BLACK);
    			window.attach(*linen);

    			Line *linen2 = new Line(Point(230,175+50*cont_y),Point(225,187+50*cont_y),1,FL_BLACK);
    			window.attach(*linen2);

    			Line *linen3 = new Line(Point(220,175+50*cont_y),Point(225,187+50*cont_y),1,FL_BLACK);
    			window.attach(*linen3);


    			Line *lineizq = new Line(Point(90,140+50*cont_y),Point(90,160+50*cont_y),1,FL_BLACK);
    			window.attach(*lineizq);

    			Line *linenup = new Line(Point(90,137+50*cont_y),Point(400,137+50*cont_y),1,FL_BLACK);
    			window.attach(*linenup);

    			Line *linendown = new Line(Point(90,163+50*cont_y),Point(400,163+50*cont_y),1,FL_BLACK);
    			window.attach(*linendown);

    			Line *lineder = new Line(Point(400,140+50*cont_y),Point(400,160+50*cont_y),1,FL_BLACK);
    			window.attach(*lineder);

    			Text *txt2 = new Text(Point(360,160+50*cont_y),FL_HELVETICA,25,FL_BLUE, sizen );
    			window.attach(*txt2);

    			Line *lineder2 = new Line(Point(350,140+50*cont_y),Point(350,160+50*cont_y),1,FL_BLACK);
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