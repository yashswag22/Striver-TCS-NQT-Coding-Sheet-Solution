vector<int> customSort(vector<int>& arr) {
    int n = arr.size() / 2;
    
    // Sort the first half in ascending order
    sort(arr.begin(), arr.begin() + n);
    
    // Sort the second half in descending order
    sort(arr.begin() + n, arr.end(), greater<int>());
    
    // Return the sorted array
    return arr;
}
