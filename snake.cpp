#include <iostream>
#include <conio.h>
#include <windows.h>
#include <direct.h>
#include <time.h>

#include "snake_helper.h"
using namespace std;

extern void gotoxy(int , int );
extern void setcursor(bool , DWORD );





int main()
{
    setcursor(0,0);
	srand((time(0))); // one time seed setting
    
    Snake snake;
    char op = 'l';
    do{
        if(kbhit())  // conio.h api, to check if user gave some input
			op = getch();
		
        switch(op){
			case 'w':
			case 'W':
				snake.TurnUp();
				break;
			
			case 's':
			case 'S':
				snake.TurnDown();
				break;
			
			case 'a':
			case 'A':
				snake.TurnLeft();
				break;
			
			case 'd':
			case 'D':
				snake.TurnRight();
				break;
		}
        
        snake.Move();

    }while(op!='e');


    return 0;
}