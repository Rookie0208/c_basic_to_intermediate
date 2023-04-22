#include<bits/stdc++.h.>
using namespace std;
int solution(int a[], int n) {
    int ans = 0;
    int count = 0;
    int j;
    for(j = 0; j<n; j++) {
        if(a[j] > a[j+1]) {
            count++;
            ans++;

            if(count == 2) break;
        }
    }
    ans--;
    cout << j << " "<< ans;
    for(int i = j+1; i<n-1; i++) {
        if(a[i] < a[i+1]) {
            ans++;
        }
    }
    return ans;
}
int main() {
    int n = 20;
    int a[] = {2,2,5,4,1,5,4,3,3,3,4,3,5,3,1,3,1,3,4,4};
    // int a[] = {8,3,4,5,5,7,5,4,8};

    cout << solution(a,n);
    
}