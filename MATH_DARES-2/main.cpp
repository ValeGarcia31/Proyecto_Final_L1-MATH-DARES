#include <iostream> 
#include <conio.h> 
#include <time.h>
#include <windows.h>
#include "juego.h"
#include "instrucciones.h"

using namespace std;

int main() {

    setcursor(0, 0);
    
    do{
		system("cls");
        
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 5);
	for (int i = 2; i < 112; i++){ //Diseño del marco 
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 2);
    	gotoxy(1+i, 1); cout<<"-";
    	gotoxy(2+i, 2); cout<<"*";
    	gotoxy(1+i, 25); cout<<"*";
    	gotoxy(2+i, 26); cout<<"-";
	} 
        SetConsoleTextAttribute(hConsole, 1);
		gotoxy(36,5); cout<<" -------------------------------- "; 
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(36,6); cout<<" |           MATH DARE            | ";  
		SetConsoleTextAttribute(hConsole, 1);
		gotoxy(36,7); cout<<" -------------------------------- ";
		SetConsoleTextAttribute(hConsole, 6);
		gotoxy(32,11); cout<<"1 - Inicia del Juego";
		SetConsoleTextAttribute(hConsole, 6);
		gotoxy(32,12); cout<<"2 - Instrucciones";	
		SetConsoleTextAttribute(hConsole, 6); 
		gotoxy(32,13); cout<<"3 - Salir";
		SetConsoleTextAttribute(hConsole, 6);
		gotoxy(32,16); cout<<"Ingrese una opcion: ";
		SetConsoleTextAttribute(hConsole, 7);
		char op = getche();
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n";
		
		if( op=='1'){
			Beep (1500, 700);
			juego();
		} 
		else if( op=='2') {
			Beep (800, 600);
			instrucciones();
		}
		else if( op=='3') {
			Beep (700, 200);
			exit(0);
		} Beep (300, 300);
		
	}while(1);
    
	return 0;
}
