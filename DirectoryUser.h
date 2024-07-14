#pragma once
#include "Student.h"
#include "Teacher.h"
#include "Library_Staff.h"
class DirectoryUser
{
private:
	Student stdArray[50];
	Teacher tArray[50];
	Library_Staff sArray[50];
public:

	void Teacher_Login();
	void Student_Login();
	void Teacher_Menue();
	void Student_Menue();


};

