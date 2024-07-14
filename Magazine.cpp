#include "Magazine.h"
// Default Constructor
Magazine::Magazine() {

}
// Overloaded Constructor
Magazine::Magazine(string a, string b, string c, string e, string New_Magazine_Name) {
	Magazine_Name = New_Magazine_Name;
}

void Magazine::setMagazine_Name(const string& New_Magazine_Name) {
	Magazine_Name = New_Magazine_Name;
}
string& Magazine::getMagazine_Name() {
	return Magazine_Name;
}

