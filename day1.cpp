// problem : second largest

// code

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr)
    {
        // Code Here

        // simple code

        int mini = -1;
        int maxi = 0;

        for (int i = 0; i < arr.size(); i++)
        {
            if (maxi < arr[i]) // [12, 35, 1, 10, 34, 1]
            {
                mini = maxi;
                maxi = arr[i];
            }
            else if (mini < arr[i] && arr[i] < maxi)
            {
                mini = arr[i];
            }
        }
        return mini;
    }
};

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number)
        {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}