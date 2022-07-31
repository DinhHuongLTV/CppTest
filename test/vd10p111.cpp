#include <iostream>

using namespace std;

void minFunc(int *x, int numberOfRows, int numberOfColumns)
{
    int k, kmin = 0, min = *x;
    for (k = 0; k < numberOfColumns * numberOfRows; k++)
    {
        // cout << kmin << endl;
        // ! nếu mà kmin không khởi tạo và giá trị min nằm ở phần tử đầu thì sẽ lỗi
        if (min > *(x + k))
        {
            min = *(x + k);
            kmin = k;
        }
    }

    cout << "Min: [" << kmin / numberOfColumns << ']' << '[' << kmin % numberOfColumns << "]: " << *(x + kmin);
}

int main(void)
{
    // int myMatrix[20][20];
    // int m, n;
    // cin >> m >> n;
    // // myMatrix = new int[m * n];
    // for (int i = 0; i < m; i++)
    //     for (int j = 0; j < n; j++)
    //         cin >> myMatrix[i][j];

    // minFunc(*(myMatrix), m, n);

    float a[10][10];
    int a2[10][10];
    cout << int(&a[2][2]) << " " << int(&a[2][3]) << endl;
    cout << int(&a2[2][2]) << " " << int(&a2[2][3]);
    return 0;
}