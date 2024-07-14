#include <iostream>
#include <string>
#include "Document.h"
#include "DirectoryUser.h"
#include "DirectoryDocument.h"
#include "Book.h"
#include "User.h"
using namespace std;

Book books[50];

DirectoryDocument::DirectoryDocument() {
    // Initialize arrays or perform any other necessary setup
}
// Function to Display all the Books

 void DirectoryDocument::CS_Books(){
    Book books[13]; // Array to hold 13 Book objects

    // Details for 13 books
    string book_names[] = { "C++, How To Program", "Clean Code", "Introduction to Algorithms", "The Pragmatic Programmer", "Design Patterns", "Code Complete", "Head First Design Patterns", "Refactoring", "Structure and Interpretation of Computer Programs", "Programming Pearls", "Effective Modern C++", "Cracking the Coding Interview", "Data Structures and Algorithms in Python" };
    string authors[] = { "Dietal and Dietal", "Robert C. Martin", "Thomas H. Cormen", "Andrew Hunt and David Thomas", "Erich Gamma et al.", "Steve McConnell", "Eric Freeman et al.", "Martin Fowler", "Harold Abelson and Gerald Jay Sussman", "Jon Bentley", "Scott Meyers", "Gayle Laakmann McDowell", "Michael T. Goodrich and Roberto Tamassia" };
    string publication_years[] = { "2000", "2008", "2009", "1999", "1994", "1993", "2004", "1999", "1985", "1999", "2014", "2015", "2013" };
    string isbns[] = { "232_3_2424_32", "978-0132350884", "978-0262033848", "978-0201616224", "978-0201633610", "978-0735619678", "978-0596007126", "978-0201485677", "978-0262510875", "978-0201657883", "978-1491903995", "978-0984782857", "978-1118290279" };
    string library_codes[] = { "Jodj_9432", "LibraryCode1", "LibraryCode2", "LibraryCode3", "LibraryCode4", "LibraryCode5", "LibraryCode6", "LibraryCode7", "LibraryCode8", "LibraryCode9", "LibraryCode10", "LibraryCode11", "LibraryCode12" };
    string total_copies[] = { "30", "25", "20", "15", "22", "18", "12", "10", "28", "23", "17", "14", "26" };
    string copy_numbers[] = { "3", "2", "1", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13" };
    string statuses[] = { "Available", "Available", "Available", "Available", "Available", "Available", "Available", "Available", "Available", "Available", "Available", "Available", "Available" };

    // Setting details for each book
    for (int i = 0; i < 13; ++i) {
        books[i].setBook_Name(book_names[i]);
        books[i].setBook_Author_Name(authors[i]);
        books[i].setPublication_Year(publication_years[i]);
        books[i].setISBN(isbns[i]);
        books[i].setLibrary_Code(library_codes[i]);
        books[i].setTotal_Copies_of_Book(total_copies[i]);
        books[i].setCopy_Number(copy_numbers[i]);
        books[i].setStatus(statuses[i]);

    }

    // Displaying details of each book
    cout << "Details of 13 Books:" << endl;
    for (int i = 0; i < 13; ++i) {
        cout << "Book " << i + 1 << ":" << endl;
        cout << "Name: " << books[i].getBook_Name() << endl;
        cout << "Author: " << books[i].getBook_Author_Name() << endl;
        cout << "Publication Year: " << books[i].getPublication_Year() << endl;
        cout << "ISBN: " << books[i].getISBN() << endl;
        cout << "Library Code: " << books[i].getLibrary_Code() << endl;
        cout << "Total Copies: " << books[i].getTotal_Copies_of_Book() << endl;
        cout << "Copy Number: " << books[i].getCopy_Number() << endl;
        cout << "Status: " << books[i].getStatus() << endl;
        cout << endl;
    }



}
void DirectoryDocument::EE_Books() {
    Book books[13]; // Array to hold 13 Book objects

    // Details for 13 Electrical Engineering books
    string book_names[] = { "Fundamentals of Electric Circuits", "Electric Machinery Fundamentals", "Microelectronic Circuits", "Electric Power Systems", "Signals and Systems", "Digital Signal Processing", "Control Systems Engineering", "Electric Machines and Drives", "Power Electronics: Converters, Applications, and Design", "Principles of Electric Machines and Power Electronics", "Introduction to Electric Circuits", "Electromagnetic Fields and Waves", "Electric Energy Systems Theory" };
    string authors[] = { "Charles K. Alexander, Matthew N. O. Sadiku", "Stephen J. Chapman", "Adel S. Sedra, Kenneth C. Smith", "B. M. Weedy, B. J. Cory, N. Jenkins", "Alan V. Oppenheim, Alan S. Willsky, S. Hamid Nawab", "John G. Proakis, Dimitris G. Manolakis", "Norman S. Nise", "Ned Mohan, Tore M. Undeland, William P. Robbins", "Ned Mohan, Tore M. Undeland, William P. Robbins", "Adel S. Sedra, Kenneth C. Smith", "James W. Nilsson, Susan A. Riedel", "Carl T. A. Johnk", "Olle I. Elgerd" };
    string publication_years[] = { "2006", "2017", "2014", "2012", "1996", "2010", "2018", "2011", "2014", "2002", "2018", "1989", "1971" };
    string isbns[] = { "978-0078028229", "978-1259253321", "978-0199339136", "978-0470749831", "978-0138147570", "978-0133737622", "978-1118170519", "978-1118075733", "978-1118075733", "978-1118075726", "978-0133760033", "978-0815513158", "978-0070992869" };
    string library_codes[] = { "LibraryCodeEE1", "LibraryCodeEE2", "LibraryCodeEE3", "LibraryCodeEE4", "LibraryCodeEE5", "LibraryCodeEE6", "LibraryCodeEE7", "LibraryCodeEE8", "LibraryCodeEE9", "LibraryCodeEE10", "LibraryCodeEE11", "LibraryCodeEE12", "LibraryCodeEE13" };
    string total_copies[] = { "30", "25", "20", "15", "22", "18", "12", "10", "28", "23", "17", "14", "26" };
    string copy_numbers[] = { "3", "2", "1", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13" };
    string statuses[] = { "Available", "Available", "Available", "Available", "Available", "Available", "Available", "Available", "Available", "Available", "Available", "Available", "Available" };

    // Setting details for each book
    for (int i = 0; i < 13; ++i) {
        books[i].setBook_Name(book_names[i]);
        books[i].setBook_Author_Name(authors[i]);
        books[i].setPublication_Year(publication_years[i]);
        books[i].setISBN(isbns[i]);
        books[i].setLibrary_Code(library_codes[i]);
        books[i].setTotal_Copies_of_Book(total_copies[i]);
        books[i].setCopy_Number(copy_numbers[i]);
        books[i].setStatus(statuses[i]);
    }

    // Displaying details of each book
    cout << "Details of 13 Electrical Engineering Books:" << endl;
    for (int i = 0; i < 13; ++i) {
        cout << "Book " << i + 1 << ":" << endl;
        cout << "Name: " << books[i].getBook_Name() << endl;
        cout << "Author: " << books[i].getBook_Author_Name() << endl;
        cout << "Publication Year: " << books[i].getPublication_Year() << endl;
        cout << "ISBN: " << books[i].getISBN() << endl;
        cout << "Library Code: " << books[i].getLibrary_Code() << endl;
        cout << "Total Copies: " << books[i].getTotal_Copies_of_Book() << endl;
        cout << "Copy Number: " << books[i].getCopy_Number() << endl;
        cout << "Status: " << books[i].getStatus() << endl;
        cout << endl;
    }
}
void DirectoryDocument::English_Books(){
    Book books[12]; // Array to hold 12 Book objects

    // Details for 12 English books
    string book_names[] = { "To Kill a Mockingbird", "1984", "The Great Gatsby", "Pride and Prejudice", "The Catcher in the Rye", "Animal Farm", "Lord of the Flies", "Brave New World", "The Hobbit", "The Grapes of Wrath", "Fahrenheit 451", "The Lord of the Rings" };
    string authors[] = { "Harper Lee", "George Orwell", "F. Scott Fitzgerald", "Jane Austen", "J.D. Salinger", "George Orwell", "William Golding", "Aldous Huxley", "J.R.R. Tolkien", "John Steinbeck", "Ray Bradbury", "J.R.R. Tolkien" };
    string publication_years[] = { "1960", "1949", "1925", "1813", "1951", "1945", "1954", "1932", "1937", "1939", "1953", "1954" };
    string isbns[] = { "978-0061120084", "978-0451524935", "978-0743273565", "978-1503290563", "978-0316769488", "978-0451526342", "978-0571295715", "978-0060850524", "978-0345339683", "978-0143039433", "978-1451673319", "978-0345339706" };
    string library_codes[] = { "LibraryCodeEnglish1", "LibraryCodeEnglish2", "LibraryCodeEnglish3", "LibraryCodeEnglish4", "LibraryCodeEnglish5", "LibraryCodeEnglish6", "LibraryCodeEnglish7", "LibraryCodeEnglish8", "LibraryCodeEnglish9", "LibraryCodeEnglish10", "LibraryCodeEnglish11", "LibraryCodeEnglish12" };
    string total_copies[] = { "30", "25", "20", "15", "22", "18", "12", "10", "28", "23", "17", "14" };
    string copy_numbers[] = { "3", "2", "1", "4", "5", "6", "7", "8", "9", "10", "11", "12" };
    string statuses[] = { "Available", "Available", "Available", "Available", "Available", "Available", "Available", "Available", "Available", "Available", "Available", "Available" };

    // Setting details for each book
    for (int i = 0; i < 12; ++i) {
        books[i].setBook_Name(book_names[i]);
        books[i].setBook_Author_Name(authors[i]);
        books[i].setPublication_Year(publication_years[i]);
        books[i].setISBN(isbns[i]);
        books[i].setLibrary_Code(library_codes[i]);
        books[i].setTotal_Copies_of_Book(total_copies[i]);
        books[i].setCopy_Number(copy_numbers[i]);
        books[i].setStatus(statuses[i]);
    }

    // Displaying details of each book
    cout << "Details of 12 English Books:" << endl;
    for (int i = 0; i < 12; ++i) {
        cout << "Book " << i + 1 << ":" << endl;
        cout << "Name: " << books[i].getBook_Name() << endl;
        cout << "Author: " << books[i].getBook_Author_Name() << endl;
        cout << "Publication Year: " << books[i].getPublication_Year() << endl;
        cout << "ISBN: " << books[i].getISBN() << endl;
        cout << "Library Code: " << books[i].getLibrary_Code() << endl;
        cout << "Total Copies: " << books[i].getTotal_Copies_of_Book() << endl;
        cout << "Copy Number: " << books[i].getCopy_Number() << endl;
        cout << "Status: " << books[i].getStatus() << endl;
        cout << endl;
    }

}
void DirectoryDocument::Biology_Books() {
    Book books[12]; // Array to hold 12 Book objects

    // Details for 12 English books
    string book_names[] = { "To Kill a Mockingbird", "1984", "The Great Gatsby", "Pride and Prejudice", "The Catcher in the Rye", "Animal Farm", "Lord of the Flies", "Brave New World", "The Hobbit", "The Grapes of Wrath", "Fahrenheit 451", "The Lord of the Rings" };
    string authors[] = { "Harper Lee", "George Orwell", "F. Scott Fitzgerald", "Jane Austen", "J.D. Salinger", "George Orwell", "William Golding", "Aldous Huxley", "J.R.R. Tolkien", "John Steinbeck", "Ray Bradbury", "J.R.R. Tolkien" };
    string publication_years[] = { "1960", "1949", "1925", "1813", "1951", "1945", "1954", "1932", "1937", "1939", "1953", "1954" };
    string isbns[] = { "978-0061120084", "978-0451524935", "978-0743273565", "978-1503290563", "978-0316769488", "978-0451526342", "978-0571295715", "978-0060850524", "978-0345339683", "978-0143039433", "978-1451673319", "978-0345339706" };
    string library_codes[] = { "LibraryCodeEnglish1", "LibraryCodeEnglish2", "LibraryCodeEnglish3", "LibraryCodeEnglish4", "LibraryCodeEnglish5", "LibraryCodeEnglish6", "LibraryCodeEnglish7", "LibraryCodeEnglish8", "LibraryCodeEnglish9", "LibraryCodeEnglish10", "LibraryCodeEnglish11", "LibraryCodeEnglish12" };
    string total_copies[] = { "30", "25", "20", "15", "22", "18", "12", "10", "28", "23", "17", "14" };
    string copy_numbers[] = { "3", "2", "1", "4", "5", "6", "7", "8", "9", "10", "11", "12" };
    string statuses[] = { "Available", "Available", "Available", "Available", "Available", "Available", "Available", "Available", "Available", "Available", "Available", "Available" };

    // Setting details for each book
    for (int i = 0; i < 12; ++i) {
        books[i].setBook_Name(book_names[i]);
        books[i].setBook_Author_Name(authors[i]);
        books[i].setPublication_Year(publication_years[i]);
        books[i].setISBN(isbns[i]);
        books[i].setLibrary_Code(library_codes[i]);
        books[i].setTotal_Copies_of_Book(total_copies[i]);
        books[i].setCopy_Number(copy_numbers[i]);
        books[i].setStatus(statuses[i]);
    }

    // Displaying details of each book
    cout << "Details of 12 English Books:" << endl;
    for (int i = 0; i < 12; ++i) {
        cout << "Book " << i + 1 << ":" << endl;
        cout << "Name: " << books[i].getBook_Name() << endl;
        cout << "Author: " << books[i].getBook_Author_Name() << endl;
        cout << "Publication Year: " << books[i].getPublication_Year() << endl;
        cout << "ISBN: " << books[i].getISBN() << endl;
        cout << "Library Code: " << books[i].getLibrary_Code() << endl;
        cout << "Total Copies: " << books[i].getTotal_Copies_of_Book() << endl;
        cout << "Copy Number: " << books[i].getCopy_Number() << endl;
        cout << "Status: " << books[i].getStatus() << endl;
        cout << endl;
    }
}
void DirectoryDocument::Search_Book() {
    DirectoryDocument CS, EE, English, Biology, Book;
    
    cout << "                                      " << endl;
    cout << "                                      " << endl;
    cout << "The Available Categories are:" << endl;
    cout << "1.Computer Science (CS)" << endl;
    cout << "2.Electrical Engineering (EE)" << endl;
    cout << "3 English." << endl;
    cout << "4.Biology " << endl;

    DirectoryUser Teacher;
    while (true) {
        int Category;
        cout << "Enter category (1-4) or 0 to exit: ";
        cin >> Category;

        if (Category == 0) {
            cout << "Exiting the Program" << endl;
            break;
        }

        if (Category >= 1 && Category <= 4) {
            switch (Category) {
            case 1:
                CS.CS_Books();
                break;
            case 2:
                EE.EE_Books();
                break;
            case 3:
                English.English_Books();
                break;
            case 4:
                Biology.Biology_Books();
                break;
            default:
                cout << "Return to the Main Menue." << endl;
                break;
            }
        }
        else {
            cout << "Enter Valid Option" << endl;
        }
    }


}
void DirectoryDocument::Issue_Book( string & bookName) {
    

    
   
    string book_names[50] = { "C++, How To Program", "Clean Code", "Introduction to Algorithms", "The Pragmatic Programmer", "Design Patterns", "Code Complete", "Head First Design Patterns", "Refactoring", "Structure and Interpretation of Computer Programs", "Programming Pearls", "Effective Modern C++", "Cracking the Coding Interview", "Data Structures and Algorithms in Python", "Fundamentals of Electric Circuits", "Electric Machinery Fundamentals", "Microelectronic Circuits", "Electric Power Systems", "Signals and Systems", "Digital Signal Processing", "Control Systems Engineering", "Electric Machines and Drives", "Power Electronics: Converters, Applications, and Design", "Principles of Electric Machines and Power Electronics", "Introduction to Electric Circuits", "Electromagnetic Fields and Waves", "Electric Energy Systems Theory", "To Kill a Mockingbird", "1984", "The Great Gatsby", "Pride and Prejudice", "The Catcher in the Rye", "Animal Farm", "Lord of the Flies", "Brave New World", "The Hobbit", "The Grapes of Wrath", "Fahrenheit 451", "The Lord of the Rings" };
    string authors[] = {// CS Authors
    "Dietal and Dietal", "Robert C. Martin", "Thomas H. Cormen", "Andrew Hunt and David Thomas", "Erich Gamma et al.", "Steve McConnell", "Eric Freeman et al.", "Martin Fowler", "Harold Abelson and Gerald Jay Sussman", "Jon Bentley", "Scott Meyers", "Gayle Laakmann McDowell", "Michael T. Goodrich and Roberto Tamassia",
    // EE Authors
    "Charles K. Alexander, Matthew N. O. Sadiku", "Stephen J. Chapman", "Adel S. Sedra, Kenneth C. Smith", "B. M. Weedy, B. J. Cory, N. Jenkins", "Alan V. Oppenheim, Alan S. Willsky, S. Hamid Nawab", "John G. Proakis, Dimitris G. Manolakis", "Norman S. Nise", "Ned Mohan, Tore M. Undeland, William P. Robbins", "Ned Mohan, Tore M. Undeland, William P. Robbins", "Adel S. Sedra, Kenneth C. Smith", "James W. Nilsson, Susan A. Riedel", "Carl T. A. Johnk", "Olle I. Elgerd",
    // English Authors
    "Harper Lee", "George Orwell", "F. Scott Fitzgerald", "Jane Austen", "J.D. Salinger", "George Orwell", "William Golding", "Aldous Huxley", "J.R.R. Tolkien", "John Steinbeck", "Ray Bradbury", "J.R.R. Tolkien"};
    
    
    /**string library_codes[maxbooks] = {
        // CS Library Codes
        "Jodj_9432", "LibraryCode1", "LibraryCode2", "LibraryCode3", "LibraryCode4", "LibraryCode5", "LibraryCode6", "LibraryCode7", "LibraryCode8", "LibraryCode9", "LibraryCode10", "LibraryCode11", "LibraryCode12",
        // EE Library Codes
        "LibraryCodeEE1", "LibraryCodeEE2", "LibraryCodeEE3", "LibraryCodeEE4", "LibraryCodeEE5", "LibraryCodeEE6", "LibraryCodeEE7", "LibraryCodeEE8", "LibraryCodeEE9", "LibraryCodeEE10", "LibraryCodeEE11", "LibraryCodeEE12", "LibraryCodeEE13",
        // English Library Codes
        "LibraryCodeEnglish1", "LibraryCodeEnglish2", "LibraryCodeEnglish3", "LibraryCodeEnglish4", "LibraryCodeEnglish5", "LibraryCodeEnglish6", "LibraryCodeEnglish7", "LibraryCodeEnglish8", "LibraryCodeEnglish9", "LibraryCodeEnglish10", "LibraryCodeEnglish11", "LibraryCodeEnglish12",
        // Biology Library Codes (assuming this is a mistake in the provided data and using the same as English books for consistency)
        "LibraryCodeEnglish1", "LibraryCodeEnglish2", "LibraryCodeEnglish3", "LibraryCodeEnglish4", "LibraryCodeEnglish5", "LibraryCodeEnglish6", "LibraryCodeEnglish7", "LibraryCodeEnglish8", "LibraryCodeEnglish9", "LibraryCodeEnglish10", "LibraryCodeEnglish11", "LibraryCodeEnglish12"
    };**/
    string categories[50] = { "CS","CS", "CS", "CS", "CS", "CS", "CS", "CS", "CS", "CS", "CS", "CS", "CS", "EE","EE", "EE", "EE", "EE", "EE", "EE", "EE", "EE", "EE", "EE", "EE", "EE", "English","English", "English", "English", "English", "English", "English", "English", "English", "English", "English", "English", "Biology","Biology", "Biology", "Biology", "Biology", "Biology", "Biology", "Biology", "Biology", "Biology", "Biology", "Biology" };
    //string total_copies[] = {
        // CS Total Copies
      // "30", "25", "20", "15", "22", "18", "12", "10", "28", "23", "17", "14", "26",
        // EE Total Copies
        //"30", "25", "20", "15", "22", "18", "12", "10", "28", "23", "17", "14", "26",
        // English Total Copies
        //"30", "25", "20", "15", "22", "18", "12", "10", "28", "23", "17", "14",
        
        //"30", "25", "20", "15", "22", "18", "12", "10", "28", "23", "17", "14"
    //};

    string copy_numbers[] = {
        // CS Copy Numbers
        "3", "2", "1", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13",
        // EE Copy Numbers
        "3", "2", "1", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13",
        // English Copy Numbers
        "3", "2", "1", "4", "5", "6", "7", "8", "9", "10", "11", "12",
        // Biology Copy Numbers (assuming this is a mistake in the provided data and using the same as English books for consistency)
        "3", "2", "1", "4", "5", "6", "7", "8", "9", "10", "11", "12"
    };
    string statuses[] = {
        // CS Statuses
        "Available", "Available", "Available", "Available", "Available", "Available", "Available", "Available", "Available", "Available", "Available", "Available", "Available",
        // EE Statuses
        "Available", "Available", "Available", "Available", "Available", "Available", "Available", "Available", "Available", "Available", "Available", "Available", "Available",
        // English Statuses
        "Available", "Available", "Available", "Available", "Available", "Available", "Available", "Available", "Available", "Available", "Available", "Available",
        // Biology Statuses (assuming this is a mistake in the provided data and using the same as English books for consistency)
        "Available", "Available", "Available", "Available", "Available", "Available", "Available", "Available", "Available", "Available", "Available", "Available"
    };
    // Setting details for each book
    for (int i = 0; i < 50; ++i) {
        books[i].setBook_Name(book_names[i]);
       // books[i].setBook_Author_Name(authors[i]);
        books[i].setCategory(categories[i]);
        //books[i].setLibrary_Code(library_codes[i]);
        //books[i].setTotal_Copies_of_Book(total_copies[i]);
        books[i].setCopy_Number(copy_numbers[i]);
        books[i].setStatus(statuses[i]);
    }
    

   std:: cout << "Enter the Book Name:" << endl;
    std::getline(cin, bookName);
    string issue_date, return_date;
    bool found = false;

    for (int i = 0; i < 50; ++i) {

        if (bookName==books[i].getBook_Name() ) {
            found = true;
            if (books[i].getStatus() == "Available") {
                books[i].setStatus("Issued");
                cout << "The book \"" << bookName << "\" has been issued successfully."   << endl;
                cout << "The Book Category is:" << books[i].getCategory() << endl;
                cout << "Enter The Issue Date." << endl;
                getline(cin, issue_date);
                cout << "Enter The Return Date." << endl;
                getline(cin, return_date);
                books[i].setBook_Issue_Date(issue_date);
                books[i].setBook_Return_Date(return_date);
                break;
            }
            if (!found) {
                cout << "The book \"" << bookName << "\" is currently not available." << endl;
            }
            break;
           
        }
    
        
    }
    if (!found) {
        cout << "The book \"" << bookName << "\" does not exist in the directory." << endl;
       

    }
}

void DirectoryDocument::See_Issued_Books() {

    cout << "The Issued Books Are:" << endl;
    bool issued = false;
    for (int i=0; i<50; ++i){

        if (books[i].getStatus()=="Available"){
            issued = true;
            cout << "The Book Name is:" << books[i].getBook_Name() << endl;
            cout << "The Return Date is:" << books[i].getBook_Return_Date() << endl;
            cout << "The Book Category is:" << books[i].getCategory() << endl;
            cout << "......................................................." << endl;
        }
        
    }
}

void DirectoryDocument::Return_Book() {
    string Book_return;
    cout << "Enter the Name of the Book You Want To return" << endl;
    getline(cin, Book_return);
    bool found = false;
    for (int i = 0; i < 50; ++i) {
        if (Book_return == books[i].getBook_Name() && books[i].Status == "Issued") {
            found = true;
            // If Book Is Issued set it's status to Available
            books[i].setStatus("Available");
            cout << "Book Returned Successfully" << endl;
            break;
        }
        if (!found) {
            cout << "The Book is not issued or the Book is not  Available in Directory" << endl;
            break;
        }
    }
}

void DirectoryDocument::Add_Book() {

    Book NewBook;
    cout << "Enter the Name of the Book You Want To Add" << endl;
    getline(cin, NewBook.getBook_Name());
    cout << "Enter the Name of the Author of Book" << endl;
    getline(cin, NewBook.getBook_Author_Name());
    cout << "Enter the Publication Year of the Book" << endl;
    cin >> NewBook.getPublication_Year();
    cout << "Enter the Total Copies of the Book" << endl;
    cin >> NewBook.getTotal_Copies_of_Book();
    cout << "Enter the Copy Number of the Book" << endl;
    cin >>  NewBook.getCopy_Number();
    cout << "Enter the ISBN Of the Book." << endl;
    cin >> NewBook.getISBN();
    cout << "Enter the Library Code of the New Book" << endl;
    cin >> NewBook.getLibrary_Code();
    cout << "Enter the Category of the Book" << endl;
    cin >> NewBook.getCategory();
    cout << "Enter the Status of the Book (Available or Not)" << endl;
    cin >> NewBook.getStatus();
    cout << "Book Added Successfully to the UMT Library." << endl;

    //books[50].setBook_Name(NewBook.getBook_Name());
    //books[50].setBook_Author_Name(NewBook.getBook_Author_Name());
    //books[50].setPublication_Year(NewBook.getPublication_Year());
    //books[50].setTotal_Copies_of_Book(NewBook.getTotal_Copies_of_Book());
    //books[50].setCopy_Number(NewBook.getCopy_Number());
    //books[50].setISBN(NewBook.getISBN());
    //books[50].setLibrary_Code(NewBook.getLibrary_Code());
    //books[50].setCategory(NewBook.getCategory());
    //books[50].setStatus(NewBook.getCategory());
}

void DirectoryDocument::Add_Jouurnal() {
    Journal New_Journal;
    cout << "Enter the Name of the Journal You Want to Add." << endl;
    getline(cin,New_Journal.getJournal_Name());
    cout << "Enter the Date of publication of Journal" << endl;
    getline(cin, New_Journal.getPublication_Year());
    cout << "Enter the Library Code of the journal" << endl;
    cin >> New_Journal.getLibrary_Code();
    cout << "Enter the Status of the Journal" << endl;
    cin >> New_Journal.getStatus();
    cout << "Enter the Category of the Journal" << endl;
    cin >> New_Journal.getCategory();
    cout << "                                          " << endl;
    cout << "New Journal Successfully added to the UMT Library" << endl;


}
void DirectoryDocument::Add_Magazine() {
    Magazine New_Magazine;
    cout << "Enter the Name of the Magazine You Want to Add." << endl;
    getline(cin, New_Magazine.getMagazine_Name());
    cout << "Enter the Date of publication of Magazine" << endl;
    getline(cin, New_Magazine.getPublication_Year());
    cout << "Enter the Library Code of the Magazine" << endl;
    cin >> New_Magazine.getLibrary_Code();
    cout << "Enter the Status of the Magazine" << endl;
    cin >> New_Magazine.getStatus();
    cout << "Enter the Category of the Magazine" << endl;
    cin >> New_Magazine.getCategory();

    cout << "                                          " << endl;
    cout << "New Magazine  Successfully added to the UMT Library" << endl;

}
void DirectoryDocument::Add_NewsPaper() {
    NewsPaper New_NewsPaper;
    cout << "Enter the Name of the NewsPaper You Want to Add." << endl;
    getline(cin, New_NewsPaper.getNews_Paper_Name());
    cout << "Enter the Date of publication of NewsPaper" << endl;
    getline(cin, New_NewsPaper.getPublication_Year());
    cout << "Enter the Library Code of the NewsPaper" << endl;
    cin >> New_NewsPaper.getLibrary_Code();
    cout << "Enter the Status of the NewsPaper" << endl;
    cin >> New_NewsPaper.getStatus();
    cout << "Enter the Category of the NewsPaper" << endl;
    cin >> New_NewsPaper.getCategory();

    cout << "                                          " << endl;
    cout << "New NewsPaper Successfully added to the UMT Library" << endl;

}




