#pragma once
#include <iostream>
#include <algorithm>
#include <fstream>
#include <list>
#include "playerNode.h"

class playerList {
public:
	//constructor
	playerList();

    //checks if inputed playerNode is wtihin the list.
	bool check(playerNode& n);

	//imports the data from file to program.
	bool importData(std::string n);

	//exports the data from program to file.
	void exportData();

	//prints a playerNode.
	const playerNode& print(playerNode& n);

	//prints all the playerNode in the linkedList.
	void printAll();

	//sorts the playerNode from highest to lowest acc.
	void sort();

	//insert a new PlayerNode to the scoreboard.
	void insert(playerNode* n);

	//remove a playerNode form the List.
	void remove(playerNode* n);

	//remove all playerNode in the list.
	void removeAll();

	//check if string is in 

	//Overloads the operator '<' for the playerNode.
	bool myFunction(playerNode& n1, playerNode& n2) { return (n1.getScore() < n2.getScore()); }

	//deconstructor.
	virtual ~playerList();

private:
	std::list<playerNode> headList;	//variable that hols the playerList data.

};
