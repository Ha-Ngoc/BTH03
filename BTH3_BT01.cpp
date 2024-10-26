#include <iostream>
using namespace std; 

int main(){
    double diem;
    cout << "Nhap diem trung binh mon hoc: ";
    cin >> diem;
    if (diem >= 5)
        cout << "Chuc mung! Ban da dau.";
    else cout << "Rat tiet! Ban da rot.";
           
  return 0;
}
