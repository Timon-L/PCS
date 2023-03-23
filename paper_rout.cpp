#include <bits/stdc++.h>
using namespace std;

int main(){

    int s{};

    cin >> s;

    for(int i = 0; i < s; i++){
        int h{};
        int sum{};
        int max{};
        vector<int> sets{};

        cin >> h;

        for(int house = 0; house < h; house++){
            int payment;
            cin >> payment; 
            sum += payment;
            
            if(sets.size() > 1){
                if(sum > max){
                    max = sum;
                }
                for(size_t i = 0; i < sets.size() - 1; i++){
                    if(sum - sets[i] > max){
                        max = sum - sets[i];
                    }
                }
            }
            sets.push_back(sum);
        }
        cout << max << endl;
    }
    return 0;
}