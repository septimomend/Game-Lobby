#include "stdafx.h"
#include "Player.h"

class Lobby
{
	friend std::ostream& operator<<(std::ostream& os, const Lobby& aLobby);
public:
	Lobby();
	~Lobby();
	void AddPlayer(); // create new object in heap and push back to list
	void RemovePlayer(); // delete first class Player object and clear memory
	void Clear(); // delete all class Player objects in list
private:
	Player* m_pHead; // pointer to first object in queue (begin of queue)
	Player* m_pTail; // pointer to last object in queue
};