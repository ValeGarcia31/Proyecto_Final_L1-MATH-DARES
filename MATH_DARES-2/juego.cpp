#include <iostream> 
#include <conio.h> 
#include <time.h>
#include <windows.h>

using namespace std;

void juego ();	
void gotoxy(int x, int y);
void cuadro (int x1, int y1, int x2, int y2);

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void setcursor(bool visible, DWORD size){
    if (size == 0) {
        size = 20; // default cursor size Changing to numbers from 1 to 20, decreases cursor width
    }
    CONSOLE_CURSOR_INFO lpCursor;
    lpCursor.bVisible = visible;
    lpCursor.dwSize = size;
    SetConsoleCursorInfo(console, & lpCursor);
}

void cuadro (int x1, int y1, int x2, int y2)
{
	
		gotoxy (106,14 ); 
		
	int matriz [20][40] = {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,1,1,1,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};

 for (int i = 0; i < 20; i++)
    {
    	for (int j = 0; j < 40; j++)
    	{
    		if (matriz [i][j] == 1) cout<<char(219);
    		else
    		{
    			cout<<" ";
			}
		}
		
		cout<<endl;
	}
	
	int i;
	for (i = x1; i < x2; i++)
	{
		gotoxy (i, y1); cout<<"°"; //para la linea horizontal inferior
		gotoxy (i, y2); cout<<"°"; //para la linea horizontal superior
	}
	
	for (i = y1; i < y2; i++)
	{
		gotoxy (x1, i); cout<<"°"; //linea vertical izquierda
		gotoxy (x2, i); cout<<"°"; //linea vertical derecha
	}
	
		gotoxy (x1, y1); cout<<"°"; //esquinas de cuadro
		gotoxy (x1, y2); cout<<"°";
		gotoxy (x2, y2); cout<<"°";
		gotoxy (x2, y2); cout<<"°";
		
}

void cuadro1 (int x1, int y1, int x2, int y2)
{
	
	int i;
	for (i = x1; i < x2; i++)
	{
		gotoxy (i, y1); cout<<(char)177; //para la linea horizontal inferior
		gotoxy (i, y2); cout<<(char)177; //para la linea horizontal superior
	}
	
	for (i = y1; i < y2; i++)
	{
		gotoxy (x1, i); cout<<(char)177; //linea vertical izquierda
		gotoxy (x2, i); cout<<(char)177; //linea vertical derecha
	}
	
		gotoxy (x1, y1); cout<<(char)177; //esquinas de cuadro
		gotoxy (x1, y2); cout<<(char)177;
		gotoxy (x2, y2); cout<<(char)177;
		gotoxy (x2, y2); cout<<(char)177;
		
}

void cuadro3 (int x1, int y1, int x2, int y2)
{
	
		gotoxy (106,14 ); 
		
	int matriz [20][40] = {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,0,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,1,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,0,1,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};


 for (int i = 0; i < 20; i++)
    {
    	for (int j = 0; j < 40; j++)
    	{
    		if (matriz [i][j] == 1) cout<<char(219);
    		else
    		{
    			cout<<" ";
			}
		}
		
		cout<<endl;
	}
	
	int i;
	for (i = x1; i < x2; i++)
	{
		gotoxy (i, y1); cout<<"°"; //para la linea horizontal inferior
		gotoxy (i, y2); cout<<"°"; //para la linea horizontal superior
	}
	
	for (i = y1; i < y2; i++)
	{
		gotoxy (x1, i); cout<<"°"; //linea vertical izquierda
		gotoxy (x2, i); cout<<"°"; //linea vertical derecha
	}
	
		gotoxy (x1, y1); cout<<"°"; //esquinas de cuadro
		gotoxy (x1, y2); cout<<"°";
		gotoxy (x2, y2); cout<<"°";
		gotoxy (x2, y2); cout<<"°";
		
}


void juego() 
{	

	int dado1=0;
	int dado2=0;
	int dado3=0;
	int dado4 = 0;
	int ddd1 = 0;
	int ddd2 = 0;
	float div123 = 0;
	float resultado123 = 0;
	int puntos = 5;
	int j = 0;
	int acum = 0;
	int suma = 0;
	int resta = 0;
	int mult = 0;
	int div = 0;
	int resultado = 0;
	

	system ("cls");
	   
	   
	 system ("COLOR 1");
       cuadro (5, 6, 115, 35);
       
       HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(hConsole, 1);
	gotoxy (56, 8); cout<<"               TURNO DEL JUGADOR #1                     "; 
	SetConsoleTextAttribute(hConsole, 3); 
	gotoxy (56, 10); cout<<"                 ARITMETIC GAME                        ";
	SetConsoleTextAttribute(hConsole, 5);
	gotoxy (56, 11); cout<<"*******************************************************";
	SetConsoleTextAttribute(hConsole, 6);
	gotoxy (56, 12); cout<<"                                                       ";
	SetConsoleTextAttribute(hConsole, 6);
	gotoxy (56, 13);cout<<"                   1 - SUMA                             ";
	SetConsoleTextAttribute(hConsole, 6);
	gotoxy (56, 14);cout<<"                   2 - RESTA                            ";
	SetConsoleTextAttribute(hConsole, 6);
	gotoxy (56, 15);cout<<"                   3 - MULTIPLICACION                   ";
	SetConsoleTextAttribute(hConsole, 6);
	gotoxy (56, 16);cout<<"                   4 - DIVISION                         ";
	SetConsoleTextAttribute(hConsole, 6);
	gotoxy (56, 17);cout<<"                   5 - RETOS                            ";
	SetConsoleTextAttribute(hConsole, 6);
	gotoxy(56,20); cout<<"Ingrese una opcion: ";
	SetConsoleTextAttribute(hConsole, 7);
	char opc = getche();
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n";
	
	srand(time(NULL));
	
	if (opc=='1')
	{
	system ("cls");
			
				HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				
				 SetConsoleTextAttribute(hConsole, 1);		
			cuadro1 (5, 6, 115, 35);
	
   SetConsoleTextAttribute(hConsole, 1);
		gotoxy(36,9); cout<<" -------------------------------- "; 
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(36,10); cout<<" |         BIENVENIDO           | ";  
		SetConsoleTextAttribute(hConsole, 1);
		gotoxy(36,11); cout<<" -------------------------------- ";
		SetConsoleTextAttribute(hConsole, 4);
		gotoxy(32,13); cout<<"             NIVEL DE DIFICULTAD         ";
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(36,14); cout<<" -------------------------------- "; 
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy(36,15); cout<<" ******************************** ";
		SetConsoleTextAttribute(hConsole, 6);
		gotoxy(32,17); cout<<"      1 - FACIL";	
		SetConsoleTextAttribute(hConsole, 6); 
		gotoxy(32,18); cout<<"      2 - MEDIA";
		SetConsoleTextAttribute(hConsole, 6);
		gotoxy(32,19); cout<<"      3 - DIFICIL";
		SetConsoleTextAttribute(hConsole, 6);
		gotoxy(32,24); cout<<"INGRESE LA OPCION QUE DESEA: ";
		SetConsoleTextAttribute(hConsole, 7);
		char opc = getche();
		getch();
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n";
	
	switch(opc)
	{
		case '1':
			{
						system ("cls");
		
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
           SetConsoleTextAttribute(hConsole, 9);
		for (int i = 0; i <= 20; i++)
		{  
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (40, 2); cout<<"SECCION SUMA        ";
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(40,3); cout<<"------------- "; 
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (58, 2); cout<<" PUNTAJE:     "<<j;
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(58,3); cout<<" ---------------"; 


     	//Dado 1
			dado1 = rand() % 7 + 1;
			dado2 = rand() % 7 + 1;
			
			suma = dado1 + dado2;
			
			SetConsoleTextAttribute(hConsole, 9);
			gotoxy (37, 11);cout<<"CUAL ES EL RESULTADO DE LA SIGUIENTE SUMA: ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,13); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		//    gotoxy(32,16); cout<<" ******************************** ";
			gotoxy (56, 15);cout<<dado1 <<" + " << dado2<<"  ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,17); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		    gotoxy(35,18); cout<<" *******************************************";
		    SetConsoleTextAttribute(hConsole, 9);
		    gotoxy(45,22); cout<<"INGRESE SU RESPUESTA:  ";
		    SetConsoleTextAttribute(hConsole, 7);
			cin>>resultado;

				if (resultado == suma)
			{   
			   SetConsoleTextAttribute(hConsole, 5);
				gotoxy(45,25); cout<<"USTED GANO "<<puntos<<" PUNTOS ";
				j = puntos + j;
				getch();
			}
			else
			{
			  break;
			}
			
			system("cls");
			
        }  
			} break;
			
		case '2':
			{
										system ("cls");
		
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
           SetConsoleTextAttribute(hConsole, 9);
		for (int i = 0; i <= 20; i++)
		{  
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (40, 2); cout<<"SECCION SUMA        ";
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(40,3); cout<<"------------- "; 
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (58, 2); cout<<" PUNTAJE:     "<<j;
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(58,3); cout<<" ---------------"; 
		
     	//Dado 1
			dado1 = rand() % 50 + 1;
			dado2 = rand() % 50+ 1;
			dado3 = rand() % 50 + 1;
			
			suma = dado1 + dado2 + dado3;
			
			SetConsoleTextAttribute(hConsole, 9);
			gotoxy (37, 11);cout<<"CUAL ES EL RESULTADO DE LA SIGUIENTE SUMA: ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,13); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		//    gotoxy(32,16); cout<<" ******************************** ";
			gotoxy (52, 15);cout<<dado1 <<" + " << dado2<<" + "<<dado3<<"  ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,17); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		    gotoxy(35,18); cout<<" *******************************************";
		    gotoxy(45,22); cout<<"INGRESE SU RESPUESTA:  ";
			cin>>resultado;
				if (resultado == suma)
			{
				SetConsoleTextAttribute(hConsole, 5);
				gotoxy(45,25); cout<<"USTED GANO "<<puntos<<" PUNTOS ";
				j = puntos + j;
				getch();
			}
			else
			{
			  break;
			}
			
			system("cls");
			
        } 
			} break;
			
		case '3':
			{
										system ("cls");
		
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
           SetConsoleTextAttribute(hConsole, 9);
		for (int i = 0; i <= 20; i++)
		{  
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (40, 2); cout<<"SECCION SUMA        ";
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(40,3); cout<<"------------- "; 
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (58, 2); cout<<" PUNTAJE:     "<<j;
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(58,3); cout<<" ---------------"; 
		
     	//Dado 1
			dado1 = rand() % 100 + 1;
			dado2 = rand() % 100 + 1;
			dado3 = rand() % 100 + 1;
			dado4 = rand() % 100 + 1;
			
			suma = dado1 + dado2 + dado3 + dado4;
			
			SetConsoleTextAttribute(hConsole, 9);
            gotoxy (37, 11);cout<<"CUAL ES EL RESULTADO DE LA SIGUIENTE SUMA: ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,13); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		//    gotoxy(32,16); cout<<" ******************************** ";
			gotoxy (50, 15);cout<<dado1 <<" + " << dado2<<" + "<<dado3<<" + "<<dado4;
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,17); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		    gotoxy(35,18); cout<<" *******************************************";
		    gotoxy(45,22); cout<<"INGRESE SU RESPUESTA:  ";
			cin>>resultado;
			
				if (resultado == suma)
			{
				SetConsoleTextAttribute(hConsole, 5);
				gotoxy(45,25); cout<<"USTED GANO "<<puntos<<" PUNTOS ";
				j = puntos + j;
				getch();
			}
			else
			{
			  break;
			}
			
			system("cls");
			
        } 
			} break;
	}
	
	
	}
	
	if (opc=='2')
	{
		system ("cls");
					
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				
				 SetConsoleTextAttribute(hConsole, 1);		
			cuadro1 (5, 6, 115, 35);
	
   SetConsoleTextAttribute(hConsole, 1);
		gotoxy(36,9); cout<<" -------------------------------- "; 
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(36,10); cout<<" |         BIENVENIDO           | ";  
		SetConsoleTextAttribute(hConsole, 1);
		gotoxy(36,11); cout<<" -------------------------------- ";
		SetConsoleTextAttribute(hConsole, 4);
		gotoxy(32,13); cout<<"             NIVEL DE DIFICULTAD         ";
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(36,14); cout<<" -------------------------------- "; 
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy(36,15); cout<<" ******************************** ";
		SetConsoleTextAttribute(hConsole, 6);
		gotoxy(32,17); cout<<"      1 - FACIL";	
		SetConsoleTextAttribute(hConsole, 6); 
		gotoxy(32,18); cout<<"      2 - MEDIA";
		SetConsoleTextAttribute(hConsole, 6);
		gotoxy(32,19); cout<<"      3 - DIFICIL";
		SetConsoleTextAttribute(hConsole, 6);
		gotoxy(32,24); cout<<"INGRESE LA OPCION QUE DESEA: ";
		SetConsoleTextAttribute(hConsole, 7);
		char opc = getche();
		getch();
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n";
	
	switch(opc)
	{
		case '1':
			{
					system ("cls");
		
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
           SetConsoleTextAttribute(hConsole, 9);
		for (int i = 0; i <= 20; i++)
		{  
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (40, 2); cout<<"SECCION RESTA       ";
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(40,3); cout<<"------------- "; 
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (58, 2); cout<<" PUNTAJE:     "<<j;
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(58,3); cout<<" ---------------"; 
		
     	//Dado 1
			dado1 = rand() % 7 + 1;
			dado2 = rand() % 7 + 1;
			
			if(dado1 > dado2)
			{
							SetConsoleTextAttribute(hConsole, 9);
			gotoxy (37, 11);cout<<"CUAL ES EL RESULTADO DE LA SIGUIENTE RESTA: ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,13); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		//    gotoxy(32,16); cout<<" ******************************** ";
			gotoxy (56, 15);cout<<dado1 <<" - " << dado2<<"  ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,17); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		    gotoxy(35,18); cout<<" *******************************************";
		    gotoxy(45,22); cout<<"INGRESE SU RESPUESTA:  ";
			cin>>resultado;
			
			  resta = dado1 - dado2;	
			}
			else
			{
							SetConsoleTextAttribute(hConsole, 9);
			gotoxy (37, 11);cout<<"CUAL ES EL RESULTADO DE LA SIGUIENTE RESTA: ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,13); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		//    gotoxy(32,16); cout<<" ******************************** ";
			gotoxy (56, 15);cout<<dado2 <<" - " << dado1<<"  ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,17); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		    gotoxy(35,18); cout<<" *******************************************";
		    gotoxy(45,22); cout<<"INGRESE SU RESPUESTA:  ";
			cin>>resultado;
			
				resta = dado2 - dado1;
			}
				if (resultado == resta)
			{
				SetConsoleTextAttribute(hConsole, 5);
				gotoxy(45,25); cout<<"USTED GANO "<<puntos<<" PUNTOS ";
				j = puntos + j;
				getch(); 
			}
			else
			{
			  break;
			}
			
			system("cls");
			
        }   
			}break;
			
		case '2':
			{
		 		system ("cls");
		
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
           SetConsoleTextAttribute(hConsole, 9);
		for (int i = 0; i <= 20; i++)
		{  
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (40, 2); cout<<"SECCION RESTA       ";
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(40,3); cout<<"------------- "; 
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (58, 2); cout<<" PUNTAJE:     "<<j;
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(58,3); cout<<" ---------------"; 
		
     	//Dado 1
			dado1 = rand() % 50 + 1;
			dado2 = rand() % 50 + 1;
			
			if(dado1 > dado2)
			{
							SetConsoleTextAttribute(hConsole, 9);
		gotoxy (37, 11);cout<<"CUAL ES EL RESULTADO DE LA SIGUIENTE RESTA: ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,13); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		//    gotoxy(32,16); cout<<" ******************************** ";
			gotoxy (56, 15);cout<<dado1 <<" - " << dado2<<"  ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,17); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		    gotoxy(35,18); cout<<" *******************************************";
		    gotoxy(45,22); cout<<"INGRESE SU RESPUESTA:  ";
			cin>>resultado;
			
			  resta = dado1 - dado2;	
			}
			else
			{
						SetConsoleTextAttribute(hConsole, 9);	
			gotoxy (37, 11);cout<<"CUAL ES EL RESULTADO DE LA SIGUIENTE RESTA: ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,13); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		//    gotoxy(32,16); cout<<" ******************************** ";
			gotoxy (56, 15);cout<<dado2 <<" - " << dado1<<"  ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,17); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		    gotoxy(35,18); cout<<" *******************************************";
		    gotoxy(45,22); cout<<"INGRESE SU RESPUESTA:  ";
			cin>>resultado;
			
				resta = dado2 - dado1;
			}
				if (resultado == resta)
			{
				SetConsoleTextAttribute(hConsole, 5);
				gotoxy(45,25); cout<<"USTED GANO "<<puntos<<" PUNTOS ";
				j = puntos + j;
				getch();
			}
			else
			{
			  break;
			}
			
			system("cls");
			
        }   
			}break;
			
		case '3':
			{
					system ("cls");
		
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
           SetConsoleTextAttribute(hConsole, 9);
		for (int i = 0; i <= 20; i++)
		{  
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (40, 2); cout<<"SECCION RESTA       ";
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(40,3); cout<<"------------- "; 
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (58, 2); cout<<" PUNTAJE:     "<<j;
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(58,3); cout<<" ---------------"; 
		
     	//Dado 1
			dado1 = rand() % 100 + 1;
			dado2 = rand() % 100 + 1;
			
			if(dado1 > dado2)
			{
						SetConsoleTextAttribute(hConsole, 9);
		gotoxy (37, 11);cout<<"CUAL ES EL RESULTADO DE LA SIGUIENTE RESTA: ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,13); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		//    gotoxy(32,16); cout<<" ******************************** ";
			gotoxy (56, 15);cout<<dado1 <<" - " << dado2<<"  ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,17); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		    gotoxy(35,18); cout<<" *******************************************";
		    gotoxy(45,22); cout<<"INGRESE SU RESPUESTA:  ";
			cin>>resultado;
			
			  resta = dado1 - dado2;	
			}
			else
			{
				SetConsoleTextAttribute(hConsole, 9);
			gotoxy (37, 11);cout<<"CUAL ES EL RESULTADO DE LA SIGUIENTE RESTA: ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,13); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		//    gotoxy(32,16); cout<<" ******************************** ";
			gotoxy (56, 15);cout<<dado2 <<" - " << dado1<<"  ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,17); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		    gotoxy(35,18); cout<<" *******************************************";
		    gotoxy(45,22); cout<<"INGRESE SU RESPUESTA:  ";
			cin>>resultado;
			
				resta = dado2 - dado1;
			}
				if (resultado == resta)
			{
				SetConsoleTextAttribute(hConsole, 5);
				gotoxy(45,25); cout<<"USTED GANO "<<puntos<<" PUNTOS ";
				j = puntos + j;
				getch();
			}
			else
			{
			  break;
			}
			
			system("cls");
			
        }   
			}break;
	}
	
	
	}
	
		if (opc=='3')
	{
					system ("cls");
					
			HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				
				 SetConsoleTextAttribute(hConsole, 1);		
			cuadro1 (5, 6, 115, 35);
	
   SetConsoleTextAttribute(hConsole, 1);
		gotoxy(36,9); cout<<" -------------------------------- "; 
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(36,10); cout<<" |         BIENVENIDO           | ";  
		SetConsoleTextAttribute(hConsole, 1);
		gotoxy(36,11); cout<<" -------------------------------- ";
		SetConsoleTextAttribute(hConsole, 4);
		gotoxy(32,13); cout<<"             NIVEL DE DIFICULTAD         ";
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(36,14); cout<<" -------------------------------- "; 
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy(36,15); cout<<" ******************************** ";
		SetConsoleTextAttribute(hConsole, 6);
		gotoxy(32,17); cout<<"      1 - FACIL";	
		SetConsoleTextAttribute(hConsole, 6); 
		gotoxy(32,18); cout<<"      2 - MEDIA";
		SetConsoleTextAttribute(hConsole, 6);
		gotoxy(32,19); cout<<"      3 - DIFICIL";
		SetConsoleTextAttribute(hConsole, 6);
		gotoxy(32,24); cout<<"INGRESE LA OPCION QUE DESEA: ";
		SetConsoleTextAttribute(hConsole, 7);
		char opc = getche();
		getch();
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n";
	switch(opc)
	{
		case '1':
			{
				system ("cls");
		
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
           SetConsoleTextAttribute(hConsole, 9);
		for (int i = 0; i <= 20; i++)
		{  
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (32, 2); cout<<"SECCION MULTIPLICACION ";
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(32,3); cout<<"----------------------- "; 
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (58, 2); cout<<" PUNTAJE:     "<<j;
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(58,3); cout<<" ---------------"; 
		
     	//Dado 1
			dado1 = rand() % 12 + 1;
			dado2 = rand() % 12 + 1;
			
			SetConsoleTextAttribute(hConsole, 9);
			gotoxy (34, 11);cout<<"CUAL ES EL RESULTADO DE LA SIGUIENTE MULTIPLICACION: ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(34,13); cout<<"----------------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		//    gotoxy(32,16); cout<<" ******************************** ";
			gotoxy (56, 15);cout<<dado1 <<" x " << dado2<<"  ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,17); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		    gotoxy(35,18); cout<<" *******************************************";
		    gotoxy(45,22); cout<<"INGRESE SU RESPUESTA:  ";
			cin>>resultado;
			
			  mult = dado1 * dado2;	
		
				if (resultado == mult)
			{
				SetConsoleTextAttribute(hConsole, 5);
				gotoxy(45,25); cout<<"USTED GANO "<<puntos<<" PUNTOS ";
				j = puntos + j;
				getch();
			}
			else
			{
			  break;
			}
			
			system("cls");
			
        } 
			}break;
			
		case '2':
			{
				system ("cls");
		
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
           SetConsoleTextAttribute(hConsole, 9);
		for (int i = 0; i <= 20; i++)
		{  
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (32, 2); cout<<"SECCION MULTIPLICACION ";
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(32,3); cout<<"----------------------- "; 
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (58, 2); cout<<" PUNTAJE:     "<<j;
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(58,3); cout<<" ---------------"; 
		
     	//Dado 1
			dado1 = rand() % 52 + 1;
			dado2 = rand() % 52 + 1;
			
			SetConsoleTextAttribute(hConsole, 9);
			gotoxy (34, 11);cout<<"CUAL ES EL RESULTADO DE LA SIGUIENTE MULTIPLICACION: ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(34,13); cout<<"----------------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		//    gotoxy(32,16); cout<<" ******************************** ";
			gotoxy (56, 15);cout<<dado1 <<" x " << dado2<<"  ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,17); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		    gotoxy(35,18); cout<<" *******************************************";
		    gotoxy(45,22); cout<<"INGRESE SU RESPUESTA:  ";
			cin>>resultado;
			
			  mult = dado1 * dado2;	
		
				if (resultado == mult)
			{ SetConsoleTextAttribute(hConsole, 5);
				gotoxy(45,25); cout<<"USTED GANO "<<puntos<<" PUNTOS ";
				j = puntos + j;
				getch();
			}
			else
			{
			  break;
			}
			
			system("cls");
			
        } 
			}break;
		
		case '3':
			{
				system ("cls");
		
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
           SetConsoleTextAttribute(hConsole, 9);
		for (int i = 0; i <= 20; i++)
		{  
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (32, 2); cout<<"SECCION MULTIPLICACION ";
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(32,3); cout<<"----------------------- "; 
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (58, 2); cout<<" PUNTAJE:     "<<j;
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(58,3); cout<<" ---------------"; 
		
     	//Dado 1
			dado1 = rand() % 100 + 1;
			dado2 = rand() % 100 + 1;
			
			SetConsoleTextAttribute(hConsole, 9);
			gotoxy (34, 11);cout<<"CUAL ES EL RESULTADO DE LA SIGUIENTE MULTIPLICACION: ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(34,13); cout<<"----------------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		//    gotoxy(32,16); cout<<" ******************************** ";
			gotoxy (56, 15);cout<<dado1 <<" x " << dado2<<"  ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,17); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		    gotoxy(35,18); cout<<" *******************************************";
		    gotoxy(45,22); cout<<"INGRESE SU RESPUESTA:  ";
			cin>>resultado;
			
			  mult = dado1 * dado2;	
		
				if (resultado == mult)
			{
				SetConsoleTextAttribute(hConsole, 5);
				gotoxy(45,25); cout<<"USTED GANO "<<puntos<<" PUNTOS ";
				j = puntos + j;
				getch();
			}
			else
			{
			  break;
			}
			
			system("cls");
			
        } 
			}break;
	}
	
	
	}
	
	if (opc=='4')
	{
			system ("cls");
			
				HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				
				 SetConsoleTextAttribute(hConsole, 1);		
			cuadro1 (5, 6, 115, 35);
	
   SetConsoleTextAttribute(hConsole, 1);
		gotoxy(36,9); cout<<" -------------------------------- "; 
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(36,10); cout<<" |         BIENVENIDO           | ";  
		SetConsoleTextAttribute(hConsole, 1);
		gotoxy(36,11); cout<<" -------------------------------- ";
		SetConsoleTextAttribute(hConsole, 4);
		gotoxy(32,13); cout<<"             NIVEL DE DIFICULTAD         ";
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(36,14); cout<<" -------------------------------- "; 
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy(36,15); cout<<" ******************************** ";
		SetConsoleTextAttribute(hConsole, 6);
		gotoxy(32,17); cout<<"      1 - FACIL";	
		SetConsoleTextAttribute(hConsole, 6); 
		gotoxy(32,18); cout<<"      2 - MEDIA";
		SetConsoleTextAttribute(hConsole, 6);
		gotoxy(32,19); cout<<"      3 - DIFICIL";
		SetConsoleTextAttribute(hConsole, 6);
		gotoxy(32,24); cout<<"INGRESE LA OPCION QUE DESEA: ";
		SetConsoleTextAttribute(hConsole, 7);
		char opc = getche();
		getch();
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n";
		
		switch(opc)
		{
			case '1':
				{
					int result1 = 0;
		int divi = 0;
		
			system ("cls");
		
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
           SetConsoleTextAttribute(hConsole, 9);
		
      for(int i = 0; i <=1; i++)
      {
      	SetConsoleTextAttribute(hConsole, 9);
      			gotoxy (32, 2); cout<<"SECCION DIVISION ";
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(32,3); cout<<"----------------------- "; 
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (58, 2); cout<<" PUNTAJE:     "<<j;
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(58,3); cout<<" ---------------";
		
		SetConsoleTextAttribute(hConsole, 9);
			gotoxy (34, 11);cout<<"CUAL ES EL RESULTADO DE LA SIGUIENTE DIVISION: ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(34,13); cout<<"----------------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		//    gotoxy(32,16); cout<<" ******************************** ";
			gotoxy (56, 15);cout<<"12 / 6 ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,17); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		    gotoxy(35,18); cout<<" *******************************************";
		    gotoxy(45,22); cout<<"INGRESE SU RESPUESTA:  ";
              cin>>result1;
       
            divi = 12 / 6;
       
       if(result1==divi)
       {
       	SetConsoleTextAttribute(hConsole, 5);
				gotoxy(45,25); cout<<"USTED GANO "<<puntos<<" PUNTOS ";
				j = puntos + j;
				getch();
	   }
       else
       {
       	break;
	   } 
	   system("cls");
       
        SetConsoleTextAttribute(hConsole, 9);
      			gotoxy (32, 2); cout<<"SECCION DIVISION ";
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(32,3); cout<<"----------------------- "; 
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (58, 2); cout<<" PUNTAJE:     "<<j;
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(58,3); cout<<" ---------------";
		
		SetConsoleTextAttribute(hConsole, 9);
			gotoxy (34, 11);cout<<"CUAL ES EL RESULTADO DE LA SIGUIENTE DIVISION: ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(34,13); cout<<"----------------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		//    gotoxy(32,16); cout<<" ******************************** ";
			gotoxy (56, 15);cout<<"20 / 2 ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,17); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		    gotoxy(35,18); cout<<" *******************************************";
		    gotoxy(45,22); cout<<"INGRESE SU RESPUESTA:  ";
              cin>>result1;
       
            divi = 20 / 2;
       
       if(result1==divi)
       {
       	SetConsoleTextAttribute(hConsole, 5);
				gotoxy(45,25); cout<<"USTED GANO "<<puntos<<" PUNTOS ";
				j = puntos + j;
				getch();
	   }
       else
       {
       	break;
	   } 
	   system("cls");
       
       SetConsoleTextAttribute(hConsole, 9);
      			gotoxy (32, 2); cout<<"SECCION DIVISION ";
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(32,3); cout<<"----------------------- "; 
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (58, 2); cout<<" PUNTAJE:     "<<j;
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(58,3); cout<<" ---------------";
		
		SetConsoleTextAttribute(hConsole, 9);
			gotoxy (34, 11);cout<<"CUAL ES EL RESULTADO DE LA SIGUIENTE DIVISION: ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(34,13); cout<<"----------------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		//    gotoxy(32,16); cout<<" ******************************** ";
			gotoxy (56, 15);cout<<"15 / 5 ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,17); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		    gotoxy(35,18); cout<<" *******************************************";
		    gotoxy(45,22); cout<<"INGRESE SU RESPUESTA:  ";
              cin>>result1;
       
            divi = 15 / 5;
       
       if(result1==divi)
       { SetConsoleTextAttribute(hConsole, 5);
				gotoxy(45,25); cout<<"USTED GANO "<<puntos<<" PUNTOS ";
				j = puntos + j;
				getch();
	   }
       else
       {
       	break;
	   } 
	   system("cls");
	   break;
	  }
				} break;
				
			case '2':
				{
					int result1 = 0;
		int divi = 0;
		
			system ("cls");
		
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
           SetConsoleTextAttribute(hConsole, 9);
		
      for(int i = 0; i <=1; i++)
      {
      	SetConsoleTextAttribute(hConsole, 9);
      			gotoxy (32, 2); cout<<"SECCION DIVISION ";
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(32,3); cout<<"----------------------- "; 
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (58, 2); cout<<" PUNTAJE:     "<<j;
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(58,3); cout<<" ---------------";
		
		SetConsoleTextAttribute(hConsole, 9);
			gotoxy (34, 11);cout<<"CUAL ES EL RESULTADO DE LA SIGUIENTE DIVISION: ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(34,13); cout<<"----------------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		//    gotoxy(32,16); cout<<" ******************************** ";
			gotoxy (56, 15);cout<<"81 / 3 ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,17); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		    gotoxy(35,18); cout<<" *******************************************";
		    gotoxy(45,22); cout<<"INGRESE SU RESPUESTA:  ";
              cin>>result1;
       
            divi = 81 / 3;
       
       if(result1==divi)
       {
       	SetConsoleTextAttribute(hConsole, 5);
				gotoxy(45,25); cout<<"USTED GANO "<<puntos<<" PUNTOS ";
				j = puntos + j;
				getch();
	   }
       else
       {
       	break;
	   } 
	   system("cls");
       
        SetConsoleTextAttribute(hConsole, 9);
      			gotoxy (32, 2); cout<<"SECCION DIVISION ";
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(32,3); cout<<"----------------------- "; 
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (58, 2); cout<<" PUNTAJE:     "<<j;
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(58,3); cout<<" ---------------";
		
		SetConsoleTextAttribute(hConsole, 9);
			gotoxy (34, 11);cout<<"CUAL ES EL RESULTADO DE LA SIGUIENTE DIVISION: ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(34,13); cout<<"----------------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		//    gotoxy(32,16); cout<<" ******************************** ";
			gotoxy (56, 15);cout<<"144 / 12 ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,17); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		    gotoxy(35,18); cout<<" *******************************************";
		    gotoxy(45,22); cout<<"INGRESE SU RESPUESTA:  ";
              cin>>result1;
       
            divi = 144 / 12;
       
       if(result1==divi)
       {
       	SetConsoleTextAttribute(hConsole, 5);
				gotoxy(45,25); cout<<"USTED GANO "<<puntos<<" PUNTOS ";
				j = puntos + j;
				getch();
	   }
       else
       {
       	break;
	   } 
	   system("cls");
       
       SetConsoleTextAttribute(hConsole, 9);
      			gotoxy (32, 2); cout<<"SECCION DIVISION ";
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(32,3); cout<<"----------------------- "; 
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (58, 2); cout<<" PUNTAJE:     "<<j;
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(58,3); cout<<" ---------------";
		
		SetConsoleTextAttribute(hConsole, 9);
			gotoxy (34, 11);cout<<"CUAL ES EL RESULTADO DE LA SIGUIENTE DIVISION: ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(34,13); cout<<"----------------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		//    gotoxy(32,16); cout<<" ******************************** ";
			gotoxy (56, 15);cout<<"56 / 8 ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,17); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		    gotoxy(35,18); cout<<" *******************************************";
		    gotoxy(45,22); cout<<"INGRESE SU RESPUESTA:  ";
              cin>>result1;
       
            divi = 58 / 8;
       
       if(result1==divi)
       {
       	SetConsoleTextAttribute(hConsole, 5);
				gotoxy(45,25); cout<<"USTED GANO "<<puntos<<" PUNTOS ";
				j = puntos + j;
				getch();
	   }
       else
       {
       	break;
	   } 
	   system("cls");
	   break;
	  }				
				} break;
				
		case '3':
			{
					int result1 = 0;
		int divi = 0;
		
			system ("cls");
		
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
           SetConsoleTextAttribute(hConsole, 9);
		
      for(int i = 0; i <=1; i++)
      {
      	SetConsoleTextAttribute(hConsole, 9);
      			gotoxy (32, 2); cout<<"SECCION DIVISION ";
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(32,3); cout<<"----------------------- "; 
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (58, 2); cout<<" PUNTAJE:     "<<j;
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(58,3); cout<<" ---------------";
		
		SetConsoleTextAttribute(hConsole, 9);
			gotoxy (34, 11);cout<<"CUAL ES EL RESULTADO DE LA SIGUIENTE DIVISION: ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(34,13); cout<<"----------------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		//    gotoxy(32,16); cout<<" ******************************** ";
			gotoxy (56, 15);cout<<"124 / 4 ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,17); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		    gotoxy(35,18); cout<<" *******************************************";
		    gotoxy(45,22); cout<<"INGRESE SU RESPUESTA:  ";
              cin>>result1;
       
            divi = 124 / 4;
       
       if(result1==divi)
       {
       	SetConsoleTextAttribute(hConsole, 5);
				gotoxy(45,25); cout<<"USTED GANO "<<puntos<<" PUNTOS ";
				j = puntos + j;
				getch();
	   }
       else
       {
       	break;
	   } 
	   system("cls");
       
        SetConsoleTextAttribute(hConsole, 9);
      			gotoxy (32, 2); cout<<"SECCION DIVISION ";
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(32,3); cout<<"----------------------- "; 
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (58, 2); cout<<" PUNTAJE:     "<<j;
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(58,3); cout<<" ---------------";
		
		SetConsoleTextAttribute(hConsole, 9);
			gotoxy (34, 11);cout<<"CUAL ES EL RESULTADO DE LA SIGUIENTE DIVISION: ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(34,13); cout<<"----------------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		//    gotoxy(32,16); cout<<" ******************************** ";
			gotoxy (56, 15);cout<<"1666 / 2 ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,17); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		    gotoxy(35,18); cout<<" *******************************************";
		    gotoxy(45,22); cout<<"INGRESE SU RESPUESTA:  ";
              cin>>result1;
       
            divi = 1666 / 2;
       
       if(result1==divi)
       {
       	SetConsoleTextAttribute(hConsole, 5);
				gotoxy(45,25); cout<<"USTED GANO "<<puntos<<" PUNTOS ";
				j = puntos + j;
				getch();
	   }
       else
       {
       	break;
	   } 
	   system("cls");
       
       SetConsoleTextAttribute(hConsole, 9);
      			gotoxy (32, 2); cout<<"SECCION DIVISION ";
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(32,3); cout<<"----------------------- "; 
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (58, 2); cout<<" PUNTAJE:     "<<j;
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(58,3); cout<<" ---------------";
		
		SetConsoleTextAttribute(hConsole, 9);
			gotoxy (34, 11);cout<<"CUAL ES EL RESULTADO DE LA SIGUIENTE DIVISION: ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(34,13); cout<<"----------------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		//    gotoxy(32,16); cout<<" ******************************** ";
			gotoxy (56, 15);cout<<"1550 / 5 ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,17); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		    gotoxy(35,18); cout<<" *******************************************";
		    gotoxy(45,22); cout<<"INGRESE SU RESPUESTA:  ";
              cin>>result1;
       
            divi = 1550 / 5;
       
       if(result1==divi)
       {
       	SetConsoleTextAttribute(hConsole, 5);
				gotoxy(45,25); cout<<"USTED GANO "<<puntos<<" PUNTOS ";
				j = puntos + j;
				getch();
	   }
       else
       {
       	break;
	   } 
	   system("cls");
	   break;
	  }
			} break;
		} 
			
	}
	
	if(opc=='5')
	{
			int result = 0;
	int puntos = 5;
	int p = 0;
	int acum = 0;
	int suma = 0;
	int resta = 0;
	int mult = 0;
	int div = 0;
	char resultado = 0;
	

	system ("cls");
	
			for (int i = 2; i < 112; i++){ //Diseño del marco 
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 2);
    	gotoxy(1+i, 1); cout<<" ";
    	gotoxy(2+i, 2); cout<<"*";
    	gotoxy(1+i, 25); cout<<" ";
    	gotoxy(2+i, 26); cout<<"*";
	} 
	   
	 
	 		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
           SetConsoleTextAttribute(hConsole, 3);
	 
	 gotoxy(106,5);	 int matriz [20][40] = {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,0,0,0,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,1,1,1,1,1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1,1,1,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};
	
	
    for (int i = 0; i < 20; i++)
    {
    	for (int j = 0; j < 40; j++)
    	{
    		if (matriz [i][j] == 1) cout<<char(219);
    		else
    		{
    			cout<<" ";
			}
		}
		
		cout<<endl;
	}
     
     	
           SetConsoleTextAttribute(hConsole, 4);
	gotoxy (56, 9); cout<<"               RETOS MATEMATICOS                     ";  
	 SetConsoleTextAttribute(hConsole, 5);
	gotoxy (56, 10); cout<<"-------------------------------------------------------";
	 SetConsoleTextAttribute(hConsole, 1);
	gotoxy (56, 11); cout<<"*******************************************************";
	 SetConsoleTextAttribute(hConsole, 6);
	gotoxy (56, 12); cout<<"                                                       ";
	 SetConsoleTextAttribute(hConsole, 6);
	gotoxy (50, 13);cout<<"                   1 - QUIZ                             ";
	 SetConsoleTextAttribute(hConsole, 6);
	gotoxy (50, 14);cout<<"                   2 - OPERACIONES COMBINADAS                            ";
	 SetConsoleTextAttribute(hConsole, 6);
	gotoxy (50, 15);cout<<"                   3 - ADIVINA EL VALOR DE LA OPERACION                   ";
	 SetConsoleTextAttribute(hConsole, 6);
	gotoxy(55,20); cout<<"Ingrese una opcion: ";
	 SetConsoleTextAttribute(hConsole, 7);
	char opc = getche();
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n";
	
	srand(time(NULL));
	
	if (opc=='1')
	{
		system ("cls");
		
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
           SetConsoleTextAttribute(hConsole, 9);
		for (int i = 0; i <= 1; i++)
		{  
		
						for (int i = 2; i < 112; i++){ //Diseño del marco 
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 4);
    	gotoxy(1+i, 1); cout<<" ";
    	gotoxy(2+i, 2); cout<<"°";
    	gotoxy(1+i, 25); cout<<" ";
    	gotoxy(2+i, 26); cout<<"°";
	} 
        SetConsoleTextAttribute(hConsole, 3);	
		gotoxy (40, 4); cout<<" QUIZ ";
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy (40, 5); cout<<"-------";
		SetConsoleTextAttribute(hConsole, 3);
     	gotoxy (50, 4); cout<<" PUNTAJE: "<<j;
     	SetConsoleTextAttribute(hConsole, 5);
     	gotoxy (50, 5); cout<<"------------";
			
			SetConsoleTextAttribute(hConsole, 2);
			gotoxy (21, 11);cout<<"UNA TETERA ESTA EN OFERTA DE 80% DE SU PRECIO NORMAL. EL PRECIO DE OFERTA ES DE L. 40 ";
			SetConsoleTextAttribute(hConsole, 2);
			gotoxy (32, 13);cout<<"CUAL ES EL PRECIO NORMAL ? ";
			SetConsoleTextAttribute(hConsole, 6);
			gotoxy (32, 15);cout<<"a) EL PRECIO NORMAL DE LA TETERA ES DE L. 50 ";
			SetConsoleTextAttribute(hConsole, 6);
			gotoxy (32, 16);cout<<"b) EL PRECIO NORMAL DE LA TETERA ES DE L. 40 ";
			SetConsoleTextAttribute(hConsole, 6);
			gotoxy (32, 19);cout<<"INGRESE SU RESPUESTA: ";
			SetConsoleTextAttribute(hConsole, 7);
			cin>>resultado;
			
				if (resultado == 'a')
			{
				SetConsoleTextAttribute(hConsole, 2);
				gotoxy(32,21); cout<<"SU RESPUESTA ES CORRECTA. USTED GANO "<<puntos<<" PUNTOS ";
				j = puntos + j;
				getch();
			}
			else
			{
			  break;
			}
			
			system ("cls");         
			
									for (int i = 2; i < 112; i++){ //Diseño del marco 
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 4);
    	gotoxy(1+i, 1); cout<<" ";
    	gotoxy(2+i, 2); cout<<"°";
    	gotoxy(1+i, 25); cout<<" ";
    	gotoxy(2+i, 26); cout<<"°";
	} 
        
        SetConsoleTextAttribute(hConsole, 3);
            gotoxy (40, 4); cout<<" QUIZ ";
            SetConsoleTextAttribute(hConsole, 5);
            gotoxy (40, 5); cout<<"-------";
            SetConsoleTextAttribute(hConsole, 3);
         	gotoxy (50, 4); cout<<" PUNTAJE: "<<j;
         	SetConsoleTextAttribute(hConsole, 5);
         	gotoxy (50, 5); cout<<"-----------";
         	
         	SetConsoleTextAttribute(hConsole, 2);
        	gotoxy (21, 11);cout<<"UNA CHAQUETA QUE SE VENDE EN L. 45 ESTA EN OFERTA A 2/3 DE SU PRECIO REGULAR ";
        	SetConsoleTextAttribute(hConsole, 2);
			gotoxy(32, 13); cout<<"CUAL ES EL PRECIO DE OFERTA ?";
			SetConsoleTextAttribute(hConsole, 6);
			gotoxy (32, 15);cout<<"a) EL PRECIO DE OFERTA ES DE L. 25";
			SetConsoleTextAttribute(hConsole, 6);
			gotoxy (32, 16);cout<<"b) EL PRECIO DE OFERTA ES DE L. 30 ";
			SetConsoleTextAttribute(hConsole, 6);
			gotoxy (32, 18);cout<<"INGRESE SU RESPUESTA: ";
			SetConsoleTextAttribute(hConsole, 7);
			cin>>resultado;
			
				if (resultado == 'b')
			{
				SetConsoleTextAttribute(hConsole, 2);
				gotoxy(32,21); cout<<"SU RESPUESTA ES CORRECTA. USTED GANO "<<puntos<<" PUNTOS ";
				j = puntos + j;
				getch();
			}
			else
			{
			  break;
			}
			
			system("cls");
			
									for (int i = 2; i < 112; i++){ //Diseño del marco 
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 4);
    	gotoxy(1+i, 1); cout<<" ";
    	gotoxy(2+i, 2); cout<<"-";
    	gotoxy(1+i, 25); cout<<" ";
    	gotoxy(2+i, 30); cout<<"-";
	} 
			SetConsoleTextAttribute(hConsole, 3);
			gotoxy (40, 4); cout<<" QUIZ ";
			SetConsoleTextAttribute(hConsole, 5);
			gotoxy (40, 5); cout<<"------";
			SetConsoleTextAttribute(hConsole, 3);
     	    gotoxy (50, 4); cout<<" PUNTAJE: "<<j;
     	    SetConsoleTextAttribute(hConsole, 5);
     	    gotoxy (50, 5); cout<<"------------";
			
			gotoxy (50, 9); cout<<"                                                         ";
			 	    
			 	    SetConsoleTextAttribute(hConsole, 3);
     	    int mattri [20][40] = {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};
	
	
	
    for (int i = 0; i < 20; i++)
    {
    	for (int j = 0; j < 40; j++)
    	{
    		if (mattri [i][j] == 1) cout<<char(219);
    		else
    		{
    			cout<<" ";
			}
		}
		
		cout<<endl;
	}
			
			SetConsoleTextAttribute(hConsole, 2);
			gotoxy (46, 11);cout<<"LA CANTIDAD MOSTRADA EN LA FIGURA PUEDE REPRESENTARSE: ";
			SetConsoleTextAttribute(hConsole, 6);
			gotoxy (46, 12);cout<<"a) 4/1 ";
			SetConsoleTextAttribute(hConsole, 6);
			gotoxy (46, 13);cout<<"b) 1/4";
			SetConsoleTextAttribute(hConsole, 6);
			gotoxy (46, 15);cout<<"INGRESE SU RESPUESTA: ";
			SetConsoleTextAttribute(hConsole, 7);
			cin>>resultado;
			
				if (resultado == 'b')
			{
				SetConsoleTextAttribute(hConsole, 4);
				gotoxy(46,17); cout<<"SU RESPUESTA ES CORRECTA. USTED GANO "<<puntos<<" PUNTOS ";
				j = puntos + j;
				getch();
			}
			else
			{
			  break;
			}
			
			SetConsoleTextAttribute(hConsole, 2);
			gotoxy (46, 19);cout<<"DE QUE OTRA FORMA PUEDE REPRESENTARSE LA FIGURA?";
			SetConsoleTextAttribute(hConsole, 6);
			gotoxy (46, 20);cout<<"a) 24% = 0.24";
			SetConsoleTextAttribute(hConsole, 6);
			gotoxy (46, 21);cout<<"b) 23% = 0.23";
			SetConsoleTextAttribute(hConsole,6);
			gotoxy (46, 22);cout<<"c) 25% = 0.25";
			SetConsoleTextAttribute(hConsole, 6);
			gotoxy (46, 24);cout<<"INGRESE SU RESPUESTA: ";
			SetConsoleTextAttribute(hConsole, 7);
			cin>>resultado;
			
				if (resultado == 'c')
			{
				SetConsoleTextAttribute(hConsole, 4);
				gotoxy(46,26); cout<<"SU RESPUESTA ES CORRECTA. USTED GANO "<<puntos<<" PUNTOS ";
				j = puntos + j;
				getch();
			}
			else
			{
				system ("cls");
					SetConsoleTextAttribute(hConsole, 6);
		gotoxy (50, 10); cout<<"                                                 ";
		
			SetConsoleTextAttribute(hConsole, 3);
	int matriz [20][40] = {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,1,0,0,0,0,0,1,1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,0,0,0,0,0,1,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,0,0,0,0,0,1,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};
	
	
	
    for (int i = 0; i < 20; i++)
    {
    	for (int j = 0; j < 40; j++)
    	{
    		if (matriz [i][j] == 1) cout<<char(219);
    		else
    		{
    			cout<<" ";
			}
		}
		
		cout<<endl;
	}
	
		SetConsoleTextAttribute(hConsole, 6);
		gotoxy (50, 10); cout<<"EL JUGADOR #1 HA FINALIZADO EL RETO :) ";
		SetConsoleTextAttribute(hConsole, 2);
      	gotoxy (50, 11); cout<<"*************************************************** ";
      	SetConsoleTextAttribute(hConsole, 4);
      	gotoxy (50, 12); cout<<"--------------------------------------------------- ";
      	SetConsoleTextAttribute(hConsole, 6);
      	gotoxy (50, 14); cout<<"                 PUNTAJE:  "<<j;
      	SetConsoleTextAttribute(hConsole, 2);
    	gotoxy (50, 16); cout<<"*************************************************** ";
    	SetConsoleTextAttribute(hConsole, 4);
      	gotoxy (50, 17); cout<<"--------------------------------------------------- ";
	
	getch();
			  break;
			}
			
			system("cls");
			
			SetConsoleTextAttribute(hConsole, 6);
		gotoxy (50, 10); cout<<"                                            ";

	
	SetConsoleTextAttribute(hConsole, 3);
	int matriz [20][40] = {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,1,0,0,0,0,0,1,1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,0,0,0,0,0,1,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,0,0,0,0,0,1,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};
	
	
	
    for (int i = 0; i < 20; i++)
    {
    	for (int j = 0; j < 40; j++)
    	{
    		if (matriz [i][j] == 1) cout<<char(219);
    		else
    		{
    			cout<<" ";
			}
		}
		
		cout<<endl;
	}
	
		SetConsoleTextAttribute(hConsole, 6);
		gotoxy (50, 10); cout<<"EL JUGADOR #1 HA FINALIZADO CON EXITO EL RETO :) ";
		SetConsoleTextAttribute(hConsole, 2);
      	gotoxy (50, 11); cout<<"*************************************************** ";
      	SetConsoleTextAttribute(hConsole, 4);
      	gotoxy (50, 12); cout<<"--------------------------------------------------- ";
      	SetConsoleTextAttribute(hConsole, 6);
      	gotoxy (50, 14); cout<<"                 PUNTAJE:  "<<j;
      	SetConsoleTextAttribute(hConsole, 2);
    	gotoxy (50, 16); cout<<"*************************************************** ";
    	SetConsoleTextAttribute(hConsole, 4);
      	gotoxy (50, 17); cout<<"--------------------------------------------------- ";
	
	getch();

			break;
        }         
	}
	
	if(opc=='2')
	{
		
		int op = 0;
		int op2 = 0;
		int op3 = 0;
		int op4 = 0;
		int operacion = 0;
		int result = 0;
		int puntos = 5;
		int m = 0;
		
		system ("cls");
		
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
           SetConsoleTextAttribute(hConsole, 9);
		for (int i = 0; i <= 20; i++)
		{  
		
		SetConsoleTextAttribute(hConsole, 9);
     	gotoxy (32, 2); cout<<"OPERACIONES COMBINADAS ";
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(32,3); cout<<"----------------------- "; 
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (58, 2); cout<<" PUNTAJE:     "<<j;
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(58,3); cout<<" ---------------";
		
     	//Dado 1
			op = rand() % 10 + 1;
			op2 = rand() % 10 + 1;
			op3 = rand() % 10 + 1;
			op4 = rand() % 10 + 1;
			
			operacion = ((op + op2) - (op3) * op4);
			
			SetConsoleTextAttribute(hConsole, 9);
			gotoxy (34, 11);cout<<"CUAL ES EL RESULTADO DE LA SIGUIENTE OPERACION: ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(34,13); cout<<"----------------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
			gotoxy (45, 15);cout<<"((" <<op <<" + " << op2 << ") "<<" - (" <<op3<<") * "<<op4<<" )";
			gotoxy(35,17); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		    gotoxy(35,18); cout<<" *******************************************";
		    gotoxy(45,22); cout<<"INGRESE SU RESPUESTA:  ";
			cin>>result;
			
				if (result == operacion)
			{
				SetConsoleTextAttribute(hConsole, 5);
				gotoxy(45,26); cout<<"USTED GANO "<<puntos<<" PUNTOS ";
				j = puntos + j;
				getch();
			}
			else
			{
			  			
				gotoxy(45, 26); cout<<"EL RESULTADO ERA: "<<operacion;
				getch();
			  break;
			}
			
			system("cls");
			
        }         
	}
	
		if(opc=='3')
	{
		
		int op = 0;
		int op2 = 0;
		int op3 = 0;
		int op4 = 0;
		int operacion = 0;
		int result = 0;
		int puntos = 5;
		int m = 0;
		
		system ("cls");
		
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
           SetConsoleTextAttribute(hConsole, 9);
		for (int i = 0; i <= 20; i++)
		{  
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (32, 2); cout<<"ADIVINA EL VALOR ";
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(32,3); cout<<"----------------- "; 
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (58, 2); cout<<" PUNTAJE:     "<<j;
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(58,3); cout<<" ---------------";

     	//Dado 1
			op = rand() % 10 + 1;
			op2 = rand() % 10 + 1;
			op3 = rand() % 10 + 1;
			op4 = rand() % 10 + 1;
			
			operacion = ((op + op2) - (op3) * op4);
			
			SetConsoleTextAttribute(hConsole, 9);
			gotoxy (34, 11);cout<<"CUAL ES EL VALOR DE LA SIGUIENTE OPERACION: ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(34,13); cout<<"----------------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
			gotoxy(45, 15);cout<<"((" <<op <<" + " << op2 << ") "<<" - (__) * "<<op4<<" ) = "<<operacion;
	        SetConsoleTextAttribute(hConsole, 9);
		    gotoxy(35,18); cout<<" *******************************************";
		    gotoxy(45,22); cout<<"INGRESE SU RESPUESTA:  ";
			cin>>result;
			
				if (result == op3)
			{
				SetConsoleTextAttribute(hConsole, 5);
				gotoxy(45,26); cout<<"USTED GANO "<<puntos<<" PUNTOS ";
				j = puntos + j;
				getch();
			}
			else
			{
				gotoxy(45, 26); cout<<"EL RESULTADO ERA: "<<op3;
				getch();
				break;
			}
			
			system("cls");
			
        }         
	}
	}
	
	
	//jugador dos
	
	
	int d1=0;
	int d2=0;
	int d3=0;
	int d4=0;
	int dd1 = 0;
	int dd2 = 0;
	float div12 = 0;
	float resultado12 = 0;
	int puntos1 = 5;
	int k = 0;
	int acum2 = 0;
	int suma1 = 0;
	int resta1 = 0;
	int mult1 = 0;
	int div1 = 0;
	int resultado1 = 0;
	

	system ("cls");
	   
	   
	 system ("COLOR 1");
       cuadro (5, 6, 115, 35);
       
     SetConsoleTextAttribute(hConsole, 1);
	gotoxy (56, 8); cout<<"               TURNO DEL JUGADOR #2                     "; 
	SetConsoleTextAttribute(hConsole, 3); 
	gotoxy (56, 10); cout<<"                 ARITMETIC GAME                        ";
	SetConsoleTextAttribute(hConsole, 5);
	gotoxy (56, 11); cout<<"*******************************************************";
	SetConsoleTextAttribute(hConsole, 6);
	gotoxy (56, 12); cout<<"                                                       ";
	SetConsoleTextAttribute(hConsole, 6);
	gotoxy (56, 13);cout<<"                   1 - SUMA                             ";
	SetConsoleTextAttribute(hConsole, 6);
	gotoxy (56, 14);cout<<"                   2 - RESTA                            ";
	SetConsoleTextAttribute(hConsole, 6);
	gotoxy (56, 15);cout<<"                   3 - MULTIPLICACION                   ";
	SetConsoleTextAttribute(hConsole, 6);
	gotoxy (56, 16);cout<<"                   4 - DIVISION                         ";
	SetConsoleTextAttribute(hConsole, 6);
	gotoxy (56, 17);cout<<"                   5 - RETOS                            ";
	SetConsoleTextAttribute(hConsole, 6);
	gotoxy(56,20); cout<<"Ingrese una opcion: ";
	SetConsoleTextAttribute(hConsole, 7);
	char opcion = getche();
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n";
	
	
	srand(time(NULL));
	
	if (opcion=='1')
	{
					system ("cls");
				HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				
				 SetConsoleTextAttribute(hConsole, 1);		
			cuadro1 (5, 6, 115, 35);
	
   SetConsoleTextAttribute(hConsole, 1);
		gotoxy(36,9); cout<<" -------------------------------- "; 
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(36,10); cout<<" |         BIENVENIDO           | ";  
		SetConsoleTextAttribute(hConsole, 1);
		gotoxy(36,11); cout<<" -------------------------------- ";
		SetConsoleTextAttribute(hConsole, 4);
		gotoxy(32,13); cout<<"             NIVEL DE DIFICULTAD         ";
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(36,14); cout<<" -------------------------------- "; 
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy(36,15); cout<<" ******************************** ";
		SetConsoleTextAttribute(hConsole, 6);
		gotoxy(32,17); cout<<"      1 - FACIL";	
		SetConsoleTextAttribute(hConsole, 6); 
		gotoxy(32,18); cout<<"      2 - MEDIA";
		SetConsoleTextAttribute(hConsole, 6);
		gotoxy(32,19); cout<<"      3 - DIFICIL";
		SetConsoleTextAttribute(hConsole, 6);
		gotoxy(32,24); cout<<"INGRESE LA OPCION QUE DESEA: ";
		SetConsoleTextAttribute(hConsole, 7);
		char option1 = getche();
		getch();
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n";
	
	switch(option1)
	{
		case '1':
			{
						system ("cls");
		
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
           SetConsoleTextAttribute(hConsole, 9);
		for (int i = 0; i <= 20; i++)
		{  
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (40, 2); cout<<"SECCION SUMA        ";
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(40,3); cout<<"------------- "; 
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (58, 2); cout<<" PUNTAJE:     "<<k;
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(58,3); cout<<" ---------------"; 
		
     	//Dado 1
			d1 = rand() % 7 + 1;
			d2 = rand() % 7 + 1;
			
			suma1 = d1 + d2;
			
			SetConsoleTextAttribute(hConsole, 9);
			gotoxy (37, 11);cout<<"CUAL ES EL RESULTADO DE LA SIGUIENTE SUMA: ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,13); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		//    gotoxy(32,16); cout<<" ******************************** ";
			gotoxy (56, 15);cout<<d1 <<" + " << d2<<"  ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,17); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		    gotoxy(35,18); cout<<" *******************************************";
		    gotoxy(45,22); cout<<"INGRESE SU RESPUESTA:  ";
			cin>>resultado1;
			
				if (resultado1 == suma1)
			{
				SetConsoleTextAttribute(hConsole, 5);
				gotoxy(45,25); cout<<"USTED GANO "<<puntos1<<" PUNTOS ";
				k = puntos1 + k;
				getch();
			}
			else
			{
			  break;
			}
			
			system("cls");
			
        }   
			} break;
			
		case '2':
			{
						system ("cls");
		
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
           SetConsoleTextAttribute(hConsole, 9);
		for (int i = 0; i <= 20; i++)
		{  
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (40, 2); cout<<"SECCION SUMA        ";
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(40,3); cout<<"------------- "; 
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (58, 2); cout<<" PUNTAJE:     "<<k;
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(58,3); cout<<" ---------------"; 
		
     	//Dado 1
			d1 = rand() % 50 + 1;
			d2 = rand() % 50 + 1;
			d3 = rand() % 50 + 1;
			
			suma1 = d1 + d2 + d3;
			
			SetConsoleTextAttribute(hConsole, 9);
			gotoxy (37, 11);cout<<"CUAL ES EL RESULTADO DE LA SIGUIENTE SUMA: ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,13); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		//    gotoxy(32,16); cout<<" ******************************** ";
			gotoxy (52, 15);cout<<d1 <<" + " << d2<<" + "<<d3;
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,17); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		    gotoxy(35,18); cout<<" *******************************************";
		    gotoxy(45,22); cout<<"INGRESE SU RESPUESTA:  ";
			cin>>resultado1;
				if (resultado1 == suma1)
			{
				SetConsoleTextAttribute(hConsole, 5);
				gotoxy(45,25); cout<<"USTED GANO "<<puntos1<<" PUNTOS ";
				k = puntos1 + k;
				getch();
			}
			else
			{
			  break;
			}
			
			system("cls");
			
        }   
			} break;
			
		case '3':
			{
						system ("cls");
		
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
           SetConsoleTextAttribute(hConsole, 9);
		for (int i = 0; i <= 20; i++)
		{  
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (40, 2); cout<<"SECCION SUMA        ";
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(40,3); cout<<"------------- "; 
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (58, 2); cout<<" PUNTAJE:     "<<k;
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(58,3); cout<<" ---------------"; 
		
     	//Dado 1
			d1 = rand() % 100 + 1;
			d2 = rand() % 100 + 1;
			d3 = rand() % 100 + 1;
			d4 = rand() % 100 + 1;
			
			suma1 = d1 + d2 + d3 + d4;
			
			SetConsoleTextAttribute(hConsole, 9);
			gotoxy (37, 11);cout<<"CUAL ES EL RESULTADO DE LA SIGUIENTE SUMA: ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,13); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		//    gotoxy(32,16); cout<<" ******************************** ";
			gotoxy (50, 15);cout<<d1 <<" + " << d2<<" + "<<d3<<" + "<<d4;
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,17); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		    gotoxy(35,18); cout<<" *******************************************";
		    gotoxy(45,22); cout<<"INGRESE SU RESPUESTA:  ";
			cin>>resultado1;
				if (resultado1 == suma1)
			{
				SetConsoleTextAttribute(hConsole, 5);
				gotoxy(45,25); cout<<"USTED GANO "<<puntos1<<" PUNTOS ";
				k = puntos1 + k;
				getch();
			}
			else
			{
			  break;
			}
			
			system("cls");
			
        }   
			} break;
	 }
	 
	      
	}
	
	if (opcion=='2')
	{
					system ("cls");
					
				HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				
				 SetConsoleTextAttribute(hConsole, 1);		
			cuadro1 (5, 6, 115, 35);
	
   SetConsoleTextAttribute(hConsole, 1);
		gotoxy(36,9); cout<<" -------------------------------- "; 
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(36,10); cout<<" |         BIENVENIDO           | ";  
		SetConsoleTextAttribute(hConsole, 1);
		gotoxy(36,11); cout<<" -------------------------------- ";
		SetConsoleTextAttribute(hConsole, 4);
		gotoxy(32,13); cout<<"             NIVEL DE DIFICULTAD         ";
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(36,14); cout<<" -------------------------------- "; 
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy(36,15); cout<<" ******************************** ";
		SetConsoleTextAttribute(hConsole, 6);
		gotoxy(32,17); cout<<"      1 - FACIL";	
		SetConsoleTextAttribute(hConsole, 6); 
		gotoxy(32,18); cout<<"      2 - MEDIA";
		SetConsoleTextAttribute(hConsole, 6);
		gotoxy(32,19); cout<<"      3 - DIFICIL";
		SetConsoleTextAttribute(hConsole, 6);
		gotoxy(32,24); cout<<"INGRESE LA OPCION QUE DESEA: ";
		SetConsoleTextAttribute(hConsole, 7);
		char option1 = getche();
		getch();
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n";
	switch(option1)
	{
	  case '1':
	  {
	      	system ("cls");
		
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
           SetConsoleTextAttribute(hConsole, 9);
		for (int i = 0; i <= 20; i++)
		{  
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (40, 2); cout<<"SECCION RESTA       ";
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(40,3); cout<<"------------- "; 
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (58, 2); cout<<" PUNTAJE:     "<<k;
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(58,3); cout<<" ---------------"; 
     	//Dado 1
			d1 = rand() % 7 + 1;
			d2 = rand() % 7 + 1;
			
			if(d1 > d2)
			{
			SetConsoleTextAttribute(hConsole, 9);
			gotoxy (37, 11);cout<<"CUAL ES EL RESULTADO DE LA SIGUIENTE RESTA: ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,13); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		//    gotoxy(32,16); cout<<" ******************************** ";
			gotoxy (54, 15);cout<<d1 <<" - " << d2<<" ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,17); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		    gotoxy(35,18); cout<<" *******************************************";
		    gotoxy(45,22); cout<<"INGRESE SU RESPUESTA:  ";
			cin>>resultado1;
			  resta1 = d1 - d2;	
			}
			else
			{
			SetConsoleTextAttribute(hConsole, 9);			
			gotoxy (37, 11);cout<<"CUAL ES EL RESULTADO DE LA SIGUIENTE RESTA: ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,13); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		//    gotoxy(32,16); cout<<" ******************************** ";
			gotoxy (54, 15);cout<<d2 <<" - " << d1;
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,17); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		    gotoxy(35,18); cout<<" *******************************************";
		    gotoxy(45,22); cout<<"INGRESE SU RESPUESTA:  ";
			cin>>resultado1;
				resta1 = d2 - d1;
			}
				if (resultado1 == resta1)
			{
				SetConsoleTextAttribute(hConsole, 5);
				gotoxy(45,25); cout<<"USTED GANO "<<puntos1<<" PUNTOS ";
				k = puntos1 + k;
				getch();
			}
			else
			{
			  break;
			}
			
			system("cls");
			
        }         
	
	  }	break;
	  
	  case '2':
	  	{
	  			system ("cls");
		
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
           SetConsoleTextAttribute(hConsole, 9);
		for (int i = 0; i <= 20; i++)
		{  
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (40, 2); cout<<"SECCION RESTA       ";
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(40,3); cout<<"------------- "; 
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (58, 2); cout<<" PUNTAJE:     "<<k;
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(58,3); cout<<" ---------------"; 
		
     	//Dado 1
			d1 = rand() % 50 + 1;
			d2 = rand() % 50 + 1;
			
			if(d1 > d2)
			{
			SetConsoleTextAttribute(hConsole, 9);			
			gotoxy (37, 11);cout<<"CUAL ES EL RESULTADO DE LA SIGUIENTE RESTA: ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,13); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		//    gotoxy(32,16); cout<<" ******************************** ";
			gotoxy (54, 15);cout<<d1 <<" - " << d2;
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,17); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		    gotoxy(35,18); cout<<" *******************************************";
		    gotoxy(45,22); cout<<"INGRESE SU RESPUESTA:  ";
			cin>>resultado1;
			  resta1 = d1 - d2;	
			}
			else
			{
				SetConsoleTextAttribute(hConsole, 9);			
			gotoxy (37, 11);cout<<"CUAL ES EL RESULTADO DE LA SIGUIENTE RESTA: ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,13); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		//    gotoxy(32,16); cout<<" ******************************** ";
			gotoxy (54, 15);cout<<d2 <<" - " << d1;
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,17); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		    gotoxy(35,18); cout<<" *******************************************";
		    gotoxy(45,22); cout<<"INGRESE SU RESPUESTA:  ";
			cin>>resultado1;
				resta1 = d2 - d1;
			}
				if (resultado1 == resta1)
			{
				SetConsoleTextAttribute(hConsole, 5);
				gotoxy(45,25); cout<<"USTED GANO "<<puntos1<<" PUNTOS ";
				k = puntos1 + k;
				getch();
			}
			else
			{
			  break;
			}
			
			system("cls");
			
        }         

	    } break;
	    
	    case '3':
	    	{
	    			system ("cls");
		
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
           SetConsoleTextAttribute(hConsole, 9);
		for (int i = 0; i <= 20; i++)
		{  
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (40, 2); cout<<"SECCION RESTA       ";
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(40,3); cout<<"------------- "; 
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (58, 2); cout<<" PUNTAJE:     "<<k;
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(58,3); cout<<" ---------------"; 
		
     	//Dado 1
			d1 = rand() % 100 + 1;
			d2 = rand() % 100 + 1;
			
			if(d1 > d2)
			{
			SetConsoleTextAttribute(hConsole, 9);
			gotoxy (37, 11);cout<<"CUAL ES EL RESULTADO DE LA SIGUIENTE RESTA: ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,13); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		//    gotoxy(32,16); cout<<" ******************************** ";
			gotoxy (54, 15);cout<<d1 <<" - " << d2;
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,17); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		    gotoxy(35,18); cout<<" *******************************************";
		    gotoxy(45,22); cout<<"INGRESE SU RESPUESTA:  ";
			cin>>resultado1;
			
			  resta1 = d1 - d2;	
			}
			else
			{
			SetConsoleTextAttribute(hConsole, 9);				
			gotoxy (37, 11);cout<<"CUAL ES EL RESULTADO DE LA SIGUIENTE RESTA: ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,13); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		//    gotoxy(32,16); cout<<" ******************************** ";
			gotoxy (54, 15);cout<<d2 <<" - " << d1;
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,17); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		    gotoxy(35,18); cout<<" *******************************************";
		    gotoxy(45,22); cout<<"INGRESE SU RESPUESTA:  ";
			cin>>resultado1;
				resta1 = d2 - d1;
			}
				if (resultado1 == resta1)
			{
				SetConsoleTextAttribute(hConsole, 5);
				gotoxy(34,15); cout<<"USTED GANO "<<puntos1<<" PUNTOS ";
				k = puntos1 + k;
				getch();
			}
			else
			{
			  break;
			}
			
			system("cls");
			
        }         

			} break;
	  
	}
	
	
	
	}
	
		if (opcion=='3')
	{
					system ("cls");
			HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				
				 SetConsoleTextAttribute(hConsole, 1);		
			cuadro1 (5, 6, 115, 35);
	
   SetConsoleTextAttribute(hConsole, 1);
		gotoxy(36,9); cout<<" -------------------------------- "; 
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(36,10); cout<<" |         BIENVENIDO           | ";  
		SetConsoleTextAttribute(hConsole, 1);
		gotoxy(36,11); cout<<" -------------------------------- ";
		SetConsoleTextAttribute(hConsole, 4);
		gotoxy(32,13); cout<<"             NIVEL DE DIFICULTAD         ";
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(36,14); cout<<" -------------------------------- "; 
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy(36,15); cout<<" ******************************** ";
		SetConsoleTextAttribute(hConsole, 6);
		gotoxy(32,17); cout<<"      1 - FACIL";	
		SetConsoleTextAttribute(hConsole, 6); 
		gotoxy(32,18); cout<<"      2 - MEDIA";
		SetConsoleTextAttribute(hConsole, 6);
		gotoxy(32,19); cout<<"      3 - DIFICIL";
		SetConsoleTextAttribute(hConsole, 6);
		gotoxy(32,24); cout<<"INGRESE LA OPCION QUE DESEA: ";
		SetConsoleTextAttribute(hConsole, 7);
		char option1 = getche();
		getch();
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n";
	
	switch(option1)
	{
		
		case '1':
			{
						system ("cls");
		
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
           SetConsoleTextAttribute(hConsole, 9);
		for (int i = 0; i <= 20; i++)
		{  
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (32, 2); cout<<"SECCION MULTIPLICACION ";
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(32,3); cout<<"----------------------- "; 
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (58, 2); cout<<" PUNTAJE:     "<<k;
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(58,3); cout<<" ---------------";
		
     	//Dado 1
			d1 = rand() % 12 + 1;
			d2 = rand() % 12 + 1;
			
			SetConsoleTextAttribute(hConsole, 9);
			gotoxy (34, 11);cout<<"CUAL ES EL RESULTADO DE LA SIGUIENTE MULTIPLICACION: ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(34,13); cout<<"----------------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		//    gotoxy(32,16); cout<<" ******************************** ";
			gotoxy (56, 15);cout<<d1 <<" x " << d2<<"  ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,17); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		    gotoxy(35,18); cout<<" *******************************************";
		    gotoxy(45,22); cout<<"INGRESE SU RESPUESTA:  ";
			cin>>resultado1;
			  mult1 = d1 * d2;	
		
				if (resultado1 == mult1)
			{
				SetConsoleTextAttribute(hConsole, 5);
				gotoxy(45,25); cout<<"USTED GANO "<<puntos1<<" PUNTOS ";
				k = puntos1 + k;
				getch();
			}
			else
			{
			  break;
			}
			
			system("cls");
			
        } 
			} break;
			
		case '2':
			{
						system ("cls");
		
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
           SetConsoleTextAttribute(hConsole, 9);
		for (int i = 0; i <= 20; i++)
		{  
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (32, 2); cout<<"SECCION MULTIPLICACION ";
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(32,3); cout<<"----------------------- "; 
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (58, 2); cout<<" PUNTAJE:     "<<k;
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(58,3); cout<<" ---------------";
		
     	//Dado 1
			d1 = rand() % 52 + 1;
			d2 = rand() % 52 + 1;
			
			SetConsoleTextAttribute(hConsole, 9);
			gotoxy (34, 11);cout<<"CUAL ES EL RESULTADO DE LA SIGUIENTE MULTIPLICACION: ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(34,13); cout<<"----------------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		//    gotoxy(32,16); cout<<" ******************************** ";
			gotoxy (56, 15);cout<<d1 <<" x " << d2<<"  ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,17); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		    gotoxy(35,18); cout<<" *******************************************";
		    gotoxy(45,22); cout<<"INGRESE SU RESPUESTA:  ";
			cin>>resultado1;
			
			  mult1 = d1 * d2;	
		
				if (resultado1 == mult1)
			{
				SetConsoleTextAttribute(hConsole, 5);
				gotoxy(45,25); cout<<"USTED GANO "<<puntos1<<" PUNTOS ";
				k = puntos1 + k;
				getch();
			}
			else
			{
			  break;
			}
			
			system("cls");
			
        } 
			} break;
			
		case '3':
			{
						system ("cls");
		
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
           SetConsoleTextAttribute(hConsole, 9);
		for (int i = 0; i <= 20; i++)
		{  
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (32, 2); cout<<"SECCION MULTIPLICACION ";
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(32,3); cout<<"----------------------- "; 
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (58, 2); cout<<" PUNTAJE:     "<<k;
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(58,3); cout<<" ---------------";
		
     	//Dado 1
			d1 = rand() % 100 + 1;
			d2 = rand() % 100 + 1;
			
			SetConsoleTextAttribute(hConsole, 9);
			gotoxy (34, 11);cout<<"CUAL ES EL RESULTADO DE LA SIGUIENTE MULTIPLICACION: ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(34,13); cout<<"----------------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		//    gotoxy(32,16); cout<<" ******************************** ";
			gotoxy (56, 15);cout<<d1 <<" x " << d2<<"  ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,17); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		    gotoxy(35,18); cout<<" *******************************************";
		    gotoxy(45,22); cout<<"INGRESE SU RESPUESTA:  ";
			cin>>resultado1;
			  mult1 = d1 * d2;	
		
				if (resultado1 == mult1)
			{
				SetConsoleTextAttribute(hConsole, 5);
				gotoxy(45,25); cout<<"USTED GANO "<<puntos1<<" PUNTOS ";
				k = puntos1 + k;
				getch();
			}
			else
			{
			  break;
			}
			
			system("cls");
			
        } 
			} break;
		
	 } 
	   
	}
	
	if (opcion=='4')
	{
		
			system ("cls");
					
				HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				
				 SetConsoleTextAttribute(hConsole, 1);		
			cuadro1 (5, 6, 115, 35);
	
   SetConsoleTextAttribute(hConsole, 1);
		gotoxy(36,9); cout<<" -------------------------------- "; 
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(36,10); cout<<" |         BIENVENIDO           | ";  
		SetConsoleTextAttribute(hConsole, 1);
		gotoxy(36,11); cout<<" -------------------------------- ";
		SetConsoleTextAttribute(hConsole, 4);
		gotoxy(32,13); cout<<"             NIVEL DE DIFICULTAD         ";
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(36,14); cout<<" -------------------------------- "; 
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy(36,15); cout<<" ******************************** ";
		SetConsoleTextAttribute(hConsole, 6);
		gotoxy(32,17); cout<<"      1 - FACIL";	
		SetConsoleTextAttribute(hConsole, 6); 
		gotoxy(32,18); cout<<"      2 - MEDIA";
		SetConsoleTextAttribute(hConsole, 6);
		gotoxy(32,19); cout<<"      3 - DIFICIL";
		SetConsoleTextAttribute(hConsole, 6);
		gotoxy(32,24); cout<<"INGRESE LA OPCION QUE DESEA: ";
		SetConsoleTextAttribute(hConsole, 7);
		char option1 = getche();
		getch();
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n";
		
		switch(option1)
		{
			case '1':
				{
					int result1 = 0;
		int divi = 0;
		
			system ("cls");
		
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
           SetConsoleTextAttribute(hConsole, 9);
		
      for(int i = 0; i <=1; i++)
      {
      	SetConsoleTextAttribute(hConsole, 9);
      			gotoxy (32, 2); cout<<"SECCION DIVISION ";
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(32,3); cout<<"----------------------- "; 
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (58, 2); cout<<" PUNTAJE:     "<<k;
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(58,3); cout<<" ---------------";
		
		SetConsoleTextAttribute(hConsole, 9);
			gotoxy (34, 11);cout<<"CUAL ES EL RESULTADO DE LA SIGUIENTE DIVISION: ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(34,13); cout<<"----------------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		//    gotoxy(32,16); cout<<" ******************************** ";
			gotoxy (56, 15);cout<<"8 / 4 ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,17); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		    gotoxy(35,18); cout<<" *******************************************";
		    gotoxy(45,22); cout<<"INGRESE SU RESPUESTA:  ";
              cin>>result1;
       
            divi = 8 / 4;
       
       if(result1==divi)
       {
       	SetConsoleTextAttribute(hConsole, 5);
				gotoxy(45,25); cout<<"USTED GANO "<<puntos1<<" PUNTOS ";
				k = puntos1 + k;
				getch();
	   }
       else
       {
       	break;
	   } 
	   system("cls");
       
        SetConsoleTextAttribute(hConsole, 9);
      			gotoxy (32, 2); cout<<"SECCION DIVISION ";
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(32,3); cout<<"----------------------- "; 
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (58, 2); cout<<" PUNTAJE:     "<<k;
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(58,3); cout<<" ---------------";
		
		SetConsoleTextAttribute(hConsole, 9);
			gotoxy (34, 11);cout<<"CUAL ES EL RESULTADO DE LA SIGUIENTE DIVISION: ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(34,13); cout<<"----------------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		//    gotoxy(32,16); cout<<" ******************************** ";
			gotoxy (56, 15);cout<<"72 / 8 ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,17); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		    gotoxy(35,18); cout<<" *******************************************";
		    gotoxy(45,22); cout<<"INGRESE SU RESPUESTA:  ";
              cin>>result1;
       
            divi = 72 / 8;
       
       if(result1==divi)
       {
       	SetConsoleTextAttribute(hConsole, 5);
				gotoxy(45,25); cout<<"USTED GANO "<<puntos1<<" PUNTOS ";
				k = puntos1 + k;
				getch();
	   }
       else
       {
       	break;
	   } 
	   system("cls");
       
       SetConsoleTextAttribute(hConsole, 9);
      			gotoxy (32, 2); cout<<"SECCION DIVISION ";
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(32,3); cout<<"----------------------- "; 
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (58, 2); cout<<" PUNTAJE:     "<<k;
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(58,3); cout<<" ---------------";
		
		SetConsoleTextAttribute(hConsole, 9);
			gotoxy (34, 11);cout<<"CUAL ES EL RESULTADO DE LA SIGUIENTE DIVISION: ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(34,13); cout<<"----------------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		//    gotoxy(32,16); cout<<" ******************************** ";
			gotoxy (56, 15);cout<<"42 / 7 ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,17); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		    gotoxy(35,18); cout<<" *******************************************";
		    gotoxy(45,22); cout<<"INGRESE SU RESPUESTA:  ";
              cin>>result1;
       
            divi = 42 / 7;
       
       if(result1==divi)
       {
       	SetConsoleTextAttribute(hConsole, 5);
				gotoxy(45,25); cout<<"USTED GANO "<<puntos1<<" PUNTOS ";
				k = puntos1 + k;
				getch();
	   }
       else
       {
       	break;
	   } 
	   system("cls");
	   
	   break;
	  }
					
					
				} break;
				
		case '2':
			{
			   int result1 = 0;
		int divi = 0;
		
			system ("cls");
		
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
           SetConsoleTextAttribute(hConsole, 9);
		
      for(int i = 0; i <=1; i++)
      {
      	SetConsoleTextAttribute(hConsole, 9);
      			gotoxy (32, 2); cout<<"SECCION DIVISION ";
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(32,3); cout<<"----------------------- "; 
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (58, 2); cout<<" PUNTAJE:     "<<k;
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(58,3); cout<<" ---------------";
		
		SetConsoleTextAttribute(hConsole, 9);
			gotoxy (34, 11);cout<<"CUAL ES EL RESULTADO DE LA SIGUIENTE DIVISION: ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(34,13); cout<<"----------------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		//    gotoxy(32,16); cout<<" ******************************** ";
			gotoxy (56, 15);cout<<"15 / 3 ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,17); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		    gotoxy(35,18); cout<<" *******************************************";
		    gotoxy(45,22); cout<<"INGRESE SU RESPUESTA:  ";
              cin>>result1;
       
            divi = 15 / 3;
       
       if(result1==divi)
       {
       	SetConsoleTextAttribute(hConsole, 5);
				gotoxy(45,25); cout<<"USTED GANO "<<puntos1<<" PUNTOS ";
				k = puntos1 + k;
				getch();
	   }
       else
       {
       	break;
	   } 
	   system("cls");
       
        SetConsoleTextAttribute(hConsole, 9);
      			gotoxy (32, 2); cout<<"SECCION DIVISION ";
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(32,3); cout<<"----------------------- "; 
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (58, 2); cout<<" PUNTAJE:     "<<k;
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(58,3); cout<<" ---------------";
		
		SetConsoleTextAttribute(hConsole, 9);
			gotoxy (34, 11);cout<<"CUAL ES EL RESULTADO DE LA SIGUIENTE DIVISION: ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(34,13); cout<<"----------------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		//    gotoxy(32,16); cout<<" ******************************** ";
			gotoxy (56, 15);cout<<"16 / 8 ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,17); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		    gotoxy(35,18); cout<<" *******************************************";
		    gotoxy(45,22); cout<<"INGRESE SU RESPUESTA:  ";
              cin>>result1;
       
            divi = 16 / 8;
       
       if(result1==divi)
       {SetConsoleTextAttribute(hConsole, 5);
				gotoxy(45,25); cout<<"USTED GANO "<<puntos1<<" PUNTOS ";
				k = puntos1 + k;
				getch();
	   }
       else
       {
       	break;
	   } 
	   system("cls");
       
       SetConsoleTextAttribute(hConsole, 9);
      			gotoxy (32, 2); cout<<"SECCION DIVISION ";
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(32,3); cout<<"----------------------- "; 
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (58, 2); cout<<" PUNTAJE:     "<<k;
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(58,3); cout<<" ---------------";
		
		SetConsoleTextAttribute(hConsole, 9);
			gotoxy (34, 11);cout<<"CUAL ES EL RESULTADO DE LA SIGUIENTE DIVISION: ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(34,13); cout<<"----------------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		//    gotoxy(32,16); cout<<" ******************************** ";
			gotoxy (56, 15);cout<<"36 / 4 ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,17); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		    gotoxy(35,18); cout<<" *******************************************";
		    gotoxy(45,22); cout<<"INGRESE SU RESPUESTA:  ";
              cin>>result1;
       
            divi = 36 / 4;
       
       if(result1==divi)
       {
       	SetConsoleTextAttribute(hConsole, 5);
				gotoxy(45,25); cout<<"USTED GANO "<<puntos1<<" PUNTOS ";
				k = puntos1 + k;
				getch();
	   }
       else
       {
       	break;
	   } 
	   system("cls");
	   
	   break;
	  }	
			} break;
			
		case '3':
			{
				int result1 = 0;
		int divi = 0;
		
			system ("cls");
		
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
           SetConsoleTextAttribute(hConsole, 9);
		
      for(int i = 0; i <=1; i++)
      { SetConsoleTextAttribute(hConsole, 9);
      			gotoxy (32, 2); cout<<"SECCION DIVISION ";
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(32,3); cout<<"----------------------- "; 
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (58, 2); cout<<" PUNTAJE:     "<<k;
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(58,3); cout<<" ---------------";
		
		SetConsoleTextAttribute(hConsole, 9);
			gotoxy (34, 11);cout<<"CUAL ES EL RESULTADO DE LA SIGUIENTE DIVISION: ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(34,13); cout<<"----------------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		//    gotoxy(32,16); cout<<" ******************************** ";
			gotoxy (56, 15);cout<<" 126 / 3 ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,17); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		    gotoxy(35,18); cout<<" *******************************************";
		    gotoxy(45,22); cout<<"INGRESE SU RESPUESTA:  ";
              cin>>result1;
       
            divi = 126 / 3;
       
       if(result1==divi)
       {
       	SetConsoleTextAttribute(hConsole, 5);
				gotoxy(45,25); cout<<"USTED GANO "<<puntos1<<" PUNTOS ";
				k = puntos1 + k;
				getch();
	   }
       else
       {
       	break;
	   } 
	   system("cls");
       
        SetConsoleTextAttribute(hConsole, 9);
      			gotoxy (32, 2); cout<<"SECCION DIVISION ";
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(32,3); cout<<"----------------------- "; 
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (58, 2); cout<<" PUNTAJE:     "<<k;
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(58,3); cout<<" ---------------";
		
		SetConsoleTextAttribute(hConsole, 9);
			gotoxy (34, 11);cout<<"CUAL ES EL RESULTADO DE LA SIGUIENTE DIVISION: ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(34,13); cout<<"----------------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		//    gotoxy(32,16); cout<<" ******************************** ";
			gotoxy (56, 15);cout<<"1450 / 5 ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,17); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		    gotoxy(35,18); cout<<" *******************************************";
		    gotoxy(45,22); cout<<"INGRESE SU RESPUESTA:  ";
              cin>>result1;
       
            divi = 1450 / 5;
       
       if(result1==divi)
       {
       	SetConsoleTextAttribute(hConsole, 5);
				gotoxy(45,25); cout<<"USTED GANO "<<puntos1<<" PUNTOS ";
				k = puntos1 + k;
				getch();
	   }
       else
       {
       	break;
	   } 
	   system("cls");
       
       SetConsoleTextAttribute(hConsole, 9);
      			gotoxy (32, 2); cout<<"SECCION DIVISION ";
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(32,3); cout<<"----------------------- "; 
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (58, 2); cout<<" PUNTAJE:     "<<k;
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(58,3); cout<<" ---------------";
		
		SetConsoleTextAttribute(hConsole, 9);
			gotoxy (34, 11);cout<<"CUAL ES EL RESULTADO DE LA SIGUIENTE DIVISION: ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(34,13); cout<<"----------------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		//    gotoxy(32,16); cout<<" ******************************** ";
			gotoxy (56, 15);cout<<"1670 / 2 ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(35,17); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		    gotoxy(35,18); cout<<" *******************************************";
		    gotoxy(45,22); cout<<"INGRESE SU RESPUESTA:  ";
              cin>>result1;
       
            divi = 1670 / 2;
       
       if(result1==divi)
       {
       	SetConsoleTextAttribute(hConsole, 5);
				gotoxy(45,25); cout<<"USTED GANO "<<puntos1<<" PUNTOS ";
				k = puntos1 + k;
				getch();
	   }
       else
       {
       	break;
	   } 
	   system("cls");
	   
	   break;
	  }
       
			}
		}
		
	
	}
	
	if(opcion=='5')
	{
	int result = 0;
	int puntos = 5;
	int p = 0;
	int acum = 0;
	int suma = 0;
	int resta = 0;
	int mult = 0;
	int div = 0;
	char resultado = 0;
	

	system ("cls");
	
		for (int i = 2; i < 112; i++){ //Diseño del marco 
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 2);
    	gotoxy(1+i, 1); cout<<" ";
    	gotoxy(2+i, 2); cout<<"*";
    	gotoxy(1+i, 25); cout<<" ";
    	gotoxy(2+i, 26); cout<<"*";
	} 
	   
	   HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	 SetConsoleTextAttribute(hConsole, 3);
	 gotoxy(106,5);	 int matriz [20][40] = {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,0,0,0,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,1,1,1,1,1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1,1,1,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};
	
	
    for (int i = 0; i < 20; i++)
    {
    	for (int j = 0; j < 40; j++)
    	{
    		if (matriz [i][j] == 1) cout<<char(219);
    		else
    		{
    			cout<<" ";
			}
		}
		
		cout<<endl;
	}
	
	SetConsoleTextAttribute(hConsole, 4);
	gotoxy (56, 9); cout<<"               RETOS MATEMATICOS                     ";  
	SetConsoleTextAttribute(hConsole, 5);
	gotoxy (56, 10); cout<<"-------------------------------------------------------";
	SetConsoleTextAttribute(hConsole, 1);
	gotoxy (56, 11); cout<<"*******************************************************";
	SetConsoleTextAttribute(hConsole, 6);
	gotoxy (52, 12); cout<<"                                                       ";
	SetConsoleTextAttribute(hConsole, 6);
	gotoxy (50, 13);cout<<"                   1 - QUIZ                             ";
	SetConsoleTextAttribute(hConsole, 6);
	gotoxy (50, 14);cout<<"                   2 - OPERACIONES COMBINADAS                            ";
	SetConsoleTextAttribute(hConsole, 6);
	gotoxy (50, 15);cout<<"                   3 - ADIVINA EL VALOR DE LA OPERACION                   ";
	SetConsoleTextAttribute(hConsole, 6);
	gotoxy(55,20); cout<<"Ingrese una opcion: ";
	SetConsoleTextAttribute(hConsole, 7);
	char option = getche();
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n";

	
	srand(time(NULL));
	
	if (option=='1')
	{
		system ("cls");
		
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
           SetConsoleTextAttribute(hConsole, 9);
		for (int i = 0; i <= 1; i++)
		{  
		
				for (int i = 2; i < 112; i++){ //Diseño del marco 
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 4);
    	gotoxy(1+i, 1); cout<<" ";
    	gotoxy(2+i, 2); cout<<"°";
    	gotoxy(1+i, 25); cout<<" ";
    	gotoxy(2+i, 26); cout<<"°";
	} 
	  
        SetConsoleTextAttribute(hConsole, 3);	  
		gotoxy (40, 4); cout<<" QUIZ ";
		SetConsoleTextAttribute(hConsole, 3);
     	gotoxy (50, 4); cout<<" PUNTAJE: "<<k;
	
	
	      SetConsoleTextAttribute(hConsole, 2);
			gotoxy (32, 11);cout<<"EN UNA TIENDA VENDEN CIERTO CEREAL EN DOS TAMANOS: ";
			 SetConsoleTextAttribute(hConsole, 6);
			gotoxy (32, 12);cout<<"a) UNA CAJA DE 10 ONZAS QUE CUESTA L 2.50 ";
			 SetConsoleTextAttribute(hConsole, 6);
			gotoxy (32, 13);cout<<"b) UNA CAJA DE 15 ONZAS QUE CUESTA L 3.60 ";
			 SetConsoleTextAttribute(hConsole, 2);
			gotoxy (32, 15);cout<<"QUE CAJA CONVIENE MAS COMPRAR";
			 SetConsoleTextAttribute(hConsole, 6);
			gotoxy (32, 17);cout<<"INGRESE SU RESPUESTA: ";
			 SetConsoleTextAttribute(hConsole, 7);
			cin>>resultado;
				if (resultado == 'a')
			{
				 SetConsoleTextAttribute(hConsole, 2);
				gotoxy(32,20); cout<<"SU RESPUESTA ES CORRECTA. USTED GANO "<<puntos1<<" PUNTOS ";
				k = puntos1 + k;
				getch();
			}
			else
			{
			  break;
			}
			
			system ("cls");         
			
							for (int i = 2; i < 112; i++){ //Diseño del marco 
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 4);
    	gotoxy(1+i, 1); cout<<" ";
    	gotoxy(2+i, 2); cout<<"°";
    	gotoxy(1+i, 25); cout<<" ";
    	gotoxy(2+i, 26); cout<<"°";
	} 
        
            SetConsoleTextAttribute(hConsole, 3);        
            gotoxy (40, 4); cout<<" QUIZ ";
            SetConsoleTextAttribute(hConsole, 3);
         	gotoxy (50, 4); cout<<" PUNTAJE: "<<k;
         	
         	SetConsoleTextAttribute(hConsole, 2);
        	gotoxy (32, 11);cout<<"SI USTED CONDUCE A UNA VELOCIDAD MEDIA DE 50 MILLAS POR HORA ";
        	SetConsoleTextAttribute(hConsole, 2);
			gotoxy(32, 12); cout<<"A QUE DISTANCIA RECORRE USTED EN CADA PERIODO DE TIEMPO EN 3 HORAS ?";
			SetConsoleTextAttribute(hConsole, 6);
			gotoxy (32, 14);cout<<"a) 125 MILLAS";
			SetConsoleTextAttribute(hConsole, 6);
			gotoxy (32, 15);cout<<"b) 150 MILLAS ";
			SetConsoleTextAttribute(hConsole, 6);
			gotoxy (32, 17);cout<<"INGRESE SU RESPUESTA: ";
			SetConsoleTextAttribute(hConsole, 7);
			cin>>resultado;
			
				if (resultado == 'b')
			{
				SetConsoleTextAttribute(hConsole, 2);
				gotoxy(32,20); cout<<"SU RESPUESTA ES CORRECTA. USTED GANO "<<puntos1<<" PUNTOS ";
				k = puntos1 + k;
				getch();
			}
			else
			{
			  break;
			}
			
			system("cls");
			
												for (int i = 2; i < 112; i++){ //Diseño del marco 
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 4);
    	gotoxy(1+i, 1); cout<<" ";
    	gotoxy(2+i, 2); cout<<"-";
    	gotoxy(1+i, 25); cout<<" ";
    	gotoxy(2+i, 30); cout<<"-";
	} 
				
			SetConsoleTextAttribute(hConsole, 3);
			gotoxy (40, 4); cout<<" QUIZ ";
			SetConsoleTextAttribute(hConsole, 5);
			gotoxy (40, 5); cout<<"------";
			SetConsoleTextAttribute(hConsole, 3);
     	    gotoxy (50, 4); cout<<" PUNTAJE: "<<k;
     	    SetConsoleTextAttribute(hConsole, 5);
     	    gotoxy (50, 5); cout<<"------------";
     	    
     	    gotoxy (50, 9); cout<<"                                                         ";
     	    
     	    SetConsoleTextAttribute(hConsole, 3);
     	    int matriz [20][40] = {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,0,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,1,1,0,1,1,0,1,1,0,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,1,0,1,1,0,1,1,0,1,1,0,1,1,0,1,1,0,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0},
{0,0,0,0,1,0,1,1,0,1,1,0,1,1,0,1,1,0,1,1,0,1,1,0,1,1,0,1,1,0,1,0,0,0,0,0,0,0,0,0},
{0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};
	
	
	
    for (int i = 0; i < 20; i++)
    {
    	for (int j = 0; j < 40; j++)
    	{
    		if (matriz [i][j] == 1) cout<<char(219);
    		else
    		{
    			cout<<" ";
			}
		}
		
		cout<<endl;
	}
			SetConsoleTextAttribute(hConsole, 2);
			gotoxy (38, 9);cout<<"AQUI TIENE USTED UNA ESCALERA QUE SUBE Y BAJA, CON 5 ESCALONES DE ALTURA ";
			SetConsoleTextAttribute(hConsole, 2);
			gotoxy (38, 11);cout<<"1) CUANTOS CUADRADOS SE NECESITAN PARA UNA ESCALERA QUE TENGA 10 ESCALONES: ";
			SetConsoleTextAttribute(hConsole, 6);
			gotoxy (38, 13);cout<<"a) 50 CUADRADOS";
			SetConsoleTextAttribute(hConsole, 6);
			gotoxy (38, 14);cout<<"b) 100 CUADRADOS";
			SetConsoleTextAttribute(hConsole, 6);
			gotoxy (38, 16);cout<<"INGRESE SU RESPUESTA: ";
			SetConsoleTextAttribute(hConsole, 7);
			cin>>resultado;
			
				if (resultado == 'b')
			{
				SetConsoleTextAttribute(hConsole, 4);
				gotoxy(38,18); cout<<"SU RESPUESTA ES CORRECTA. USTED GANO "<<puntos1<<" PUNTOS ";
				k = puntos1 + k;
				getch();
			}
			else
			{
			  break;
			}
			
			SetConsoleTextAttribute(hConsole, 2);
			gotoxy (38, 20);cout<<"2) CUANTOS CUADRADOS SE NECESITAN PARA UNA ESCALERA QUE TENGA 50 ESCALONES ?";
			SetConsoleTextAttribute(hConsole, 6);
			gotoxy (38, 22);cout<<"a) 25 CUADRADOS";
			SetConsoleTextAttribute(hConsole, 6);
			gotoxy (38, 23);cout<<"b) 100 CUADRADOS";
			SetConsoleTextAttribute(hConsole, 6);
			gotoxy (38, 24);cout<<"c) 2,500 CUADRADOS";
			SetConsoleTextAttribute(hConsole, 6);
			gotoxy (38, 26);cout<<"INGRESE SU RESPUESTA: ";
			SetConsoleTextAttribute(hConsole, 7);
			cin>>resultado;
			
				if (resultado == 'c')
			{
				SetConsoleTextAttribute(hConsole, 4);
				gotoxy(38,28); cout<<"SU RESPUESTA ES CORRECTA. USTED GANO "<<puntos1<<" PUNTOS ";
				k = puntos1 + k;
				getch();
				system("cls");
			}
			else
			{
				system ("cls");
				SetConsoleTextAttribute(hConsole, 6);
	    	gotoxy (50, 10); cout<<"                                     ";
	    	
	    		
	SetConsoleTextAttribute(hConsole, 3);
	
	int mattriz [20][40] = {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,1,0,0,0,0,0,1,1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,0,0,0,0,0,1,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,0,0,0,0,0,1,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};
	
	
	
    for (int i = 0; i < 20; i++)
    {
    	for (int j = 0; j < 40; j++)
    	{
    		if (mattriz [i][j] == 1) cout<<char(219);
    		else
    		{
    			cout<<" ";
			}
		}
		
		cout<<endl;
	}
	
		SetConsoleTextAttribute(hConsole, 6);
		gotoxy (50, 10); cout<<"EL JUGADOR #2 HA FINALIZADO EL RETO :) ";
		SetConsoleTextAttribute(hConsole, 2);
      	gotoxy (50, 11); cout<<"*************************************************** ";
      	SetConsoleTextAttribute(hConsole, 4);
      	gotoxy (50, 12); cout<<"--------------------------------------------------- ";
      	SetConsoleTextAttribute(hConsole, 6);
      	gotoxy (50, 14); cout<<"                 PUNTAJE:  "<<k;
      	SetConsoleTextAttribute(hConsole, 2);
    	gotoxy (50, 16); cout<<"*************************************************** ";
    	SetConsoleTextAttribute(hConsole, 4);
      	gotoxy (50, 17); cout<<"--------------------------------------------------- ";
	
	getch();
			  break;
			}
			
			system("cls");
		
	
	gotoxy (50, 10); cout<<"                                     "; 
	SetConsoleTextAttribute(hConsole, 3);
	
	int mattriz [20][40] = {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,1,0,0,0,0,0,1,1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,0,0,0,0,0,1,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,0,0,0,0,0,1,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};
	
	
	
    for (int i = 0; i < 20; i++)
    {
    	for (int j = 0; j < 40; j++)
    	{
    		if (mattriz [i][j] == 1) cout<<char(219);
    		else
    		{
    			cout<<" ";
			}
		}
		
		cout<<endl;
	}
	
				SetConsoleTextAttribute(hConsole, 6);
		gotoxy (50, 10); cout<<"EL JUGADOR #2 HA FINALIZADO CON EXITO EL RETO :) ";
		SetConsoleTextAttribute(hConsole, 2);
      	gotoxy (50, 11); cout<<"*************************************************** ";
      	SetConsoleTextAttribute(hConsole, 4);
      	gotoxy (50, 12); cout<<"--------------------------------------------------- ";
      	SetConsoleTextAttribute(hConsole, 6);
      	gotoxy (50, 14); cout<<"                 PUNTAJE:  "<<k;
      	SetConsoleTextAttribute(hConsole, 2);
    	gotoxy (50, 16); cout<<"*************************************************** ";
    	SetConsoleTextAttribute(hConsole, 4);
      	gotoxy (50, 17); cout<<"--------------------------------------------------- ";
	getch();

			break;
        }         
	}
	
	if(option=='2')
	{
		
		int op = 0;
		int op2 = 0;
		int op3 = 0;
		int op4 = 0;
		int operacion = 0;
		int result = 0;
		int puntos = 5;
		int m = 0;
		
		system ("cls");
		
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
           SetConsoleTextAttribute(hConsole, 9);
		for (int i = 0; i <= 20; i++)
		{  
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (32, 2); cout<<"OPERACIONES COMBINADAS ";
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(32,3); cout<<"--------------------- "; 
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (58, 2); cout<<" PUNTAJE:     "<<k;
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(58,3); cout<<" ---------------";
     	//Dado 1
			op = rand() % 10 + 1;
			op2 = rand() % 10 + 1;
			op3 = rand() % 10 + 1;
			op4 = rand() % 10 + 1;
			
			operacion = ((op + op2) - (op3) * op4);
			
			SetConsoleTextAttribute(hConsole, 9);
			gotoxy (34, 11);cout<<"CUAL ES EL RESULTADO DE LA SIGUIENTE OPERACION: ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(34,13); cout<<"----------------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
			gotoxy (45, 15);cout<<"((" <<op <<" + " << op2 << ") "<<" - (" <<op3<<") * "<<op4<<" )";
			gotoxy(35,17); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		    gotoxy(35,18); cout<<" *******************************************";
		    gotoxy(45,22); cout<<"INGRESE SU RESPUESTA:  ";
			cin>>result;
			
				if (result == operacion)
			{
				SetConsoleTextAttribute(hConsole, 5);
				gotoxy(45,26); cout<<"USTED GANO "<<puntos<<" PUNTOS ";
				k = puntos + k;
				getch();
			}
			else
			{
				gotoxy(45, 26); cout<<"EL RESULTADO ERA: "<<operacion;
				getch();
			  break;
			}
			
			system("cls");
			
        }         
	}
	
		if(option=='3')
	{
		
		int op = 0;
		int op2 = 0;
		int op3 = 0;
		int op4 = 0;
		int operacion = 0;
		int result = 0;
		int puntos = 5;
		int m = 0;
		
		system ("cls");
		
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
           SetConsoleTextAttribute(hConsole, 9);
		for (int i = 0; i <= 20; i++)
		{  
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (32, 2); cout<<"ADIVINA EL VALOR ";
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(32,3); cout<<"----------------- "; 
		SetConsoleTextAttribute(hConsole, 9);
		gotoxy (58, 2); cout<<" PUNTAJE:     "<<k;
		SetConsoleTextAttribute(hConsole, 5);
		gotoxy(58,3); cout<<" ---------------";
     	//Dado 1
			op = rand() % 10 + 1;
			op2 = rand() % 10 + 1;
			op3 = rand() % 10 + 1;
			op4 = rand() % 10 + 1;
			
			operacion = ((op + op2) - (op3) * op4);
			
				SetConsoleTextAttribute(hConsole, 9);
			gotoxy (34, 11);cout<<"CUAL ES EL RESULTADO DE LA SIGUIENTE OPERACION: ";
			SetConsoleTextAttribute(hConsole, 5);
	        gotoxy(34,13); cout<<"----------------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
			gotoxy (45, 15);cout<<"((" <<op <<" + " << op2 << ") "<<" - (__) * "<<op4<<" ) = "<<operacion;
			gotoxy(35,17); cout<<" -------------------------------------------"; 
	        SetConsoleTextAttribute(hConsole, 9);
		    gotoxy(35,18); cout<<" *******************************************";
		    gotoxy(45,22); cout<<"INGRESE SU RESPUESTA:  ";
			cin>>result;
			
				if (result == op3)
			{
				SetConsoleTextAttribute(hConsole, 5);
				gotoxy(45,26); cout<<"USTED GANO "<<puntos<<" PUNTOS ";
				k = puntos + k;
				getch();
			}
			else
			{
				gotoxy(45, 26); cout<<"EL RESULTADO ERA: "<<op3;
				getch();
				break;
			}
			
			system("cls");
			
        }         
	}
	
	}

	//ganadores
	system ("cls");
	
	
	
		//barra de carga
		
    SetConsoleTextAttribute(hConsole, 3);
	gotoxy(50, 21); cout<<"CARGANDO RESULTADOS...";
	
	
	for(int i =5; i < 115; i++)
	{
		gotoxy(i, 23);cout<<(char)177;
	}
	
		for(int i =5; i < 115; i++)
	{
		gotoxy(i, 23);cout<<(char)219;
		Sleep(55);
	}

	system ("cls");
		
	if(j>k)
	{     
	        system ("cls");
	        
		gotoxy (50, 10); cout<<"                             ";

	
	
	int matriz [20][40] = {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,1,0,0,0,0,0,1,1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,0,0,0,0,0,1,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,0,0,0,0,0,1,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};
	
	
	
    for (int i = 0; i < 20; i++)
    {
    	for (int j = 0; j < 40; j++)
    	{
    		if (matriz [i][j] == 1) cout<<char(219);
    		else
    		{
    			cout<<" ";
			}
		}
		
		cout<<endl;
	}
	
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 1);
	gotoxy(55,5); cout<<" -------------------------------- "; 
	SetConsoleTextAttribute(hConsole, 5);
	gotoxy(55,6); cout<<" |      MUCHAS FELICIDADES      | ";  
	SetConsoleTextAttribute(hConsole, 1);
	gotoxy(55,7); cout<<" -------------------------------- ";
	SetConsoleTextAttribute(hConsole, 6);
	gotoxy (55, 10); cout<<"  EL JUGADOR #1 ES EL GANADOR";
	SetConsoleTextAttribute(hConsole, 2);
	gotoxy (55, 12); cout<<"******************************";
	SetConsoleTextAttribute(hConsole, 4);
	gotoxy (55, 13); cout<<"------------------------------";
	SetConsoleTextAttribute(hConsole, 6);
	gotoxy (55, 15); cout<<"PUNTAJE DEL JUGADOR #1: "<<j;
	SetConsoleTextAttribute(hConsole, 2);
	gotoxy (55, 16); cout<<"******************************";
	SetConsoleTextAttribute(hConsole, 4);
	gotoxy (55, 17); cout<<"------------------------------";
	SetConsoleTextAttribute(hConsole, 6);
	gotoxy (55, 19); cout<<"PUNTAJE DEL JUGADOR #2: "<<k;
	SetConsoleTextAttribute(hConsole, 2);
	gotoxy (55,20);cout<<"******************************";
	SetConsoleTextAttribute(hConsole, 4);
	gotoxy (55, 21); cout<<"------------------------------";
	
	getch();
}



if (j<k)
{
	system ("cls");
	
	gotoxy (50, 10); cout<<"                             ";
	
	
	
	
	int matriz [20][40] = {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,1,0,0,0,0,0,1,1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,0,0,0,0,0,1,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,0,0,0,0,0,1,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};

 for (int i = 0; i < 20; i++)
    {
    	for (int j = 0; j < 40; j++)
    	{
    		if (matriz [i][j] == 1) cout<<char(219);
    		else
    		{
    			cout<<" ";
			}
		}
		
		cout<<endl;
	}
	
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 1);
	gotoxy(55,5); cout<<" -------------------------------- "; 
	SetConsoleTextAttribute(hConsole, 5);
	gotoxy(55,6); cout<<" |      MUCHAS FELICIDADES      | ";  
	SetConsoleTextAttribute(hConsole, 1);
	gotoxy(55,7); cout<<" -------------------------------- ";
	SetConsoleTextAttribute(hConsole, 6);
	gotoxy (55, 10); cout<<"  EL JUGADOR #2 ES EL GANADOR";
	SetConsoleTextAttribute(hConsole, 2);
	gotoxy (55, 12); cout<<"******************************";
	SetConsoleTextAttribute(hConsole, 4);
	gotoxy (55, 13); cout<<"------------------------------";
	SetConsoleTextAttribute(hConsole, 6);
	gotoxy (55, 15); cout<<"PUNTAJE DEL JUGADOR #1: "<<j;
	SetConsoleTextAttribute(hConsole, 2);
	gotoxy (55, 16); cout<<"******************************";
	SetConsoleTextAttribute(hConsole, 4);
	gotoxy (55, 17); cout<<"------------------------------";
	SetConsoleTextAttribute(hConsole, 6);
	gotoxy (55, 19); cout<<"PUNTAJE DEL JUGADOR #2: "<<k;
	SetConsoleTextAttribute(hConsole, 2);
	gotoxy (55,20);cout<<"******************************";
	SetConsoleTextAttribute(hConsole, 4);
	gotoxy (55, 21); cout<<"------------------------------";
	
	getch();
	
}

if (j==k)
{
	if(j!=0 && k!=0)
	{
			system ("cls");
	
	gotoxy (50, 10); cout<<"                             ";
	
	int matriz [20][40] = {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,1,0,0,0,0,0,1,1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,0,0,0,0,0,1,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,0,0,0,0,0,1,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};

 for (int i = 0; i < 20; i++)
    {
    	for (int j = 0; j < 40; j++)
    	{
    		if (matriz [i][j] == 1) cout<<char(219);
    		else
    		{
    			cout<<" ";
			}
		}
		
		cout<<endl;
	}
	
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 1);
	gotoxy(55,5); cout<<" -------------------------------- "; 
	SetConsoleTextAttribute(hConsole, 5);
	gotoxy(55,6); cout<<" |      MUCHAS FELICIDADES      | ";  
	SetConsoleTextAttribute(hConsole, 1);
	gotoxy(55,7); cout<<" -------------------------------- ";
	SetConsoleTextAttribute(hConsole, 6);
	gotoxy (55, 10); cout<<"AMBOS JUGADORES SON GANADORES";
	SetConsoleTextAttribute(hConsole, 2);
	gotoxy (55, 12); cout<<"******************************";
	SetConsoleTextAttribute(hConsole, 4);
	gotoxy (55, 13); cout<<"------------------------------";
	SetConsoleTextAttribute(hConsole, 6);
	gotoxy (55, 15); cout<<"PUNTAJE DEL JUGADOR #1: "<<j;
	SetConsoleTextAttribute(hConsole, 2);
	gotoxy (55, 16); cout<<"******************************";
	SetConsoleTextAttribute(hConsole, 4);
	gotoxy (55, 17); cout<<"------------------------------";
	SetConsoleTextAttribute(hConsole, 6);
	gotoxy (55, 19); cout<<"PUNTAJE DEL JUGADOR #2: "<<k;
	SetConsoleTextAttribute(hConsole, 2);
	gotoxy (55,20);cout<<"******************************";
	SetConsoleTextAttribute(hConsole, 4);
	gotoxy (55, 21); cout<<"------------------------------";
	
	getch();
	}
}

if (j== 0 && k==0)
{
	system ("cls");
	
	gotoxy (50, 10); cout<<"                             ";
	
	int matriz [20][40] = {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,0,0,0,0,0,1,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,0,0,0,0,0,1,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,1,0,0,0,0,0,1,1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};

 for (int i = 0; i < 20; i++)
    {
    	for (int j = 0; j < 40; j++)
    	{
    		if (matriz [i][j] == 1) cout<<char(219);
    		else
    		{
    			cout<<" ";
			}
		}
		
		cout<<endl;
	}
	
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 1);
	gotoxy(55,5); cout<<" -------------------------------- "; 
	SetConsoleTextAttribute(hConsole, 5);
	gotoxy(55,6); cout<<" |           OOPS :(            | ";  
	SetConsoleTextAttribute(hConsole, 1);
	gotoxy(55,7); cout<<" -------------------------------- ";
	SetConsoleTextAttribute(hConsole, 6);
	gotoxy (55, 10); cout<<"AMBOS JUGADORES SON PERDEDORES";
	SetConsoleTextAttribute(hConsole, 2);
	gotoxy (55, 12); cout<<"******************************";
	SetConsoleTextAttribute(hConsole, 4);
	gotoxy (55, 13); cout<<"------------------------------";
	SetConsoleTextAttribute(hConsole, 6);
	gotoxy (55, 15); cout<<"PUNTAJE DEL JUGADOR #1: "<<j;
	SetConsoleTextAttribute(hConsole, 2);
	gotoxy (55, 16); cout<<"******************************";
	SetConsoleTextAttribute(hConsole, 4);
	gotoxy (55, 17); cout<<"------------------------------";
	SetConsoleTextAttribute(hConsole, 6);
	gotoxy (55, 19); cout<<"PUNTAJE DEL JUGADOR #2: "<<k;
	SetConsoleTextAttribute(hConsole, 2);
	gotoxy (55,20);cout<<"******************************";
	SetConsoleTextAttribute(hConsole, 4);
	gotoxy (55, 21); cout<<"------------------------------";
	
	getch();
	
}

//finalizar

system ("cls");

       gotoxy (40, 10); cout<<"                                                                                           ";
     
     SetConsoleTextAttribute(hConsole, 3);

     	int matriz [21][76] = {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,0,0,1,1,1,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,0,0,1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1,1,1,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,1,1,1,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,1,1,1,1,0,0,1,1,1,1,1,0,0,1,1,0,0,0,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,1,0,1,0,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,1,1,0,0,0,0,0,1,0,0,0,0,1,0,0,1,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,1,1,1,1,0,0,1,0,0,0,1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};

 for (int i = 0; i < 21; i++)
    {
    	for (int j = 0; j < 76; j++)
    	{
    		if (matriz [i][j] == 1) cout<<char(219);
    		else
    		{
    			cout<<" ";
			}
		}
		
		cout<<endl;
	}
     
     
     
     
     
     
    SetConsoleTextAttribute(hConsole, 6);
	gotoxy (60, 9); cout<<"               AGRADECEMOS SU PARTICIPACION                     ";  
	SetConsoleTextAttribute(hConsole, 2);
	gotoxy (60, 10); cout<<"*******************************************************";
	SetConsoleTextAttribute(hConsole, 4);
	gotoxy (60, 11); cout<<"-------------------------------------------------------";
	SetConsoleTextAttribute(hConsole, 6);
	//gotoxy (60, 12); cout<<"                                                       ";
	gotoxy (60, 13);cout<<"               NUESTRO ALREDEDOR SON NUMEROS :)";
	SetConsoleTextAttribute(hConsole, 2);
	gotoxy (60, 14);cout<<"*********************************************************";
	SetConsoleTextAttribute(hConsole, 4);
	gotoxy (60, 15);cout<<"----------------------------------------------------------";
//	gotoxy (60, 16);cout<<"                  ";
//	gotoxy (60, 17);cout<<"                  ";
SetConsoleTextAttribute(hConsole, 6);
	gotoxy(60,20); cout<<"                    NUNCA TE DESANIMES                  ";
	getch();
	
	
	

}
