#pragma once
#include <iostream>
#include <string>
using namespace std;
class User
{
private:
	string User_Type;
	string Account_No;
	int Total_No_of_Books = 0;
	string Issue_Date;
	string Return_Date;
	string Book;
	int Total_Fine = 0;
public:
	User();
	User(string New_User_Type, int New_Account_No, int New_Total_No_of_Books, string New_Issue_Date, string New_Return_Date, string New_Book, int New_Total_Fine);
	void setUser_Type(string New_User_Type);
	string getUser_Type();
	void setAccount_No(int New_Account_No);
	string getAccount_No();
	void setTotal_No_of_Books(int New_Total_No_of_Books);
	int getTotal_No_of_Books();
	void setIssue_Date(string New_Issue_Date);
	string getIssue_Date();
	void setReturn_Date(string New_Return_Date);
	string getReturn_Date();
	void setBook(string New_Book);
	string getBook();
	void setTotal_Fine(int New_Total_Fine);
	int getTotal_Fine();


};


