#ifndef SCORELIST_H
#define SCORELIST_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct playerData{
    string name;
    string score;
};

class ScoreList{
    public:
        ScoreList();
        void importData();
        void sortData(playerData data);
        virtual ~ScoreList();

    private:
        playerData playerList[10];

};

#endif // SCORELIST_H
