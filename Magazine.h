#pragma once
#include "Document.h"
class Magazine :public Document
{
private:
	string Magazine_Name;
public:
	Magazine();
	Magazine(string a, string b, string c, string e, string New_Magazine_Name);
	void setMagazine_Name(const string& New_Magazine_Name);
	string& getMagazine_Name();




};

