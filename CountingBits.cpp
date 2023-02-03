#include <iostream>
#include <vector>

using namespace std;

class Solution {
    
public:
    vector <int> countBits(int num) {
        vector<int> ans(num);
        ans.push_back(0);  
        if (num == 0) return ans;
        
        for (int i = 1; i <= num; i++) {
            if (i % 2 == 0) 
                ans[i] = ans[i / 2];
            else
                ans[i] = ans[i - 1] + 1;
        }
        return ans;
    }
};

int main()
{
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    Solution s1;
    cout << "[";
    for (int i = 0; i < s1.countBits(n).size(); i++) {
        cout << s1.countBits(n).at(i);
        if(i != s1.countBits(n).size()-1){
            cout << ",";
        }
    }
    cout << "]";

    return 0;
}







