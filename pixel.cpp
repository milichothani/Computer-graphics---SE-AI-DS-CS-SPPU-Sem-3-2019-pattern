//Display pixel c++ Program
 
#include<graphics.h>
int main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, NULL);
 
	putpixel(30, 40, RED);
	putpixel(100, 250, GREEN);
	putpixel(350, 150, YELLOW);
	putpixel(250, 50, CYAN);
	putpixel(20, 10, WHITE);
	putpixel(200, 100, LIGHTBLUE);
	putpixel(300, 250, RED);
   
 
	delay(500000);
	closegraph();
	return 0;
}

//you can also add different colours for your pixel
//use the following command to run it on ubuntu terminal
//gcc filename.cpp -o filename -lgraph
//./filename
