#include "NhanVienSX.h"

void NhanVienSX::Nhap()
{
    NhanVien::Nhap();

    cout << "Luong can ban: ";
    cin >> LuongCanBan;

    cout << "So san pham: ";
    cin >> SoSanPham;
}

void NhanVienSX::TinhLuong()
{
    Luong = LuongCanBan + SoSanPham * 5000;
}

void NhanVienSX::Xuat()
{
    cout << "\n===== NHAN VIEN SAN XUAT =====\n";

    NhanVien::Xuat();

    cout << "Luong can ban: "
        << LuongCanBan << endl;

    cout << "So san pham: "
        << SoSanPham << endl;
}