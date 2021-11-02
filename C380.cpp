#include "nhapxuat.h"

void demChanNhoNhat(int a[][MAX], int row, int col)
{
    // tim gia tri chan nho nhat
    int temp = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] % 2 == 0)
            {
                temp = a[i][j];
                goto demChanNhoNhat;
            }
        }
    }
    if (temp == 1)
    {
        cout << "Khong co phan tu chan trong mang : " << endl;
        return;
    }
    
    demChanNhoNhat:
    // tim gt chan nho nhat
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (temp > a[i][j] && a[i][j] % 2 == 0)
            {
                temp = a[i][j];
            }
        }
    }
    // dem gia tri chan nho nhat
    int dem = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] == temp)
            {
                dem++;
            }
        }
    }
    
    cout << "Co (" << dem << ") gia tri chan nho nhat (" << temp << ") trong mang\n"; 
}
int main()
{
    int a[MAX][MAX];
    int row, col;
    row = col = 3;
    nhapMang(a, row, col);
    xuatMang(a, row, col);
    demChanNhoNhat(a, row, col);

    return 0;
}