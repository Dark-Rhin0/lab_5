#include "CongTy.h"

CongTy::~CongTy()
{
    for (NhanVien* nv : ds)
        delete nv;
}

void CongTy::NhapDS()
{
    int nSX, nVP;

    cout << "Nhap so nhan vien san xuat: ";
    cin >> nSX;

    cout << "Nhap so nhan vien van phong: ";
    cin >> nVP;

    for (int i = 0; i < nSX; i++)
    {
        cout << "\nNhan vien san xuat thu " << i + 1 << endl;

        NhanVien* nv = new NhanVienSanXuat();

        nv->Nhap();
        nv->TinhLuong();

        ds.push_back(nv);
    }

    for (int i = 0; i < nVP; i++)
    {
        cout << "\nNhan vien van phong thu " << i + 1 << endl;

        NhanVien* nv = new NhanVienVanPhong();

        nv->Nhap();
        nv->TinhLuong();

        ds.push_back(nv);
    }
}

void CongTy::XuatDS()
{
    for (NhanVien* nv : ds)
    {
        nv->Xuat();
        cout << endl;
    }
}

double CongTy::TongLuong()
{
    double tong = 0;

    for (NhanVien* nv : ds)
        tong += nv->LayLuong();

    return tong;
}

void CongTy::NVSXLuongThapNhat()
{
    NhanVienSanXuat* minNV = nullptr;

    for (NhanVien* nv : ds)
    {
        NhanVienSanXuat* sx =
            dynamic_cast<NhanVienSanXuat*>(nv);

        if (sx)
        {
            if (minNV == nullptr ||
                sx->LayLuong() < minNV->LayLuong())
            {
                minNV = sx;
            }
        }
    }

    if (minNV)
    {
        cout << "\nNhan vien san xuat luong thap nhat:\n";
        minNV->Xuat();
    }
}

void CongTy::NVVPTuoiCaoNhat()
{
    NhanVienVanPhong* maxNV = nullptr;

    for (NhanVien* nv : ds)
    {
        NhanVienVanPhong* vp =
            dynamic_cast<NhanVienVanPhong*>(nv);

        if (vp)
        {
            if (maxNV == nullptr ||
                vp->TinhTuoi() > maxNV->TinhTuoi())
            {
                maxNV = vp;
            }
        }
    }

    if (maxNV)
    {
        cout << "\nNhan vien van phong tuoi cao nhat:\n";
        maxNV->Xuat();

        cout << "Tuoi: "
            << maxNV->TinhTuoi()
            << endl;
    }
}