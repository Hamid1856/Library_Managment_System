#include "Teacher.h"
#include "User.h"
Teacher::Teacher() {

}
Teacher::Teacher(string New_User_Type, int New_Account_No, int New_Total_No_of_Book, string New_Return_Date, string New_Book, int New_Total_Fine, string New_Teacher_Name, string New_Employee_Code) {
	Teacher_Name = New_Teacher_Name;
	Employee_Code = New_Employee_Code;
}

void Teacher::setTeacher_Name(const string& New_Teacher_Name) {
	Teacher_Name = New_Teacher_Name;

}
void Teacher::setEmployee_Code(const string& New_Employee_Code) {

	Employee_Code = New_Employee_Code;

}
string Teacher::getTeacher_Name() {
	return Teacher_Name;
}
string Teacher::getEmployee_Code() {
	return Employee_Code;
}



