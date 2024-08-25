// vector<int> getSecondOrderElements(int n, vector<int> a) {
//     sort(a.begin(),a.end());
//     vector<int>v;
//     v.push_back(a[n-2]);
//     v.push_back(a[1]);
//     return v;
// }


// let's try without sorting 

vector<int> getSecondOrderElements(int n, vector<int> a) {
    int small = INT_MAX, second_small = INT_MAX;
    int large = INT_MIN, second_large = INT_MIN;

    for(int i =0;i<n;i++){
        if(a[i] < small ){
             second_small = small;
            small = a[i];
        }
        else if(a[i]< second_small) second_small = a[i];

       
        if(large < a[i]) {
            second_large = large;
            large = a[i];
        }
        else if(a[i] > second_large) second_large = a[i];
            
       
    }
    vector<int>v;
    v.push_back(second_large);
    v.push_back(second_small);
    return v;
}
