#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// time: O(N)
// space: O(N)
/*int maxSubsetSum(vector<int> arr) {
    vector<int> max(arr.size(), 0);
    max[0] = arr[0];
    max[1] = (arr[0] > arr[1]) ? arr[0] : arr[1];

    for (int i = 2; i < arr.size(); i++) {
        if (arr[i] > (max[i-2] + arr[i])) {
            max[i] = (arr[i] > max[i-1]) ? arr[i] : max[i-1];
        } else {
            max[i] = ((max[i-2] + arr[i]) > max[i-1]) ? (max[i-2] + arr[i]) : max[i-1];
        }
    }

    return max[arr.size()-1];
}*/

// time: O(N)
// space: O(1)
int maxSubsetSum(vector<int> arr) {
    int max2Before = arr[0];
    int maxPrev = (arr[0] > arr[1]) ? arr[0] : arr[1];
    int currMax = 0;
    for (int i = 2; i < arr.size(); i++) {
        if (arr[i] > (max2Before + arr[i])) {
            currMax = (arr[i] > maxPrev) ? arr[i] : maxPrev;
        } else {
            currMax = ((max2Before + arr[i]) > maxPrev) ? (max2Before + arr[i]) : maxPrev;
        }
        max2Before = maxPrev;
        maxPrev = currMax;
    }

    return currMax;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    int res = maxSubsetSum(arr);

    fout << res << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
