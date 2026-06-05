#include "NhanVien.h"
#include <iomanip>

NhanVien::NhanVien()
{
    Luong = 0;
}

NhanVien::~NhanVien()
{
}

void NhanVien::Nhap()
{
    cin.ignore();

    cout << "Ho ten: ";
    getline(cin, HoTen);

    cout << "Nam sinh: ";
    cin >> NamSinh;
}

void NhanVien::Xuat()
{
    cout << "Ho ten: " << HoTen << endl;
    cout << "Nam sinh: " << NamSinh << endl;

    cout << fixed << setprecision(0);
    cout << "Luong: " << Luong << endl;
}

double NhanVien::GetLuong() const
{
    return Luong;
}

int NhanVien::GetNamSinh() const
{
    return NamSinh;
}

string NhanVien::GetHoTen() const
{
    return HoTen;
}