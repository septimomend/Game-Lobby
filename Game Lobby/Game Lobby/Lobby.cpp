#include "stdafx.h"
#include "Lobby.h"

using namespace std;

Lobby::Lobby() : m_pHead(0), m_pTail(0) //set m_pHead as nullptr
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
	Player* pNewPlayer = new Player(name); // create new object named <name>
	// if list is empty set as first
	if (m_pHead == 0)
		m_pHead = pNewPlayer;
	// else add player to the end of list
	else
	{
		m_pTail = m_pHead; // pointer to class Player object
		while (m_pTail->GetNext() != 0) // if next is not nullptr
		{
			m_pTail = m_pTail->GetNext(); // get next object to pointer
		}
		m_pTail->SetNext(pNewPlayer); // set new object to this pointer
	}
}

// delete first class Player object and clear memory
//
void Lobby::RemovePlayer()
{
	if (m_pHead == 0) // if no one object
		cout << "The game lobby is empty. No one to remove." << endl;
	else
	{
		Player* pTemp = m_pHead; // pTemp is pointer to first object
		m_pHead = m_pHead->GetNext(); // go to next object in order to can't delete m_pHead
		delete pTemp; // delete first object
	}
}

// delete all class Player objects in list
//
void Lobby::Clear()
{
	while (m_pHead != 0)
		RemovePlayer(); // remove players untill m_pHead reach the end of the list (nullptr)
}

// overload operator << and for displaying object of class Lobby in cout
//
ostream& operator<<(ostream& os, const Lobby& aLobby)
{
	Player* pIter = aLobby.m_pHead; // pIter is pointer to first object
	os << "Here's who's in the game lobby:" << endl;
	if (pIter == 0) // if no one object
		os << "> The lobby is empty." << endl;
	// display players untill m_pHead reach the end of the list
	//
	else
	{
		while (pIter != 0) 
		{
			os << pIter->GetName() << endl;
			pIter = pIter->GetNext();
		}
	}
	return os;
}