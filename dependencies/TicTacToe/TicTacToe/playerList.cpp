#include <iostream>
#include <fstream>
#include <list>
#include <cassert>
#include <algorithm>
#include "pch.h"
#include "playerList.h"
#include "playerNode.h"


playerList::playerList()
{
	//headList.clear;
}

void playerList::importData(std::string n)
{
	std::ifstream ifs;
	char x[50];
	ifs.open(n);
	playerNode* temp = 0;

	if (ifs.is_open()) {
		while (!ifs.is_open()) {
			temp = new playerNode;

			ifs.getline(x, 50, ',');
			temp->setUserName(x);
			ifs.getline(x, 50, ',');
			temp->setFirstName(x);
			ifs.getline(x, 50, ',');
			temp->setLastName(x);
			ifs.getline(x, 50, ',');
			temp->setEmail(x);
			ifs.getline(x, 50, ',');
			temp->setPassword(x);
			ifs.getline(x, 50);
			temp->setScore(atoi(x));

			headList.push_back(*temp);
		}
	}else {
	}
}

void playerList::exportData()
{
}

const playerNode& playerList::print(playerNode& n)
{
	//Code should return a playernode to be printed in the gui.
	return n;
}

void playerList::sort()
{
	//The Code should sort the list from highest to lowest accroding to their score.
}

playerList::~playerList()
{
}
