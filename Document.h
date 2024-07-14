#pragma once
#include <iostream>
using namespace std;
class Document
{
	public:
	string Category;
	string Publication_Year;
	string Library_Code;

	string Status;

	Document();
	Document(string a, string b, string c, string e);
	void setCategory(const string& a);
	string& getCategory();
	void setPublication_Year(const string& b);
	string& getPublication_Year();
	void setLibrary_Code(const string& c);
	string& getLibrary_Code();
	void setStatus(const string& e);
	string& getStatus();

};

