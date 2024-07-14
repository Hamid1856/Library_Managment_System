
#pragma once
#include "Document.h"

class NewsPaper : public Document
{
private:
	string News_Paper_Name;
public:
	NewsPaper();
	NewsPaper(string a, string b, string c, string d, string e);
	void setNews_Paper_Name(const string& d);
	string& getNews_Paper_Name();


};


