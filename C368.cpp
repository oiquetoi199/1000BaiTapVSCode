#include "nhapxuat.h"

int gtLonNhat(int a[][MAX], int row, int col)
{
    int temp = a[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (temp < a[i][j])
                temp = a[i][j];
        }
         
    }
    return temp;
}

void lonThuHai(int a[][MAX], int row, int col)
{
    int max = gtLonNhat(a, row, col);
    int temp = a[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if ((temp < a[i][j] || temp == max) && a[i][j] != max)
                temp = a[i][j];

        }
          
    }
    cout << "Gia tri lon thu 2 trong mang la " << temp << endl; 
}

int main()
{
    int a[MAX][MAX];
    int row, col;
    row = col = 3;
    nhapMang(a, row, col);
    xuatMang(a, row, col);
    lonThuHai(a, row, col);
    return 0;
}