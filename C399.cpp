#include "nhapxuat.h"

void dichTraiXoayVongNguocChieuKimDongHo(int a[][MAX], int row, int col)
{
    // lay 1 gia tri ra 
    int temp = a[0][0];

    // dich dong 0 sang trai
    for (int i = 0; i < col - 1; i++)
    {
        a[0][i] = a[0][i + 1];
    }
    
    // dich cot (col - 1) len tren
    for (int i = 0; i < row - 1; i ++)
    {
        a[i][col - 1] = a[i + 1][col -1];
    }

    // dich dong (row - 1) sang phai
    for (int i = col - 1; i > 0; i--)
    {
        a[row - 1][i] = a[row - 1][i - 1];
    }

    // dich cot 0 xuong duoi 
    for (int i = row - 1; i > 0; i--)
    {
        if (i == 1)
            a[i][0] = temp;
        else
            a[i][0] = a[i - 1][0];
    }
}

int main()
{
    int a[MAX][MAX];
    int row = 4, col = 6;
    nhapMangTuDong(a, row, col);
    xuatMang(a, row, col);
    dichTraiXoayVongNguocChieuKimDongHo(a, row, col);
    cout << "Mang sau khi dich chuyen la: \n";
    xuatMang(a, row, col);
    return 0;
}