#include "KiemChungVien.h"

void KiemChungVien::Nhap() {
    NhanVien::Nhap();

    cout << "So loi phat hien: ";
    cin >> soLoiPhatHien;
}

void KiemChungVien::Xuat() {
    cout << "\n===== KIEM CHUNG VIEN =====\n";
    NhanVien::Xuat();
    cout << "So loi phat hien: " << soLoiPhatHien << endl;
    cout << "Luong: " << TinhLuong() << endl;
}

double KiemChungVien::TinhLuong() {
    return luongCoBan + soLoiPhatHien * 50000;
}