/*��������� ��� ��������� �� ������� ����� �����, ����������� ���� ������ � ������ ���, ����� �� ������ ������� �������� ���������� � �������� �������.
     ������������ � ��������� ���������� ���������� ��� ����������� �� �������, � ����� ���-����� �������������.
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

    cout << "����� ������� �������: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }



    cout << "\n����� ������� �������: ";

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

