#include "Library_Staff.h"
#include "User.h"
using namespace std;
Library_Staff::Library_Staff() {

}
Library_Staff::Library_Staff(string New_User_Type, int New_Account_No, int New_Total_No_of_Book, string New_Return_Date, string New_Book, int New_Total_Fine, string New_Staff_Name, string New_Staff_Code) {
	Staff_Name = New_Staff_Name;
	Staff_Code = New_Staff_Code;
}

void Library_Staff::setStaff_Name(string New_Staff_Name) {
	Staff_Name = New_Staff_Name;
}
void Library_Staff::setStaff_Code(string New_Staff_Code) {
	Staff_Code = New_Staff_Code;
}
string Library_Staff::getStaff_Name() {
	return Staff_Name;
}
string Library_Staff::getStaff_Code() {
	return Staff_Code;
}

