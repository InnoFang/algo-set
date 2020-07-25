#include<iostream> 

using namespace std;

int main() {  

#ifndef ONLINE_JUDGE
   freopen("in.txt", "r", stdin);
#endif
   
    int T;
    while(~scanf("%d", &T)) { 
        for (int cas = 1; cas <= T; cas++) {

            int n;
            cin >> n;
            int arr[n];
            for (int i = 0; i < n; i++) {
                cin >> arr[i];
            }
            int maxIdx = 0, minIdx = 0;
            for (int i  = 1; i < n; i++) {
                if (arr[maxIdx] < arr[i]) maxIdx = i;
                if (arr[minIdx] > arr[i]) minIdx = i;
            }
            if (minIdx == 0 && maxIdx == n - 1) {
                swap(arr[0], arr[n-1]);
            } else if (minIdx == 0) {
                swap(arr[maxIdx], arr[n - 1]);
                swap(arr[0], arr[n - 1]);
            } else if (maxIdx == n - 1) {
                swap(arr[minIdx], arr[0]);
                swap(arr[0], arr[n - 1]);
            } else {
                swap(arr[minIdx], arr[n - 1]);
                swap(arr[maxIdx], arr[0]);
            }
            
            printf("Case #%d:", cas);
            for(auto a: arr) cout << " " << a;
            cout << endl;
        }
    }

#ifndef ONLINE_JUDGE
    fclose(stdin);
#endif

    return 0;
}
