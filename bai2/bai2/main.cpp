#include <iostream>
#include <vector>

#include "GiaoDichDat.h"
#include "GiaoDichNhaPho.h"
#include "GiaoDichCanHo.h"

using namespace std;

int main() {

    vector<GiaoDich*> ds;

    int nDat, nNha, nCanHo;

    cout << "Nhap so GD Dat: ";
    cin >> nDat;

    for (int i = 0; i < nDat; i++) {
        cout << "\nGiao dich dat " << i + 1 << endl;

        GiaoDich* p = new GiaoDichDat();
        p->Nhap();
        ds.push_back(p);
    }

    cout << "\nNhap so GD Nha pho: ";
    cin >> nNha;

    for (int i = 0; i < nNha; i++) {
        cout << "\nGiao dich nha pho " << i + 1 << endl;

        GiaoDich* p = new GiaoDichNhaPho();
        p->Nhap();
        ds.push_back(p);
    }

    cout << "\nNhap so GD Can ho: ";
    cin >> nCanHo;

    double tongCanHo = 0;
    int demCanHo = 0;

    GiaoDichNhaPho* nhaMax = NULL;
    double maxTien = -1;

    for (int i = 0; i < nCanHo; i++) {

        cout << "\nGiao dich can ho " << i + 1 << endl;

        GiaoDich* p = new GiaoDichCanHo();
        p->Nhap();

        ds.push_back(p);
    }

    cout << "\n===== TONG SO LUONG =====\n";
    cout << "Dat: " << nDat << endl;
    cout << "Nha pho: " << nNha << endl;
    cout << "Can ho: " << nCanHo << endl;

    for (auto x : ds) {

        GiaoDichCanHo* ch =
            dynamic_cast<GiaoDichCanHo*>(x);

        if (ch) {
            tongCanHo += ch->ThanhTien();
            demCanHo++;
        }

        GiaoDichNhaPho* np =
            dynamic_cast<GiaoDichNhaPho*>(x);

        if (np) {
            if (np->ThanhTien() > maxTien) {
                maxTien = np->ThanhTien();
                nhaMax = np;
            }
        }
    }

    cout << "\n===== TB THANH TIEN CAN HO =====\n";

    if (demCanHo)
        cout << tongCanHo / demCanHo << endl;

    cout << "\n===== NHA PHO TRI GIA CAO NHAT =====\n";

    if (nhaMax)
        nhaMax->Xuat();

    cout << "\n===== GIAO DICH THANG 12/2024 =====\n";

    for (auto x : ds) {

        string ngay = x->getNgayGD();

        if (ngay.size() >= 10 &&
            ngay.substr(3, 2) == "12" &&
            ngay.substr(6, 4) == "2024")
        {
            x->Xuat();
            cout << endl;
        }
    }

    for (auto x : ds)
        delete x;

    return 0;
}