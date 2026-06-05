#include "KiemChungVien.h"
#include <iomanip>

void KiemChungVien::Nhap() {
    NhanVien::Nhap();

    cout << "So loi phat hien: ";
    cin >> soLoiPhatHien;
}

double KiemChungVien::TinhLuong() {
    return luongCoBan + soLoiPhatHien * 50000;
}

void KiemChungVien::Xuat() {
    cout << "\n===== KIEM CHUNG VIEN =====\n";

    XuatThongTin();

    cout << "So loi phat hien: "
        << soLoiPhatHien << endl;

    cout << "Luong: "
        << fixed
        << setprecision(0)
        << TinhLuong()
        << endl;
}