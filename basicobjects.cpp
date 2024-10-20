//Draw basic Objects
#include<graphics.h>  
int main()  
{  
    	int gd=DETECT,gm;  
    	initgraph (&gd,&gm,NULL);  
 
    	line(50,40,190,40);       			 //first 2 starting point & last 2 ending points
    
    	rectangle(125,115,215,165);        		 //all 4 points
 	 
    	arc(120,200,180,0,30); 	//arc(int x, int y, int start_angle, int end_angle, int radius);
 	 
    	circle(120,270,30);              		 //center co-ordinates first 2 & 3rd radius
   	 
     	int arr[] = {320, 150, 400, 250,  250, 350, 320, 150}; //first 6 are 3 points & last 2 first 1st point(repeated)
     	drawpoly(4, arr);    					 	//draw polygon
    	 
     	fillpoly(4, arr);    					 //filing polygon
    	 
    	ellipse(120,350,0,360,30,20);  //ellipse(int x, int y, int start_angle, int end_angle, int x_radius, int y_radius)  
 	 
    	getch();  
	} 

//use the following commands to run the above program in your ubuntu terminal
//gcc filename.cpp -o filename -lgraph
//./filename
