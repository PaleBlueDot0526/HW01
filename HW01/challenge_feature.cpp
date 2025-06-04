#include <iostream> 
#include <vector>

using namespace std; // [도전 기능 구현 과제 HW01]

void sortAscending(vector<int>& arr) // 오름차순 정렬
{
    for (int i = 1; i < arr.size(); i++) // 삽입정렬 사용시 처음 왼쪽 끝 숫자는 정렬이 끝난 것으로 간주하고 넘어가므로 1부터 시작
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

void sortDescending(vector<int>& arr) // 내림차순 정렬
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
    vector<int> arr; // 5개 입력뿐 아니라 N개 입력까지 가능하도록 동적 배열로 구현
    int arrLength;
    int sortType;

    cout << "배열에 저장할 숫자의 개수: ";
    cin >> arrLength;

    for (int i = 1; i <= arrLength; i++)
    {
        int value;

        cout << i << "번째 숫자 입력: ";
        cin >> value;
        arr.push_back(value);
    }
    cout << endl;


    while (true)
    {
        cout << "정렬 방법 선택 → 1.오름차순 2.내림차순 " << endl;
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
            cout << "1 또는 2만 입력해주세요!" << endl;
            continue;
        }
    }
    
    cout << ((sortType == 1) ? "오름차순: " : "내림차순: ");
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
