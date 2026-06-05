#include "CongTy.h"
#include <iomanip>

CongTy::~CongTy()
{
    for (NhanVien* nv : DS)
    {
        delete nv;
    }
}

void CongTy::NhapDanhSach()
{
    int nSX, nVP;

    cout << "Nhap so nhan vien san xuat: ";
    cin >> nSX;

    cout << "Nhap so nhan vien van phong: ";
    cin >> nVP;

    for (int i = 0; i < nSX; i++)
    {
        cout << "\nNhan vien san xuat thu "
            << i + 1 << endl;

        NhanVien* nv = new NhanVienSX();

        nv->Nhap();
        nv->TinhLuong();

        DS.push_back(nv);
    }

    for (int i = 0; i < nVP; i++)
    {
        cout << "\nNhan vien van phong thu "
            << i + 1 << endl;

        NhanVien* nv = new NhanVienVP();

        nv->Nhap();
        nv->TinhLuong();

        DS.push_back(nv);
    }
}

void CongTy::XuatDanhSach()
{
    for (NhanVien* nv : DS)
    {
        nv->Xuat();
        cout << endl;
    }
}

double CongTy::TongLuong()
{
    double tong = 0;

    for (NhanVien* nv : DS)
    {
        tong += nv->GetLuong();
    }

    return tong;
}

void CongTy::NVSXLuongThapNhat()
{
    NhanVienSX* minNV = nullptr;

    for (NhanVien* nv : DS)
    {
        NhanVienSX* sx =
            dynamic_cast<NhanVienSX*>(nv);

        if (sx)
        {
            if (minNV == nullptr ||
                sx->GetLuong() < minNV->GetLuong())
            {
                minNV = sx;
            }
        }
    }

    if (minNV)
    {
        cout << "\nNhan vien san xuat luong thap nhat: "
            << minNV->GetHoTen()
            << endl;
    }
}

void CongTy::NVVPLonTuoiNhat()
{
    NhanVienVP* maxNV = nullptr;

    for (NhanVien* nv : DS)
    {
        NhanVienVP* vp =
            dynamic_cast<NhanVienVP*>(nv);

        if (vp)
        {
            if (maxNV == nullptr ||
                vp->GetNamSinh() < maxNV->GetNamSinh())
            {
                maxNV = vp;
            }
        }
    }

    if (maxNV)
    {
        cout << "\nNhan vien van phong lon tuoi nhat: "
            << maxNV->GetHoTen()
            << endl;
    }
}