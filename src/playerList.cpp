#include "playerList.h"

//constructor
playerList::playerList(){
    head = 0;
}

//imports the data from file to program.
void playerList::importData(std::string n){
    std::ifstream ifs;
    char x[50];
    playerNode *temp= 0;
    ifs.open(n);

    if(ifs.is_open()){
        while(!ifs.eof()){
            temp = new playerNode;
            temp->backLink = 0;
            temp->frontLink = 0;

            ifs.getline(x, 50, ';');
            temp->setUserName(x);
            ifs.getline(x, 50, ';');
            temp->setFirstName(x);
            ifs.getline(x, 50, ';');
            temp->setLastName(x);
            ifs.getline(x, 50, ';');
            temp->setEmail(x);
            ifs.getline(x, 50, ';');
            temp->setPassword(x);
            ifs.getline(x, 50);
            temp->setScore(atoi(x));

            insert(temp);
        }
    }else{
        std::cout << "No file " << n << " exist." << std::endl;
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
              << "Password: " << n->getPassword() << std::endl
              << "Score: " << n->getScore() << "\n\n";
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
    if(head == 0){
        head = n;
    }else{
        n->backLink = head;
        head->frontLink = n;
        head = n;
    }

}

//remove a playerNode from the list.
void playerList::remove(playerNode *n){

}

//remove all playerNode in the list.
void playerList::removeAll(){
    playerNode *temp = head;
    if(head->frontLink == 0){
        delete head;
    }else{
        while(temp->frontLink != 0){
            temp = temp->backLink;
        }
        while(head != 0){
            delete temp->backLink;
            temp = temp->frontLink;
        }
    }
}


playerList::~playerList()
{
    removeAll();
}
