// Game Lobby.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Lobby.h"

using namespace std;

int main()
{
	Lobby myLobby;
	int choice;
	do
	{
		cout << myLobby;
		cout << "\tGAME LOBBY" << endl;
		cout << "0 - Exit the program." << endl;
		cout << "1 - Add a player to the lobby." << endl;
		cout << "2 - Remove player from the lobby." << endl;
		cout << "3 - Clear the lobby." << endl;
		cout << "\nEnter choice: ";
		cin >> choice;
		switch (choice)
		{
		case 0: 
			cout << "Good luck!" << endl;
			break;
		case 1:
			myLobby.AddPlayer();
			break;
		case 2:
			myLobby.RemovePlayer();
			break;
		case 3:
			myLobby.Clear();
			break;
		default:
			cout << "That was not valide choice" << endl;
		}
	} while (choice != 0);
    return 0;
}

