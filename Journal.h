#pragma once
#include "Document.h"
class Journal :public Document
{
private:
	string Journal_Name;
public:
	Journal();
	Journal(string a, string b, string c, string e,  string New_Journal_Name);
	void setJournal_Name(const string& New_Journal_Name);
	string& getJournal_Name();
};






