#include "iGraphics.h"
#define screenheight 650
#define screenwidth 1350
int x = 0;
int y = 0;
int dx = 0;
int dy = 0;
int a = 0;
int b = 0;
int c = 0;
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://

void iDraw()
{
	iClear();
	
	if (a == 0)
	{
		iShowBMP(725, 100, "Pac.bmp");
		//iShowBMP(600, 30, "highscore.bmp");
		//iShowBMP(345, 300, "NewGame.bmp");
		//iShowBMP(345, 250, "LoadGame.bmp");
		//iShowBMP(345, 200, "Settings.bmp");
		//iShowBMP(345, 150, "Credits.bmp");
		iShowBMP(365, 100, "menu.bmp");
		iShowBMP(475, 400, "Run.bmp");
		

	}

	else if (b == 1)
	{
		iShowBMP(0, 0, "credit.bmp");
		iShowBMP(750, 140, "hopp.bmp");
		iShowBMP(1180, 55, "back.bmp");
	}
	

}





/*function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/


void iMouseMove(int mx, int my)
{
	printf("iMouseMove----X : %d , Y :%d \n", mx, my);
}

void iPassiveMouseMove(int mx, int my)
{
	//printf("iPassiveMouseMove----X : %d , Y :%d \n", mx, my);

}

void iMouse(int button, int state, int mx, int my)
{
	
	if (a == 0)
	{
		if (mx >= 365 && mx <= 565 && my >= 148 && my <= 186)
		{
			b = 1;
			a = 1;
		}
		
		else if (mx>=365 && mx <= 565 && my >= 102 && my <= 136)
		{
			exit(0);
		}
		
		
	}
	
	if (b==1)
	{
		if (mx >= 1179 && mx <= 1274 && my >= 62 && my <= 148)
		{
			a=0;
		}
	}

	

	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		printf("iMouse -----X : %d , Y :%d \n", mx, my);
		
	}
	
	
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		printf("iMouse----X : %d , Y :%d \n", mx, my);
	}
}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/


void iKeyboard(unsigned char key)
{
	if (key == '\r')
	{
		
	}
	
	
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

	
	if (key == GLUT_KEY_RIGHT)
	{
				
	}
	if (key == GLUT_KEY_LEFT)
	{
		
	}
	
	if (key == GLUT_KEY_HOME)
	{
		
	}
	
}


int main()
{
	///srand((unsigned)time(NULL));
	iInitialize(screenwidth, screenheight, "Run For Your Life");
	///updated see the documentations
	iStart();
	return 0;
}