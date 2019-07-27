#pragma once
#include <iostream>
#include <algorithm>
#include <fstream>
#include <list>
#include "playerNode.h"

#ifdef playerList_EXPORTS
#define playerList_API __declspec(dllimport)
#else
#define playerList_API __declspec(dllexport)
#endif // playerList_EXPORTS

extern "C" class playerList_API playerList {
public:
	//constructor
	playerList();
	
	///imports the data from file to program.
	void importData(std::string n);

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

	//Overloads the operator '<' for the playerNode.
	//bool operator <(playerNode& n1, playerNode& n2);

	//deconstructor.
	virtual ~playerList();
private:
	std::list<playerNode> headList;	//variable that hols the playerList data.

};