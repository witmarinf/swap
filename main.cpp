#include <iostream>

void swap1(int &a, int &b);

using namespace std;
int main() {
    int x = 10;
    int y = 20;
    cout<<"x= "<< x <<"| y="<< y << endl;
    swap(x,y);
    cout<<"x= "<< x <<"| y="<< y << endl;
    swap1(x,y);
    cout<<"x= "<< x <<"| y="<< y << endl;
    return 0;
}

void swap1(int &a, int &b){
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}
