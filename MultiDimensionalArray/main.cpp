#include <iostream>

using namespace std;

int main()
{
    int**  a2d = new int*[5];
    for(int i =0;i<5;i++)
        a2d[i] = new int[5];


    for(int x =0; x<5;x++)
    {
        for(int y =0 ; y<5;y++)
        {
            a2d[x][y] = 2;
        }
    }
    delete[] a2d;

    int* array = new int[5 * 5];
    for(int i = 0; i<5 * 5; i++)
    {
        array[i]  = 2;
    }
    // int***  a3d = new int**[50];
    // for(int i =0;i<50;i++)
    // {

    //     a3d[i] = new int*[50];
    //     for(int j = 0; j<50;j++)
    //     {
    //         int** ptr = a3d[i];
    //         ptr[j] = new int[50];
    //     }
    // }

    cout << "Hello World!" << endl;
    return 0;
}
