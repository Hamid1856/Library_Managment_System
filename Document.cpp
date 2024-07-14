#include "Document.h"

// Default Constructor
Document::Document() {

}
//OverLoaded Constructor
Document::Document(string a, string b, string c, string e) {
	Category = a;
	Publication_Year = b;
	Library_Code = c;

	Status = e;
}
// Setters
void Document::setCategory(const string &New_Category) {
	Category = New_Category;
}
void Document::setPublication_Year(const string &New_Publication_Year) {
	Publication_Year = New_Publication_Year;

}
void Document::setLibrary_Code(const string &New_Library_Code) {
	Library_Code = New_Library_Code;
}

void Document::setStatus(const string &New_Status) {
	Status = New_Status;
}

// Getters
string& Document::getCategory() {
	return Category;
}
string& Document::getPublication_Year() {
	return Publication_Year;
}
string& Document::getLibrary_Code() {
	return Library_Code;
}

string& Document::getStatus() {
	return Status;
}

