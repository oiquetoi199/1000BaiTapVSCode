#include "nhapxuat.h"

void timDuongNhoNhat(int a[][MAX], int row, int col)
{
    // tim so chan dau tien trong mang
    int temp;
    int flag = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j  < col; j++)
        {
            if (a[i][j] >= 0)
            {
                temp = a[i][j];
                flag = 1;
            }
        }
    }
    if (flag == 0)
    {
        cout << "Khong co gia tri duong trong mang !!!" << endl;
        return;
    }
    // tim gia tri duong nho nhat
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] >= 0 && a[i][j] < temp)
                temp = a[i][j];
        }
    }
    cout << "Gia tri duong nho nhat trong mang la : " << temp << endl;
    
}

int main()
{
    int a[MAX][MAX];
    int row, col;
    row = col = 3;
    nhapMang(a, row, col);
    system("cls");
    xuatMang(a, row, col);
    timDuongNhoNhat(a, row, col);
    return 0;
}