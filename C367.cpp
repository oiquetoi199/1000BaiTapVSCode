#include "nhapxuat.h"

void giaTriLonNhat(int a[][MAX], int row, int col)
{
    int temp = a[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] >= temp) 
                temp = a[i][j];
        }
    }
    cout << "Gia tri lon nhat trong mang la : " << temp << endl;
}

int main()
{
    int a[MAX][MAX];
    int row, col;
    row = col = 3;

    nhapMang(a, row, col);
    xuatMang(a, row, col);
    giaTriLonNhat(a, row, col);
    return 0;
}