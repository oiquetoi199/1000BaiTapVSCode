#include "nhapxuat.h"

void demAm(float a[][MAX], int row, int col)
{
    int dem = 0;
    for (int i = 0; i < col; i++)
    {
        dem = 0;
        for (int j = 0; j < row; j++)
        {
            if (a[j][i] < 0)
            {
                dem++;
            }
        }
        cout << "Co (" << dem << ") phan tu am trong cot thu (" << i << ")\n";
    }
    
}
int main()
{
    float a[MAX][MAX];
    int row = 3, col = 3;
    nhapMang(a, row, col);
    xuatMang(a, row, col);
    demAm(a, row, col);
}