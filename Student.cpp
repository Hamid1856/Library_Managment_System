#include "Student.h"

Student::Student() {

}
Student::Student(string New_User_Type, int New_Account_No, int New_Total_No_of_Book, string New_Return_Date, string New_Book, int New_Total_Fine, string Student_Name, string New_Roll_No) {
	Name = Student_Name;
	Roll_No = New_Roll_No;
}
void Student::setName(string Student_Name) {
	Name = Student_Name;
}
string Student::getName() {
	return Name;
}
void Student::setRoll_No(string New_Roll_No) {
	Roll_No = New_Roll_No;
}
string Student::getRoll_No() {
	return Roll_No;
}
