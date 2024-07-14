#pragma once
#include "user.h"
class Teacher :public User
{
private:
	string Teacher_Name;
	string Employee_Code;
public:
	Teacher();
	Teacher(string New_User_Type, int New_Account_No, int New_Total_No_of_Book, string New_Return_Date, string New_Book, int New_Total_Fine, string New_Teacher_Name, string New_Employee_Code);
	void setTeacher_Name(const string& New_Teacher_Name);
	string getTeacher_Name();
	void setEmployee_Code(const string& New_Employee_Code);
	string getEmployee_Code();

};