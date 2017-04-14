#include "stdafx.h"
#include "Lobby.h"

using namespace std;

Lobby::Lobby() : m_pHead(0) //set m_pHead as nullptr
{
}

Lobby::~Lobby()
{
	Clear(); // delete all class Player objects in list
}

// add new player
//
void Lobby::AddPlayer()
{
	cout << "Please enter the name of the new player: ";
	string name;
	cin >> name;
	Player* pNewPlayer = new Player(name);
	// if list is empty set as first
	if (m_pHead == 0)
		m_pHead = pNewPlayer;
	// else add player to the end of list
	else
	{
		Player* pIter = m_pHead; // pointer to class Player object
		while (pIter->GetNext() != 0) // if next is not nullptr
		{
			pIter = pIter->GetNext();
		}
		pIter->SetNext(pNewPlayer); // set new object to this pointer
	}
}

// delete first class Player object and clear memory
//
void RemovePlayer()
{
	//TODO
}

// delete all class Player objects in list
//
void Clear()
{
	//TODO
}