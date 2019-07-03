#include "playerList.h"

//constructor
playerList::playerList(){
    head = 0;
}

//imports the data from file to program.
void playerList::importData(std::string n){
    std::ifstream ifs;
    char x[50];
    std::string x;
    playerNode *temp= 0;
    ifs.open(n);

    if(ifs.is_open()){
        while(!ifs.eof()){
            temp = new playerNode;

            ifs.getline(x, 50, ';');
            temp->setUserName(x);
            ifs.getline(x, 50, ';');
            temp->setFirstName(x);
            ifs.getline(x, 50, ';');
            temp->setLastName(x);
            ifs.getline()

            insert(temp);
        }

    }else{
        cout << "No file " << n << " exist." << std::endl;
    }

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
    playerNode *temp = 0;
    temp = head;

    if(head!=0){
        while(temp!=0){
            print(temp);
            temp = temp->backLink;
        }
    }else{
        std::cout << "Playerlist contains no data." << std::endl;
    }
}

//sorts the playerNode from highest to lowest.
void playerList::sort(){

}

//insert a new Playernode to the scoreboard.
void playerList::insert(playerNode *n){

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
