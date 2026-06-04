#include "LapTrinhVien.h"

void LapTrinhVien::Nhap() {
    NhanVien::Nhap();

    cout << "So gio overtime: ";
    cin >> soGioOvertime;
}

void LapTrinhVien::Xuat() {
    cout << "\n===== LAP TRINH VIEN =====\n";
    NhanVien::Xuat();
    cout << "So gio overtime: " << soGioOvertime << endl;
    cout << "Luong: " << TinhLuong() << endl;
}

double LapTrinhVien::TinhLuong() {
    return luongCoBan + soGioOvertime * 200000;
}