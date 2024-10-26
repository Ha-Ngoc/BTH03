#include <iostream>
using namespace std; 

int main(){
    int a,b,max;
    cout << "Nhap so nguyen a va b: ";
    cin >> a >> b;
    // Có thể dùng toán tử điều kiện max (a > b) ? a : b Vậy thì 1 có thể thay 3 dòng
    if (a > b)
        max = a;
    else max = b;
    cout << "So lon nhat la: " << max;
           
  return 0;
}
