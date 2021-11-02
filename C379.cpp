#include "nhapxuat.h"

void demNhoNhat(int a[][MAX], int row, int col)
{
    // tim so nho nhat trong mang
    int min = a[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (min > a[i][j])
            {
                min = a[i][j];
            }
        }
    }
    // dem so luong gia tri min trong mang
    int dem = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] == min)
                dem++;
        }
    }
    
    cout << "Co (" << dem << ") gia tri nho nhat trong mang" << endl;
    
}
int main()
{
    int a[MAX][MAX];
    int row, col;
    row = col = 3;
    nhapMang(a, row, col);
    xuatMang(a, row, col);
    demNhoNhat(a, row, col);
    return 0;
}