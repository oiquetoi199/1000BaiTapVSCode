#include "nhapxuat.h"

void nhapMangTuDong(float a[][MAX], int row, int col)
{
    int dem = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            a[i][j] = dem++;
        }
    }
}


bool kiemTraCucTri(float a[][MAX], int vtrow, int vtcol, int row, int col)
{
    int flagMax, flagMin;
    flagMax = 1;
    flagMin = 1;
    if (vtrow > 0 && vtrow < row - 1 && vtcol > 0 && vtcol < col - 1)
    {
        for (int i = -1; i <= 1; i++)
       {
            for (int j = -1; j <= 1; j++)
            {
                if (i == 0 && j == 0)
                    continue;
                if (a[vtrow][vtcol] <= a[vtrow + i][vtcol + j])
                    flagMax = 0;
                if (a[vtrow][vtcol] >= a[vtrow + i][vtcol + j])
                    flagMin = 0;
            }        
        }
    }
// xet tai hang thu 0
    if (vtrow == 0)
    {

        if (vtcol == 0) // xet cot thu 0 (a[0][0])
        {
            for (int i = 0; i <= 1; i++)
            {
                for (int j = 0; j <= 1; j++)
                {
                    if (i == 0 && j == 0)
                        continue;
                    if (a[vtrow][vtcol] <= a[vtrow + i][vtcol + j])
                        flagMax = 0;
                    if (a[vtrow][vtcol] >= a[vtrow + i][vtcol + j])
                        flagMin = 0;
                }
            }
        }

        else if (vtcol == col - 1) // xet cot thu col - 1 
        {
            for (int i = 0; i <= 1; i++)
            {
                for (int j = -1; j <= 0; j++)
                {
                    if (i == 0 && j == 0)
                        continue;
                    if (a[vtrow][vtcol] <= a[vtrow + i][vtcol + j])
                        flagMax = 0;
                    if (a[vtrow][vtcol] >= a[vtrow + i][vtcol + j])
                        flagMin = 0;
                }
            }
        }

        else // xet cac cot con lai
        {
            for (int i = 0; i <= 1; i++)
            {
                for (int j = -1; j <= 1; j++)
                {
                    if (i == 0 && j == 0)
                        continue;
                    if (a[vtrow][vtcol] <= a[vtrow + i][vtcol + j])
                        flagMax = 0;
                    if (a[vtrow][vtcol] >= a[vtrow + i][vtcol + j])
                        flagMin = 0;
                }
                
            }
        }
    }
// xet tai hang thu row - 1  
    else if (vtrow == row - 1)
    {
        
        if (vtcol == 0) // xet gia tri tai cot 0
        {
            for (int i = -1; i <= 0; i++)
            {
                for (int j = 0; j <= 1; j++)
                {
                    if (i == 0 && j == 0)
                        continue;
                    if (a[vtrow][vtcol] <= a[vtrow + i][vtcol + j])
                        flagMax = 0;
                    if (a[vtrow][vtcol] >= a[vtrow + i][vtcol + j])
                        flagMin = 0;
                }                
            }           
        }

        else if (vtcol == col - 1) // xet gia tri cot col - 1 
        {
            for (int i = -1; i <= 0; i++)
            {
                for (int j = -1; j <= 0; j++)
                {
                    if (i == 0 && j == 0)
                        continue;
                    if (a[vtrow][vtcol] <= a[vtrow + i][vtcol + j])
                        flagMax = 0;
                    if (a[vtrow][vtcol] >= a[vtrow + i][vtcol + j])
                        flagMin = 0;
                }
            }
        }

        else // xet cac cot con lai
        {
            for (int i = -1; i <= 0; i++)
            {
                for (int j = -1; j <= 1; j++)
                {
                    if (i == 0 && j == 0)
                        continue;
                    if (a[vtrow][vtcol] <= a[vtrow + i][vtcol + j])
                        flagMax = 0;
                    if (a[vtrow][vtcol] >= a[vtrow + i][vtcol + j])
                        flagMin = 0;
                }
            }
        }
    }
    
// xet tai cot thu 0
    if (vtcol == 0)
    {
        if (vtrow != 0 && vtrow != row - 1) // khong xet a[0][0] va a[0][row - 1]
        {
            for (int i = -1; i <= 1; i++)
            {
                for (int j = 0; j <= 1; j++)
                {
                    if (i == 0 && j == 0)
                        continue;
                    if (a[vtrow][vtcol] <= a[vtrow + i][vtcol + j])
                        flagMax = 0;
                    if (a[vtrow][vtcol] >= a[vtrow + i][vtcol + j])
                        flagMin = 0;
                }
            }
        }
    }
    
// xet vi tri cot bang col - 1
    if (vtcol == col - 1)
    {
        if (vtrow != 0 && vtrow != row - 1) // khong xet a[0][0] va a[0][row - 1]
        {
            for (int i = -1; i <= 1; i++)
            {
                for (int j = -1; j <= 0; j++)
                {
                    if (i == 0 && j == 0)
                        continue;
                    if (a[vtrow][vtcol] <= a[vtrow + i][vtcol + j])
                        flagMax = 0;
                    if (a[vtrow][vtcol] >= a[vtrow + i][vtcol + j])
                        flagMin = 0;
                }
            }
        }
    }


    if (flagMax == 1)
        return 1;
    if (flagMin == 1)
        return 1;
    return 0;
}

void demCucTri(float a[][MAX], int row, int col)
{
    int dem = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (kiemTraCucTri(a, i, j, row, col) == 1)
            {
                cout << a[i][j] << endl;
                dem++;
            }
        }
    }
    cout << "Trong ma tran co (" << dem << ") gia tri cuc tri\n";

}

int main()
{
    float a[MAX][MAX];
    int row = 7, col = 7;
    nhapMangTuDong(a, row, col);
    xuatMang(a, row, col);
    demCucTri(a, row, col);
    return 0;
}