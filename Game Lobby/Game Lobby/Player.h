#include "stdafx.h"

class Player
{
public:
	Player(const std::string& name = "");
	std::string GetName() const;
	Player* GetNext() const;
	void SetNext(Player* next);
private:
	std::string m_Name; // player name
	Player* m_pNext; // pointer to next player
};