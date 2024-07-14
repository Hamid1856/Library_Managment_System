
#pragma once
#include "User.h"
class Student :public User
{
private:
	string Name;
	string Roll_No;
public:
	// Default Contsructor
	Student();
	// Overloaded Constructor
	Student(string New_User_Type, int New_Account_No, int New_Total_No_of_Book, string New_Return_Date, string New_Book, int New_Total_Fine, string Student_Name, string New_Roll_No);
	void setName(string Student_Name);
	string getName();
	void setRoll_No(string Roll_No1);
	string getRoll_No();

};


