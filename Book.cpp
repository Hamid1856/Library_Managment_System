#include "Book.h"
Book::Book() {

}
Book::Book(string a, string b, string c, string e, string Book_Name1, string Book_Author_Name1, string New_Book_Issue_Date, string New_Book_Return_Date, string ISBN1, string Total_Copies, string Copy_Number1) {
	Book_Name = Book_Name1;
	Book_Author_Name = Book_Author_Name1;
	ISBN = ISBN1;
	Total_Copies_of_Book = Total_Copies;
	Copy_Number = Copy_Number1;
	Book_Issue_Date = New_Book_Issue_Date;
	Book_Return_Date = New_Book_Return_Date;
}
void Book::setBook_Name(const string& Book_Name1) {
	Book_Name = Book_Name1;
}
void Book::setBook_Author_Name(const string& Book_Author_Name1) {
	Book_Author_Name = Book_Author_Name1;
}
void Book::setBook_Return_Date(const string& New_Book_Return_Date) {
	Book_Return_Date = New_Book_Return_Date;
}
void Book::setBook_Issue_Date(const string& New_Book_Issue_Date) {
	Book_Issue_Date = New_Book_Issue_Date;
}
void Book::setISBN(const string& ISBN1) {
	ISBN = ISBN1;
}
void Book::setTotal_Copies_of_Book(const string& Total_Copies) {
	Total_Copies_of_Book = Total_Copies;
}
void Book::setCopy_Number(const string& Copy_Number1) {
	Copy_Number = Copy_Number1;
}
string& Book::getBook_Name() {
	return Book_Name;
}
string& Book::getBook_Issue_Date() {
	return Book_Issue_Date;
}
string& Book::getBook_Return_Date() {
	return Book_Return_Date;
}
string& Book::getBook_Author_Name() {
	return Book_Author_Name;
}

string& Book::getISBN() {
	return ISBN;
}
string& Book::getTotal_Copies_of_Book() {
	return Total_Copies_of_Book;
}
string& Book::getCopy_Number() {
	return Copy_Number;
}

