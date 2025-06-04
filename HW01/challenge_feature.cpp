#include <iostream> 
#include <vector>

using namespace std; // [���� ��� ���� ���� HW01]

void sortAscending(vector<int>& arr) // �������� ����
{
    for (int i = 1; i < arr.size(); i++) // �������� ���� ó�� ���� �� ���ڴ� ������ ���� ������ �����ϰ� �Ѿ�Ƿ� 1���� ����
    {
        for (int j = i; j > 0; j--)
        {   
            if (arr[j-1] > arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
}

void sortDescending(vector<int>& arr) // �������� ����
{
    for (int i = 1; i < arr.size(); i++) 
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j - 1] < arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
}

int main()
{
    vector<int> arr; // 5�� �Է»� �ƴ϶� N�� �Է±��� �����ϵ��� ���� �迭�� ����
    int arrLength;
    int sortType;

    cout << "�迭�� ������ ������ ����: ";
    cin >> arrLength;

    for (int i = 1; i <= arrLength; i++)
    {
        int value;

        cout << i << "��° ���� �Է�: ";
        cin >> value;
        arr.push_back(value);
    }
    cout << endl;


    while (true)
    {
        cout << "���� ��� ���� �� 1.�������� 2.�������� " << endl;
        cin >> sortType;

        if (sortType == 1)
        {
            sortAscending(arr);
            break;
        }
        else if (sortType == 2)
        {
            sortDescending(arr);
            break;
        }
        else
        {
            cout << "1 �Ǵ� 2�� �Է����ּ���!" << endl;
            continue;
        }
    }
    
    cout << ((sortType == 1) ? "��������: " : "��������: ");
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
