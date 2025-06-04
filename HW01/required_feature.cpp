#include <iostream> 
#include <vector>

using namespace std; // [필수 기능 구현 과제 HW01]

int getSum(const vector<int>& arr) 
{
    int sum = 0;
    for (int val : arr) // arr 배열의 모든요소를 하나씩 대입
    {
        sum += val;
    }
    return sum;
}

double getAverage(const vector<int>& arr) 
{
    return (double)getSum(arr) / arr.size(); // 소수점 평균까지 받기위해서 명시적 형 변환  
}



int main()
{
    vector<int> arr; // 5개 입력뿐 아니라 N개 입력까지 가능하도록 동적 배열로 구현
    int arrLength;
    
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

    cout << "< 총 " << arrLength << "개 숫자의 계산 결과 >" << endl;
    cout << "합계: " << getSum(arr) << endl;
    cout << "평균: " << getAverage(arr) << endl;

    return 0;
}
