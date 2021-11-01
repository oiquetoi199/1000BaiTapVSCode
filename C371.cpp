#include "nhapxuat.h"

void dongChuaMax(float a[][MAX], int row, int col)
{
    // tim max;
    int max = a[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <  col; j++)
        {
            if(max < a[i][j])
            {
                max = a[i][j];
            }
        }
    }
    // liet ke dong chua gia tri lon nhat
    cout << "Cac dong chua gia tri lon nhat la : ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] == max)
            {
                cout << i << " ";
                break;
            }
        }
    }
    cout << endl;
}
int main()
{
    float a[MAX][MAX];
    int row, col;
    row = col = 3;
    nhapMang(a, row, col);
    xuatMang(a, row, col);
    dongChuaMax(a, row, col);
    return 0;
}