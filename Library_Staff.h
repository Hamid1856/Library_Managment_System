#pragma once
#include "User.h"
class Library_Staff :public User
{
private:
	string Staff_Name;
	string Staff_Code;
public:
	Library_Staff();

	Library_Staff(string New_User_Type, int New_Account_No, int New_Total_No_of_Book, string New_Return_Date, string New_Book, int New_Total_Fine, string New_Staff_Name, string New_Staff_Code);
	void setStaff_Name(string New_Staff_Name);
	string getStaff_Name();
	void setStaff_Code(string New_Staff_Code);
	string getStaff_Code();
};
