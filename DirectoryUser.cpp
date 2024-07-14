#include "DirectoryUser.h"
#include "Book.h"
#include "DirectoryDocument.h"
#include "User.h"
#include <iostream>
#include "Teacher.h"
#include "Student.h"
#include "Library_Staff.h"
using namespace std;
DirectoryDocument Book, Document;
void DirectoryUser::Teacher_Login() {

    Teacher T1, T2, T3, T4, T5;
    T1.setEmployee_Code("5647");
    T1.setTeacher_Name("Ayyan Hussnain");
    T2.setEmployee_Code("8789");
    T2.setTeacher_Name("Usama");
    T3.setEmployee_Code("2399");
    T3.setTeacher_Name("Ali");
    T4.setEmployee_Code("5998");
    T4.setTeacher_Name("Zohaib");
    T5.setEmployee_Code("5618");
    T5.setTeacher_Name("Babar Azam");
    string ec;
    // Creating an Login for Five Teachers
    cout << "Enter Your Employee Code to Login" << endl;
    cin >> ec;
    if (ec == T1.getEmployee_Code()) {
        cout << "Dear Ayyan Hussnain. Congratulations Login Successfully To Your Library Account." << endl;

    
    }
    
    if (ec == T2.getEmployee_Code()) {
        cout << "Dear Usama. Congratulations Login Successfully To Your Library Account." << endl;
        
    }
    if (ec == T3.getEmployee_Code()) {
        cout << "Dear Ali. Congratulations Login Successfully To Your Library Account." << endl;
          
        
    }
    if (ec == T4.getEmployee_Code()) {
        cout << "Dear Zohaib. Congratulations Login Successfully To Your Library Account." << endl;
        
    }
    if (ec == T5.getEmployee_Code()) {
        cout << "Dear Babar Azam. Congratulations Login Successfully To Your Library Account." << endl;
       
       
    }
    if (ec != T1.getEmployee_Code() && ec != T2.getEmployee_Code() && ec != T3.getEmployee_Code() && ec != T4.getEmployee_Code() && ec != T5.getEmployee_Code()) {
        cout << "Enter Valid Employee Code To Login" <<endl;
    }
}
void DirectoryUser::Student_Login() {
    Student S1, S2, S3, S4, S5;
    string rn;
    S1.setName("Hamid");
    S1.setRoll_No("359");
    S2.setName("Ahmad");
    S2.setRoll_No("7860");
    S3.setName("Shahzaib");
    S3.setName("Azhar");
    S3.setRoll_No("2949");
    S4.setName("Abdullah");
    S4.setRoll_No("3443");
    S5.setName("Asad");
    S5.setRoll_No("92382");
    cout << "Enter Your Roll No to Login" << endl;
    cin >> rn;
    if (rn == S1.getRoll_No()) {
        cout << "Dear Hamid. Congratulation's Login Successfully to Your UMT Library Account." << endl;
       
        
    }
    if (rn == S2.getRoll_No()) {
        cout << "Dear Ahmad. Congratulation's Login Successfully to Your UMT Library Account." << endl;
        
    }
    if (rn == S3.getRoll_No()) {
        cout << "Dear Shahzaib. Congratulation's Login Successfully to Your UMT Library Account." << endl;
       
    }
    if (rn == S4.getRoll_No()) {
        cout << "Dear Abdullah. Congratulation's Login Successfully to Your UMT Library Account." << endl;
 

        
    }
    if (rn == S5.getRoll_No()) {
        cout << "Dear Asad. Congratulation's Login Successfully to Your UMT Library Account." << endl;
        
        
    }
    if (rn != S1.getRoll_No() && rn != S2.getRoll_No() && rn != S3.getRoll_No() && rn != S4.getRoll_No() && rn != S5.getRoll_No()) {
        cout << "Enter Valid Roll No To Login!" << endl;
    }

}

void DirectoryUser::Student_Menue() {
    string bookName;
    char op1;
    cout << "a.Search for books\n";
    cout << "i) Choose a Category\n";
    cout << "b.See issued books (by them and by any student or teacher)\n";
    cout << "ii) By Members\n";
    cout << "c.Issue books\n";
    cout << "d.Return books\n";
    cout << "e.Enter New books\n";
    cout << "f.Enter New Journal\n";
    cout << "g.Enter New Magazine\n";
    cout << "h. Enter New NewsPaper\n";
    cout << "Select the Option (a,b,c,d,e,f,g or h )" << endl;
    cin >> op1;
    while (op1 >= 'a' && op1 <= 'g') {
        switch (op1)
        {
        case 'a':
            cin.ignore();
            Book.Search_Book();
            break;
        case 'b':
            cin.ignore();
            Book.See_Issued_Books();
            break;
        case 'c': {
            cin.ignore();
            Book.Issue_Book(bookName);
            break;
        }
        case 'd':
            cin.ignore();
            Book.Return_Book();
            break;
        case 'e':
            cin.ignore();
            Book.Add_Book();
        case 'f':
            cin.ignore();
            Document.Add_Jouurnal();
            break;
        case 'g':
            cin.ignore();
            Document.Add_Magazine();
            break;
        case 'h':
            cin.ignore();
            Document.Add_NewsPaper();
            break;
        default:
            cout << "Enter Valid Option" << endl;
            break;
        }
        cout << "Select another option or press any other key to exit: ";
        cin >> op1;

    }
}

void DirectoryUser::Teacher_Menue() {
    char op2;

    cout << "a.Search for books\n";
    cout << "i) Choose a Category\n";
    cout << "b.See issued books (by them and by any student or teacher)\n";
    cout << "ii) By Members\n";
    cout << "c.Issue books\n";
    cout << "d.Return books\n";
    cout << "e.Enter New books\n";
    cout << "f.Enter New Journal\n";
    cout << "g.Enter New Magazine\n";
    cout << "h. Enter New NewsPaper\n";
    cout << "Select the Option (a,b,c,d,e,f,g or h)" << endl;
    cin >> op2;

    while (op2 >= 'a' && op2 <= 'h') {
        switch (op2) {
        case 'a':
            cin.ignore();
            Book.Search_Book();
            break;
        case 'b':
            cin.ignore();
            Book.See_Issued_Books();
            break;
        case 'c': {
            string bookName;
            cin.ignore();
            Book.Issue_Book(bookName);
            break;
        }
        case 'd':
            cin.ignore();
            Book.Return_Book();
            break;
        case 'e':
            cin.ignore();
            Book.Add_Book();
        case 'f':
            cin.ignore();
            Document.Add_Jouurnal();
            break;
        case 'g':
            cin.ignore();
            Document.Add_Magazine();
            break;
        case 'h':
            cin.ignore();
            Document.Add_NewsPaper();
            break;
        
        default:
            cout << "Enter a valid option" << endl;
            break;
        }
        cout << "Select another option or press any other key to exit: ";
        cin >> op2;
    }
}