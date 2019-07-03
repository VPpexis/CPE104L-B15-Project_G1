#ifndef PLAYERLIST_H
#define PLAYERLIST_H

#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>
#include "playerNode.h"

class playerList{
    public:
        //constructor.
        playerList();

        //imports the data from file to program.
        void importData(std::string n);

        //exports the data from program to file.
        void exportData();

        //prints a playerNode.
        void print(playerNode *n);

        //prints all the playerNode in the linkedlist.
        void printAll();

        //sorts the playerNode from highest to lowest.
        void sort();

        //insert a new Playernode to the scoreboard.
        void insert(playerNode *n);

        //remove a playerNode from the list.
        void remove(playerNode *n);

        //remove all playerNode in the list.
        void removeAll();

        //deconstructor
        virtual ~playerList();
    private:
        playerNode *head;
};

#endif // PLAYERLIST_H
