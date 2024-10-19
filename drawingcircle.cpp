//Sample circle c++ Program
 
#include<graphics.h>
int main()
{
	int gd = DETECT, gm;          // gm is Graphics mode which is
                             // a computer display mode that
                               // generates image using pixels.
    // DETECT is a macro defined in
    // "graphics.h" header file

	initgraph(&gd, &gm, NULL);
// initgraph initializes the
    // graphics system by loading a
    // graphics driver from disk

 
	circle(50, 50, 30);  // circle function 
 
	delay(500000);         // closegraph function closes the
    // graphics mode and deallocates
    // all memory allocated by
    // graphics system .

   
	closegraph();
	return 0;
}

// use the following command to run the above program in ubuntu terminal
//gcc filename.cpp -o filename -lgraph
//./filename
