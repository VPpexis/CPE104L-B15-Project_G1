#include "playerList.h"

//constructor
playerList::playerList(){
    head = 0;
}

//imports the data from file to program.
void playerList::importData(std::string n){

}

//exports the data from program to file.
void playerList::exportData(){

}

//prints a playerNode.
void playerList::print(playerNode *n){
    std::cout << "First Name: " << n->getFirstName() << std::endl
              << "Last Name: "  << n->getLastName() << std::endl
              << "Email: " << n->getEmail() << std::endl
              << "User: " << n->getUserName() << std::endl
              << "Password: " << n->getPassword() << "\n\n";
}

//prints all the playerNode in the linkedlist.
void playerList::printAll(){

}

//sorts the playerNode from highest to lowest.
void playerList::sort(){

}

//insert a new Playernode to the scoreboard.
void playerList::insert(){

}

//remove a playerNode from the list.
void playerList::remove(playerNode *n){

}

//remove all playerNode in the list.
void playerList::removeAll(){

}


playerList::~playerList()
{
    //dtor
}
