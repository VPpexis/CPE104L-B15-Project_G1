#include "ScoreList.h"

ScoreList::ScoreList(){
    //ctor
}
//imports data from outsoucre to program.
void ScoreList::importData(){
    //Variable decleartions.
    int i = 0;
    char x[50];

    ifstream ifs;
    ifs.open("data.txt");

    if(ifs.is_open()){
        while(ifs.eof()){
            if
        }
    }else{
        cout << "No data is open." << endl;
    }


}

ScoreList::~ScoreList(){
    //dtor
}
