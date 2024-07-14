#include "Journal.h"
#include "Document.h"
Journal::Journal() {

}
Journal::Journal(string a, string b, string c, string e, string New_Journal_Name) {
	Journal_Name = New_Journal_Name;

}
void Journal::setJournal_Name(const string &New_Journal_Name) {
	Journal_Name = New_Journal_Name;
}
string& Journal::getJournal_Name() {
	return Journal_Name;
}




