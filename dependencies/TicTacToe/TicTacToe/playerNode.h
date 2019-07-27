#pragma once
#include <iostream>
#include <string>
#include <stdio.h>

#ifdef playerNode_EXPORTS
#define playerNode_API __declspec(dllimport)
#else
#define playerNode_API __declspec(dllexport)
#endif // playerNode_EXPORTS

extern "C" class playerNode_API playerNode {
public:
	playerNode() {
		userName = "Guest";
		firstName = "Guest";
		lastName = "";
		email = "Guest";
		password = "";
		score = 0;
	}

	//returns username.
	std::string getUserName() { return userName; }
	
	//returns firstname.
	std::string getFirstName() { return firstName; }

	//returns lastname.
	std::string getLastName() { return lastName; }

	//returns email.
	std::string getEmail() { return email; }

	//returns password.
	std::string getPassword() { return password; }

	//return score.
	int getScore() { return score; }

	//set username.
	void setUserName(std::string n) { userName = n; }

	//set firstname.
	void setFirstName(std::string n) { firstName = n; }

	//set lastname.
	void setLastName(std::string n) { lastName = n; }

	//set email.
	void setEmail(std::string n) { email = n; }

	//set password.
	void setPassword(std::string n) { password = n; }

	//set score.
	void setScore(int n) { score = n; }

	//deconstructor.
	virtual ~playerNode(){}
private:
	std::string userName;
	std::string firstName;
	std::string lastName;
	std::string email;
	std::string password;
	int score;
};