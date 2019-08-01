#include <iostream>
#include <fstream>
#include <list>
#include <cassert>
#include <algorithm>
#include "playerList.h"
#include "playerNode.h"


playerList::playerList()
{
	//headList.clear;
}

bool playerList::check(playerNode& n)
{
	playerNode found;
	std::list<playerNode>::iterator first = headList.begin();
	std::list<playerNode>::iterator last = headList.end();

	for (; first != last; first++) {
		playerNode temp = *first;
		if ((n.getUserName() == temp.getUserName()) && (n.getPassword() == temp.getPassword())) {
			n = *first;
			return true;
		}
	}
	if (first == last) { n = playerNode(); return false; }
}

bool playerList::importData(std::string n)
{
	std::ifstream ifs;
	char x[50];
	ifs.open(n);
	playerNode* temp = 0;

	if (ifs.is_open()) {
		while (!ifs.is_open()) {
			temp = new playerNode;

			ifs.get(x, 50, ',');
			std::cout << x << std::endl;
			std::cout << "eh" << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			temp->setUserName(x);
			ifs.get(x, 50, ',');
			std::cout << x << std::endl;
			temp->setFirstName(x);
			ifs.get(x, 50, ',');
			temp->setLastName(x);
			ifs.get(x, 50, ',');
			temp->setEmail(x);
			ifs.get(x, 50, ',');
			temp->setPassword(x);
			ifs.getline(x, 50);
			temp->setScore(atoi(x));

			headList.push_back(*temp);
		}

		return true;
	}
	else {
		return false;
	}
}


const playerNode& playerList::print(playerNode& n)
{
	//Code should return a playernode to be printed in the gui.
	return n;
}

void playerList::sort()
{
	//std::sort (headList.begin(), headList.end(), myFunction);
	struct CompareScore {
		bool operator()(playerNode* n1, playerNode* n2) { return (n1->getScore() < n2->getScore()); }
	};

	headList.sort();
}

playerList::~playerList()
{
}
