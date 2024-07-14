// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "DirectoryUser.h"
#include "Student.h"
#include "Teacher.h"
#include "DirectoryDocument.h"
#include "User.h"
#include "DirectoryDocument.h"
#include <string>
#include "Library_Staff.h"
using namespace std;


int main()
{
    string bookName;
    int Choice;
    DirectoryUser Teacher, Student, Library_Staff;
    DirectoryDocument Book;
    cout << "                                                " << endl;
    cout << "************************************************" << endl;
    cout << "************************************************" << endl;
    cout << "****                                        ****" << endl;
    cout << "****Welcome To UMT Library Management System****" << endl;
    cout << "****                                        ****" << endl;
    cout << "************************************************" << endl;
    cout << "************************************************" << endl;
    cout << "                                            " << endl;
    // Creating a Login Screen For Teacher, Student and Staff
    do {
        char op1, op2;
        cout << "Which Library User Are you:" << endl;
        cout << "1.Student" << endl; 
        cout << "2.Teacher" << endl;
        cout << "Enter the Option(1 or 2):" << endl;
        std::cin >> Choice;
        switch (Choice) {
        case 1:
            Student.Student_Login();
            Teacher.Teacher_Menue();
            break;
        case 2:
            Teacher.Teacher_Login();
            Student.Student_Menue();
            break;
        default:
            cout << "Enter Valid Option" << endl;
            break;

        }
    } while (Choice >= 1 && Choice <= 2);
    return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
