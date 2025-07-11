#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isvalid(vector<int> &stall, int N, int maxval, int C) {
    int cows = 1;
    int lastposition = stall[0];
    
    for (int i = 1; i < N; i++) {
        if ((stall[i] - lastposition) >= maxval) {
            lastposition = stall[i];
            cows++;
        }
        if (cows >= C) {
            return true;
        }
    }
    return false;
}


int main() {

	int N, C;
	cin>> N >> C;
	vector <int> stall (N);
	for (int i = 0 ; i<N ; i++){
        cin>> stall[i];
	}
    sort(stall.begin(), stall.end());

    int start = 1;
    int end = stall[N-1] - stall[0];
    int ans = -1;
    while(start <= end ){
        int mid = start +(end - start)/2;
        if (isvalid(stall , N, mid, C)){
            ans = mid;
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    cout<< ans<<endl;



	return 0;
}
