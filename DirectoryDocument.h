#pragma once
#include "Book.h"
#include "Magazine.h"
#include  "Journal.h"
#include "NewsPaper.h"
class DirectoryDocument
{
private:
    
    NewsPaper nArray[50];
    Magazine mArray[50];
    Journal New_NewsPaper[50];
public:
    DirectoryDocument();

    void Search_Book();
    void CS_Books();
    void EE_Books();
    void English_Books();
    void Biology_Books();
    void See_Issued_Books();
    void Issue_Book(  string &bookName);
    void Return_Book();
    void Add_Book();
    void Add_Jouurnal();
    void Add_Magazine();
    void Add_NewsPaper();
    
    
   
};


