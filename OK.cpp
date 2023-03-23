#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t{};
    cin >> t;

    for(int line = 0; line < t; line++){
        string s{};
        cin >> s;
        
        int o = INT_MIN;
        int k = INT_MIN;

        for(size_t i = 0; i < s.size(); i++){
            if(o == INT_MIN && s[i] == 'O'){
                o = i;
            }
            else if(o != INT_MIN && k == INT_MIN && s[i] == 'K'){
                k = i;
                break;
            }
        }

        if(o == INT_MIN || k == INT_MIN){
            cout << "NO" << endl;
        }
        else if(o > k){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }

    return 0;
}
