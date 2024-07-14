#pragma once
#include "Document.h"
class Book :public Document
{
public:
	string Book_Name;
	string Book_Author_Name;
	string ISBN;
	string Total_Copies_of_Book;
	string Copy_Number;
	string Book_Issue_Date;
	string Book_Return_Date;

public:
	Book();
	Book(string a, string b, string c, string e, string Book_Name1, string Book_Author_Name1, string New_Book_Issue_Date, string New_Book_Return_Date, string ISBN1, string Total_Copies, string Copy_Number1);
	void setBook_Name(const string &Book_Name1);
	string& getBook_Name();
	void setBook_Author_Name(const string &Book_Author1);
	string& getBook_Author_Name();
	void setISBN(const string& ISBN1);
	string& getISBN();
	void setBook_Issue_Date(const string &New_Book_Issue_Date);
	string& getBook_Issue_Date();
	void setBook_Return_Date(const string &New_Book_Return_Date);
	string& getBook_Return_Date();
	void setTotal_Copies_of_Book(const string& Total_Copies);
	string& getTotal_Copies_of_Book();
	void setCopy_Number(const string& Copy_Number);
	string& getCopy_Number();


};


