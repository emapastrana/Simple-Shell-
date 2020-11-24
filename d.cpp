#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <fstream>
using namespace std;


bool onCommand;
bool recognized = true;


string command, input;


void show();


void lexer(string cmd);


void leerDeArchivo(string);


int main()
{
	while(command != "exit")
	{
		show();
	
		if(onCommand)
		{
			lexer(command);
		}
	}
	return 0;
}


void lexer(string cmd)
{

	if(cmd == "print")
	{
		//dividir
		string com;
		
		getline(cin, com);
		
		if(com == " ")
		{
			cout << "Error, no commands passed" << endl;
		}
		
		//funcion
		if(com != "")
		{
		cout << com << endl;
		}
		
		//limpiar
		com = " ";
		
		command = " ";
		
		cmd = " ";

	}
	if(cmd == "clear")
	{
		//dividir
		string com;
		
		getline(cin, com);

		
		//funcion
		
		system("clear");
		
		
		//limpiar
		com = " ";
		
		command = " ";
		
		cmd = " ";
	}
	if(cmd == "sum")
	{
		
		int num1, num2, res;
		
		//funcion
		cin >> num1;
		cin >> num2;
		
		res = num1+num2;

		cout << res << endl;
		
		//limpiar
		
		command = " ";
		
		cmd = " ";
		
		num1 = 0;
		
		num2 = 0;
		
		res = 0;

	}
	if(cmd == "min")
	{
		
		int num1, num2, res;
		
		//funcion
		cin >> num1;
		cin >> num2;
		
		res = num1-num2;

		cout << res << endl;
		
		//limpiar
		
		command = " ";
		
		cmd = " ";
		
		num1 = 0;
		
		num2 = 0;
		
		res = 0;
	}
	if(cmd == "game")
	{
		
		//funcion
		system("./game");
		
		
		//limpiar
		command = " ";
		
		cmd = " ";
	}
	if(cmd == "help")
	{
		
		cout << "Welcome to simple shell 1.0!" << endl;
		cout << "There are currently 6 commands available" << endl;
		cout << "print <string>, sum <two integers>, min <two integers>, clear, game and exit" << endl;
		cout << "have fun!! <3" << endl;
		
		sleep(3000);
			
		//limpiar
		
		command = " ";
		
		cmd = " ";

	}
	
	
	
}
void show()
{
		cout << "shell> ";
		cin >> command;
		onCommand = true;
}
