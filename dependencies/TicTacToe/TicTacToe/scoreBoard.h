#pragma once
#include <iostream>
#include <stdio.h>
#include <list>
#include "playerNode.h"

#ifdef scoreBoard_EXPORT
#define scoreBoard_API __declspec(dllimport)
#else
#define scoreBoard_API __declspec(dllexport)
#endif // scoreBoard_EXPORT

class scoreBoard
{
public:
	//constructor.
	scoreBoard();
	
	//trasfer only top 10 players in the playerLIst.
	void getplayerList(std::list<playerNode>& n);

	//returns the scoreList.
	void getScoreList();

	//removes all the playerNode in the array.
	void removeAll();

	//deconstructor.
	~scoreBoard();

private:
	playerNode *head;
};

