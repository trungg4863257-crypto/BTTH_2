#include <iostream>
#include "NgayThangNam.h"
using namespace std;
int main() {
    NgayThangNam d;
    cout << "Nhap ngay thang nam:\n";
    d.Nhap();
    cout << "Ngay vua nhap: ";
    d.Xuat();
    d.NgayThangNamTiepTheo();
    cout << "\nNgay tiep theo: ";
    d.Xuat();
    return 0;
}
