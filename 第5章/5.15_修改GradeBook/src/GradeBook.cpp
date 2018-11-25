#include "GradeBook.h"
#include <iostream>
using namespace std;

GradeBook::GradeBook(string name)
   :aCount(0),
    bCount(0),
    cCount(0),
    dCount(0),
    fCount(0)
{
    setCourseName(name);
}
void GradeBook::setCourseName(string name)
{
    if(name.size()<=25)
        courseName=name;
    else
    {
        courseName=name.substr(0,25);
        cerr<<"Name\""<<name<<"\"exceeds maximum length (25).\n"<<"Limiting courseName to first 25 characters.\n"<<endl;
    }
}
string GradeBook::getCourseName()const
{
    return courseName;
}
void GradeBook::displayMessage()const
{
    cout<<"Welcome to the grade book for\n"<<getCourseName()<<"!\n"<<endl;
}


void GradeBook::inputGrades()
{
    int grade;
    cout<<"Enter the letter grades."<<endl
        <<"Enter the EOF character to end input."<<endl;


    while((grade=cin.get())!=EOF)
    {
        switch(grade)
        {
            case 'A':
        case 'a':
            ++aCount;
            break;

        case 'B':
        case 'b':
            ++aCount;
            break;

        case 'C':
        case 'c':
            ++aCount;
            break;

        case 'D':
        case 'd':
            ++aCount;
            break;

        case 'F':
        case 'f':
            ++aCount;
            break;

        case '\n':
        case '\t':
        case ' ':
            break;

        default:
            cout<<"Incorrect letter grade entered."
            <<"Enter a new grade."<<endl;
            break;
        }
    }

}


void GradeBook::displayGradeReport()const
{
    cout<<"\n\nNumber of students who received each letter grade:"
        <<"\nA"<<aCount
        <<"\nB"<<bCount
        <<"\nC"<<cCount
        <<"\nD"<<dCount
        <<"\nF"<<fCount
        <<endl;
        int m;
        m=(aCount+bCount+cCount+dCount+fCount)/5;
        switch(m)
        {
            case 4:cout<<"A";break;
            case 3:cout<<"B";break;
            case 2:cout<<"C";break;
            case 1:cout<<"D";break;
            case 0:cout<<"E";break;
            default:cout<<"Error!";break;
        }

    cout<<"The average grade is "<<m<<endl;
}

