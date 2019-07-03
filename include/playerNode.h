#ifndef PLAYERNODE_H
#define PLAYERNODE_H

#include <iostream>
#include <stdio.h>
#include <string>

class playerNode
{
    public:
        //constructor.
        playerNode(){
            userName = "Guest";
            firstName = "Guest";
            lastName = "";
            email = "Guest";
            password = "";
            score = 0;
            frontLink = 0;
            backLink = 0;
        }

        //returns username.
        std::string getUserName(){return userName;}

        //returns firstname.
        std::string getFirstName(){return firstName;}

        //returns lastname.
        std::string getLastName(){return lastName;}

        //returns email.
        std::string getEmail(){return email;}

        //return password.
        std::string getPassword(){return password;}

        //return score.
        int getScore(){return score;}

        //set username.
        void setUserName(std::string n){userName = n;}

        //set firstname.
        void setFirstName(std::string n){firstName = n;}

        //set lastname.
        void setLastName(std::string n){lastName = n;}

        //set email.
        void setEmail(std::string n){email = n;}

        //set password.
        void setPassword(std::string n){password = n;}

        //set score.
        void setScore(int n){score = n;}

        //compare this to another playerNode.
        bool compareTo(playerNode *n){
            bool decision;

            if(this->getFirstName() == n->getFirstName() &&
               this->getLastName() == n->getLastName() &&
               this->getEmail() == n->getEmail() &&
               this->getPassword() == n->getPassword()){return true;}
            else{return false;}
        }

        virtual ~playerNode() {}

    private:
        std::string userName;
        std::string firstName;
        std::string lastName;
        std::string email;
        std::string password;
        int score;

        playerNode *frontLink;
        playerNode *backLink;
};

#endif // PLAYERNODE_H
