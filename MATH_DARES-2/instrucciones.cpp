#include <iostream>
#include <windows.h> 
#include <conio.h> 
#include <time.h>
#include "juego.h"

using namespace std;

void instrucciones() {
	
	system("cls");
	
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 6);
	for (int i = 2; i < 112; i++){ //Diseño del marco 
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 6);
    	gotoxy(1+i, 1); cout<<"##"; 
    	gotoxy(2+i, 2); cout<<"--"; 
    	gotoxy(1+i, 25); cout<<"--";
    	gotoxy(2+i, 26); cout<<"##"; 
	} 
	
    SetConsoleTextAttribute(hConsole, 1);
	gotoxy (36, 6); cout<<"                  INSTRUCCIONES              ";
    SetConsoleTextAttribute(hConsole, 2);
	gotoxy (32, 9); cout<<"*------------------------------------------------------*";
	gotoxy (32, 10); cout<<"                                                       ";
    SetConsoleTextAttribute(hConsole, 4);
	gotoxy (32, 11); cout<<"1. Presione la tecla que corresponda al reto que desea";
	SetConsoleTextAttribute(hConsole, 1);
	gotoxy (32, 12); cout<<"2. Elija el nivel de dificultad que desee";
		SetConsoleTextAttribute(hConsole, 4);
	gotoxy (32, 13); cout<<"4. Una vez dentro de los retos escriba la respuesta que considere correcta ";
	SetConsoleTextAttribute(hConsole, 1);
	gotoxy (32, 14); cout<<"5. Presione 'p' o 'P' para pausar el juego ";
	SetConsoleTextAttribute(hConsole, 4);
	gotoxy (32, 15); cout<<"6. Presione 'Escape' o 'Esc'para salir del juego";
	SetConsoleTextAttribute(hConsole, 1);
	gotoxy (32, 16); cout<<"7. Presione cualquier tecla para dirigirse al menu";
	SetConsoleTextAttribute(hConsole, 4);
	getch();
}
