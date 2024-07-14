
#include "NewsPaper.h"
NewsPaper::NewsPaper() {
}
NewsPaper::NewsPaper(string a, string b, string c, string d, string e) {
	News_Paper_Name = d;
}
void NewsPaper::setNews_Paper_Name(const string& d) {
	News_Paper_Name = d;
}
string& NewsPaper::getNews_Paper_Name() {
	return News_Paper_Name;
}




