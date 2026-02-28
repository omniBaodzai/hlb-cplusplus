#include<iostream>
#include<string>

using namespace std;

int main() {
int tuoi;
string ten;

cout << "Nhap tuoi: ";
cin >> tuoi;

// Xoa ky tu '\n'
cin.ignore();

cout << "Nhap ten: ";
getline(cin, ten); // Error

cout <<"Tuoi: " << tuoi << endl;
cout << "Ten: " << ten << endl;

return 0;
}







