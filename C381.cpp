#include "nhapxuat.h"

// kiem tra xem dang sau vtXet co phan tu giong no khong
bool checkSau(int b[], int soPhanTuMang, int vtXet)
{
    for (int i = vtXet + 1; i < soPhanTuMang; i++)
    {
        if(b[vtXet] == b[i])
            return 1;
    }
    return 0;
}

// dem xem dang truoc vtXet xuat hien bao nhieu lan
int demSoLanXuatHienDangTruoc(int b[], int soPhanTuMang, int vtXet)
{
    int dem = 0;
    for (int i = vtXet; i >= 0 ; i--)
    {
       if (b[vtXet] == b[i]) 
       {
           dem++;
       }
    }
    return dem;
}

void xuatHienNhieuLan(int a[][MAX], int row, int col)
{
    // tao ra mang 1 chieu b tu mang 2 chieu a
    int n = row * col;
    int b[n];
    int k = 0; // so luong phan tu cua mang b
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            b[k] = a[i][j];
            k++;
        }
    }

    // tim gia tri xuat hien nhieu nhat
    int gtXuatHienNhieuNhat;
    int soLanXuatHien;
    for (int i = 0; i < k; i++)
    {
        if (checkSau(b,k,i) == 1)
            continue;
        else
        {
            // gan gia tri dau tien cho 2 bien tren
            soLanXuatHien = demSoLanXuatHienDangTruoc(b, k, i);
            gtXuatHienNhieuNhat = b[i]; 
            break;
        }
    }


    // so sanh cac gia tri de tim ra so lan xuat hien nhieu nhat
    for (int i = 0; i < k; i++)
    {
        if (checkSau(b,k,i) == 1)
            continue;
        else
        {
            if (demSoLanXuatHienDangTruoc(b, k , i) > soLanXuatHien)
            {
                soLanXuatHien = demSoLanXuatHienDangTruoc(b, k, i);
                gtXuatHienNhieuNhat = b[i];
            }
        }
    }
    cout << "Gia tri xuat hien nhieu nhat trong mang la " << gtXuatHienNhieuNhat << endl;
    

}

int main()
{
    int a[MAX][MAX];
    int row, col;
    row = col = 4;
    nhapMang(a, row, col);
    system("cls");
    xuatMang(a, row, col);
    xuatHienNhieuLan(a, row, col);
    return 0;
}