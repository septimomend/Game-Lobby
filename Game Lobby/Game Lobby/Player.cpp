#include "stdafx.h"
#include "Player.h"

using namespace std;

Player::Player(const string& name) : m_Name(name), m_pNext(0) // set m_pNext pointer as null
{
}

string Player::GetName() const
{
	return m_Name;
}

Player* Player::GetNext() const
{
	return m_pNext;
}

void Player::SetNext(Player* next)
{
	m_pNext = next;
}