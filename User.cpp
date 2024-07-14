#include "User.h"
#include <iostream>
using namespace std;
User::User() {


}
User::User(string New_User_Type, int New_Account_No, int New_Total_No_of_Books, string New_Issue_Date, string New_Return_Date, string New_Book, int New_Total_Fine) {
	User_Type = New_User_Type;
	Account_No = New_Account_No;
	Book = New_Book;
	Issue_Date = New_Issue_Date;
	Return_Date = New_Return_Date;
	Total_No_of_Books = 0;
	Total_Fine = 0;

}
void User::setUser_Type(string New_User_Type) {
	User_Type = New_User_Type;

}
void User::setIssue_Date(string New_Issue_Date) {
	Issue_Date = New_Issue_Date;
}


void User::setAccount_No(int New_Account_No) {
	Account_No = New_Account_No;
}
void User::setBook(string New_Book) {
	Book = New_Book;
}
void User::setReturn_Date(string New_Return_Date) {
	Return_Date = New_Return_Date;
}
void User::setTotal_Fine(int New_Total_Fine) {
	Total_Fine = New_Total_Fine;

}
void User::setTotal_No_of_Books(int New_Total_No_of_Books) {
	Total_No_of_Books = New_Total_No_of_Books;
}
string User::getUser_Type() {
	return User_Type;
}
string User::getAccount_No() {
	return Account_No;
}
string User::getBook() {
	return Book;

}
string User::getIssue_Date() {
	return Issue_Date;
}
string User::getReturn_Date() {
	return Return_Date;

}
int User::getTotal_Fine() {
	return Total_Fine;
}
int User::getTotal_No_of_Books() {
	return Total_No_of_Books;
}




