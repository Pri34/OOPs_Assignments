#include<iostream>
#include<string>
using namespace std;
struct Details {
    char Name[50];
    int RollNo;
    char degree[100];
    char hostel[20];
    float currentCGPA;
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
    Details x1;
    x1.addDetails();
    x1.displayDetails();
}