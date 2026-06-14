#include <iostream>
#include <vector>

#include "DangerSorter.h"

using namespace std;

void merge(vector<int>& arr, int left, int mid, int right)
{
    vector<int> temp;

    int i = left;
    int j = mid + 1;

    while(i <= mid && j <= right)
    {
        if(arr[i] > arr[j])
            temp.push_back(arr[i++]);
        else
            temp.push_back(arr[j++]);
    }

    while(i <= mid)
        temp.push_back(arr[i++]);

    while(j <= right)
        temp.push_back(arr[j++]);

    for(int k = left; k <= right; k++)
        arr[k] = temp[k - left];
}

void mergeSort(vector<int>& arr, int left, int right)
{
    if(left >= right)
        return;

    int mid = (left + right) / 2;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);

    merge(arr, left, mid, right);
}

void DangerSorter::run()
{
    vector<int> riskScores = {75, 90, 60, 95, 82, 70};

    cout << "\n===== DANGER SORTER =====\n";

    cout << "\nBefore Sorting:\n";

    for(int score : riskScores)
        cout << score << " ";

    mergeSort(riskScores, 0, riskScores.size() - 1);

    cout << "\n\nAfter Sorting (High Risk First):\n";

    for(int score : riskScores)
        cout << score << " ";

    cout << "\n\nTime Complexity: O(n log n)\n";
}