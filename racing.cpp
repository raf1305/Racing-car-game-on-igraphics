#include "iGraphics.h"
#include<time.h>
#include <stdio.h>



double ww = 800;
double wh = 450;
double xx[4] = { 0.0, 800.0, 600.0, 200.0 };
double yy[4] = { 0.0, 0.0, 350.0, 350.0 };
double bx[4] = { 0, 200, 200, 0 };
double by[4] = { 0, 350, 350, 20 };
double bxx[4] = { 0, 200, 180, -20 };
double bgx[3] = { -20, 180, 0 };
double bgy[3] = { 20, 350, 350 };
double rbx[4] = { 297, 303, 294.857, 288 };
double rby[4] = { 350, 350, 345, 345 };

double rsx[4] = { 0, 385, 385, 0 };
double rsy[4] = { 193, 297, 297, 197 };
double rshx[4] = { 0, 385, 385, 0 };
double rshy[4] = { 220, 297, 297, 224 };
double spx[4] = { 50, 60, 60, 50 };
double spy[4] = { (2266/ 11), (2292 / 11), 232, 230 };
//double spy2[4] = { (15969/77), }
int i = 100;
double lx = 25;
double cw = 800, ch = 150;
int one = 1, two = 2, three = 0,four=0;
double x50 = 50, x300 = 300,x550=550, y325 = 325, y40 = 40, bxw = 200, bxh = 70;
int load = 1;
int choice = 0;
int cx = 350, cy = 20;
int c1 = 0, c2 = 0, c3 = 0, count = 0;
int chcx = 290, chcy = 40, chcw = 250, chch = 30;
double dox[4] = {297.55434,317.3913043,317.7455357,301.4508929};
double doy[4] = { 280,285,282.5,277.5};
double ddoy[4] = {280,285,282.5,277.5};
double ddox[4] = {460.714,442.8568571,462.9739304,484.7130609 };
double recobsx1[4] = {296.3131,359.84848,354.8484,301.3131};
double recobsy1[4] = { 212,207,297,297};


double recobsx2[3] = { 259.8484,354.8484,373.3164983};
double recobsy2[3] = {207,297,287};

void mydelay(int mseconds)
{
	clock_t start, end;
	double elapsed;

	start = clock();
	while (1)
	{
		end = clock();
		elapsed = ((double)(end - start)) / ((double)CLOCKS_PER_SEC / 1000.0);
		if (elapsed>mseconds)break;
	}
}

void menu()
{
	if (choice == 0) iShowBMP(0, 0, "menu.bmp");
	if (choice == 1 && three<11) iShowBMP(0, 0, "ng.bmp"), three++;
	if (choice == 2) iShowBMP(0, 0, "rsm.bmp");
	if (choice == 3) iShowBMP(0, 0, "ins.bmp");
	if (choice == 4) iShowBMP(0, 0, "hof.bmp");
	if (choice == 5) iShowBMP(0, 0, "crd.bmp");
	if (choice == 6) iShowBMP(0, 0, "ext.bmp");
}


void loading_dot()

{

	iSetColor(255, 0, 0);
	iText(275, 235, "LOADING", GLUT_BITMAP_TIMES_ROMAN_24);
	if (count >= 17) {
		count = count % 17;
		c1 = 0, c2 = 0, c3 = 0;
	}
	if (count >= 5 && c1 == 0){
		iFilledCircle(395, 239, 5, 100);
	}
	if (count >= 10 && c2 == 0){
		iFilledCircle(415, 239, 5, 100);
	}
	if (count >= 15 && c3 == 0){
		iFilledCircle(435, 239, 5, 100);
		if (count >= 16) c1 = 1, c2 = 1, c3 = 1;
	}
}

void loading_background()
{
	iSetColor(0, 0, 0);
	iFilledRectangle(0, 0, 800, 500);

	iSetColor(88, 88, 88);
	iFilledRectangle(0, 75, 800, 300);

	iSetColor(250, 250, 0);
	iFilledRectangle(0, 85, 800, 5);
	iFilledRectangle(0, 360, 800, 5);
	iSetColor(255, 255, 255);
	iFilledRectangle(30, 175, 40, 10);
}

void loading_speed_metre()
{
	iFilledRectangle(120, 175, 40, 10);
	iFilledRectangle(210, 175, 40, 10);
	iFilledRectangle(300, 175, 40, 10);
	iFilledRectangle(390, 175, 40, 10);
	iFilledRectangle(480, 175, 40, 10);
	iFilledRectangle(570, 175, 40, 10);
	iFilledRectangle(660, 175, 40, 10);
	iFilledRectangle(750, 175, 40, 10);
	iFilledRectangle(30, 275, 40, 10);
	iFilledRectangle(120, 275, 40, 10);
	iFilledRectangle(210, 275, 40, 10);
	iFilledRectangle(300, 275, 40, 10);
	iFilledRectangle(390, 275, 40, 10);
	iFilledRectangle(480, 275, 40, 10);
	iFilledRectangle(570, 275, 40, 10);
	iFilledRectangle(660, 275, 40, 10);
	iFilledRectangle(750, 275, 40, 10);
	iSetColor(255, 255, 255);
	iFilledRectangle(0, 225, 800, 5);
}

void race_track()
{
	
	iShowBMP(0, 0, "rt1.bmp");
	
	iSetColor(255, 255, 255);
	iLine(0, 185, 365, 297);
	iLine(0, 205, 365, 297);
	//iLine(800,185, 400, 297);
	//iLine(800,205, 400, 297);
	//iLine(0, 186, 800, 186);
	//iFilledPolygon(rsx, rsy, 4);
	//iFilledPolygon(rshx, rshy, 4);
	//iSetColor(171,182,182);
	iFilledPolygon(dox, doy, 4);
	//iFilledPolygon(spx, spy, 4);
	//iLine(0, 220, 385, 297);
	iShowBMP(cx, cy, "caar1.bmp");




	
	
	if (doy[0]>205){
		doy[0]-=3.065;
		dox[0] = (365 * ((doy[0]-205)/ 92));
		doy[1] -= 3;
		dox[1] = (365 * ((doy[1] - 205) / 92));
		doy[2] -= 3;
		dox[2] = (365 * ((doy[2] - 185) / 112));
		doy[3]-=3.065;
		dox[3] = (365 * ((doy[3]-185 )/ 112));
		



	}
	if (doy[0] <= 205){
		doy[0] = 280, dox[0] = 297.5534;
		doy[1] = 285, dox[1] = 317.3913043;
		doy[2] = 282.5, dox[2] = 317.7455357;
		doy[3] = 277.5, dox[3] = 301.4508929;
	}


	
	
	
	iSetColor(171, 182, 182);
	iFilledPolygon(ddox, ddoy, 4);
	if (ddoy[0]>205){
		ddoy[0]-=3.065;
		ddox[0] = (400* (4.228087-ddoy[0]/92));
		ddoy[1] -=3;
		ddox[1] = (400 * (4.228087- ddoy[1] / 92));
		ddoy[2]-=3;
		ddox[2] = (400 * (3.651785-ddoy[2]/112));
		ddoy[3]-=3.065;
		ddox[3] = (400 * (3.651785 - ddoy[3]/112));




	}
	if (ddoy[0] <= 205){
		ddoy[0] = 280, ddox[0] = 460.714;
		ddoy[1] = 285, ddox[1] = 442.8568571;
		ddoy[2] = 282.5, ddox[2] = 462.9739304;
		ddoy[3] = 277.5, ddox[3] = 484.7130609;
	}
	



	//another track
	iLine(125, 0, 365, 297);
	iLine(325, 0, 375, 297);
	iSetColor(255, 255, 255);
	iFilledPolygon(recobsx1, recobsy1, 4);
	iSetColor(111, 115, 115);
	iFilledPolygon(recobsx2, recobsy2, 3);

	
}

void opening()
{
	iSetColor(244, 244, 244);
	iFilledRectangle(0, 0, 800, 450);
	//iShowBMP(0, 0, "frnt.bmp");
	iShowBMP(cw, ch, "U.bmp");
	if (cw > 200)cw -= 50, ch -= 5;
	if (cw == 200){
		iSetColor(0, 0, 0);
		iText(300, 366, "ULTIMAE CAR RACING", GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(0, 255, 0);
		iText(300, 50, "Click Here to Continue", GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(255, 0, 0);
		iRectangle(chcx, chcy, chcw, chch);
	}
}


void iDraw() {

	iClear();
	race_track();
	
	iFilledPolygon(rsx, rsy, 4);
	
	

	
	iSetColor(255, 0, 0);
	iFilledRectangle(400, 300, 30, 40);
	

		
	
	if (three == 11 && four!=6) iShowBMP(0, 0, "slct.bmp"), four++;

	//iFilledEllipse(double manholeobsx , double manholeobsy,10.00 ,20.00 ,100);




	//loading part
	if (three != 11){
		if (load == 1 && two == 0)
		{
			loading_background();
			
			loading_speed_metre();

			loading_dot();

			iRectangle(275, 191, 250, 30);
			iFilledRectangle(279, 195, lx, 23);
			lx += 3;
			if (lx >= 246){
				lx = 20;
				load = 0;
			}
		}

		//menu part
		if (load == 0) menu();

		//starting part
		if (one == 1) opening(), race_track();


	}
	
	if (cw == 200){
		if (chcx >= 287){
			chcx--;
			chcy--;
			chcw += 2;
			chch += 2;
		}
		if (chcx < 287){
			chcx = 290, chcy = 40, chcw = 250, chch = 30;
		}
	}
	mydelay(10);

}




void iMouseMove(int mx, int my)
{
	
}

void iMouse(int button, int state, int mx, int my) 
{

	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if (cw == 200 && (mx >= 295 && mx <= 530) && (my >= 40 && my <= 70))
		{
			one = 0;
			two = 0;
		}

		if (load == 0)
		{
			if((mx >= 50 && mx <=200) && (my >= 332 && my <= 400))
			{
				choice = 1;
			}
		}
		if (three == 11)
		{
			if ((mx >= 50 && mx <= 200) && (my >= 332 && my <= 400))
			{
				four=11;
			}
		}
    }
			
	if (button == GLUT_LEFT_BUTTON && state == GLUT_UP) 
	{

	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		one = 1;
		choice = 0;
	}
}

void iKeyboard(unsigned char key)
{

	if (key == 'a' || key == 'A' ) cx -= 15;
	if (key == 'd' || key == 'D') cx += 15;
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
	*/
void iSpecialKeyboard(unsigned char key)
{

	
}




int main() {
	
		
	iInitialize(ww, wh, "racing");
	
	
	return 0;
}