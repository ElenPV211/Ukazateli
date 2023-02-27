/*Используя два указателя на массивы целых чисел, скопировать один массив в другой так, чтобы во втором массиве элементы находились в обратном порядке.
     Использовать в программе арифметику указателей для продвижения по массиву, а также опе-ратор разыменования.
*/
#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    const int size = 10;
    int arr[size] = { 1,2,3,4,5,6,7,8,9,10 };
    int arr2[size];

    int* ptr = arr;
    int* ptr2 = arr2;

    cout << "Вывод первого массива: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }



    cout << "\nВывод второго массива: ";

    for (int i = size - 1; i >= 0; i--)
    {

        for (int j = 0; j < size; j++)

        {
            *(ptr2 + j) = *(ptr + i);
        }
        cout << *(ptr2 + i) << "  ";
    }
    return 0;
}

