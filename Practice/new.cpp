#include <bits/stdc++.h>
using namespace std;
void printArray(vector<int> arr, int n){
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void printSubsequences(vector<int> arr, int index, vector<int> subarr)
{
    if (index == arr.size())
    {
        int l = subarr.size();
        if (l != 0)
        printArray(subarr, l);
    }
    else{
        printSubsequences(arr, index + 1, subarr);
        subarr.push_back(arr[index]);
        printSubsequences(arr, index + 1, subarr);
    }
    return;
}
 
// Driver Code

int main()
{

    vector<int> arr{1, 2, 3};
    vector<int> b;

    printSubsequences(arr, 0, b);
 

    return 0;
}
 
// This code is contributed by
// sanjeev2552