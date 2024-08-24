#include<iostream>
using namespace std;
class Rectangle{
    int width;
    int height;
    public:
    void getData() {
        cout << "Enter the values of width and height";
        cin >> width;
        cin >> height;
    }
    void calculatearea() {
        int total;
        total=width*height ;
        cout << "The total area is "<< total;
    }
};
int main() {
    Rectangle x;
    x.getData();
    x.calculatearea();
    return 0;
}