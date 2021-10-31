template <class dataType>
void nhapMang(dataType a[][MAX], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "a[" << i << "]" << "[" << j << "] = ";
            cin >> a[i][j];
        }
    } 
}

template <class dataType>
void xuatMang(dataType a[][MAX], int row, int col)
{
    int w = 3;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << setw(w) << a[i][j] << " ";
        }
        cout << endl;
    }
    
}

template <class dataType>
void xuatMang2(dataType a[][MAX + 2], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    } 
}