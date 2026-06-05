#include "LapTrinhVien.h"
#include <iomanip>

void LapTrinhVien::Nhap() {
    NhanVien::Nhap();

    cout << "So gio overtime: ";
    cin >> soGioOvertime;
}

double LapTrinhVien::TinhLuong() {
    return luongCoBan + soGioOvertime * 200000;
}

void LapTrinhVien::Xuat() {
    cout << "\n===== LAP TRINH VIEN =====\n";

    XuatThongTin();

    cout << "So gio overtime: "
        << soGioOvertime << endl;

    cout << "Luong: "
        << fixed
        << setprecision(0)
        << TinhLuong()
        << endl;
}