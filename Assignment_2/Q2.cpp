#include<iostream>
using namespace std;
class Details{
    string Name ;
    int RollNo;
    string degree;
    char hostel;
    float currentCGPA;  
    public :
    void addDetails() {
        cout<<"Enter the details\n";
        cout << "Name:";
        cin >> Name ;
        cout <<"Roll No.";
        cin >> RollNo ;
        cout << "Degree";
        cin >> degree;
        cout<<"Hostel:";
        cin >> hostel;
        cout<<"CGPA";
        cin >> currentCGPA ;
    }
    void updateDetails() {
        cout << "Enter new details";
        cout << "Name:";
        cin >> Name ;
        cout <<"Roll No.";
        cin >> RollNo ;
        cout << "Degree";
        cin >> degree;
        cout<<"Hostel:";
        cin >> hostel;
        cout<<"CGPA";
        cin >> currentCGPA ;
    }
    void updateCGPA() {
        cout << "Enter new CGPA";
        cin>>currentCGPA;
    }
    void updatehostel() {
        cout << "Enter new hostel";
        cin>>hostel;
    }
    void displayDetails() {
        cout<<"The details are ";
        cout << "\nName:"<<Name<<"\nRoll no:"<<RollNo<<"\nDegree :"<<degree<<"\nHostel :"<<hostel<<"\ncurrentCGPA:"<<currentCGPA;
    }
};
int main() {
    Details x;
    x.addDetails();
    x.displayDetails();
}