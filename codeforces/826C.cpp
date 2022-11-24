#include <bits/stdc++.h>
using namespace std;
// bool KpartitionsPossible(int arr[], int n, int K)
// {
//     int prefix_sum[n];
//     prefix_sum[0] = arr[0];
//     for (int i = 1; i < n; i++)
//         prefix_sum[i] =  prefix_sum[i - 1] + arr[i]; 
//     int total_sum = prefix_sum[n-1];
//     if (total_sum % K != 0)
//         return false;
//     int temp = 0;
     
//     int pos = -1;
//     for (int i = 0; i < n; i++)
//     {       
//         if (prefix_sum[i] - (pos == -1 ? 0 :
//             prefix_sum[pos]) == total_sum / K)
//         {
//             pos = i;
//             temp++;
//         }
//         else if (prefix_sum[i] - prefix_sum[pos] >
//                 total_sum / K)
//             break;
//     }
//     return (temp == K);
// }
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = n; i >= 1; i--){
            if (KpartitionsPossible(arr,n,i)){
                cout <<min(n-i+1 , i)<< endl;
                break;
            }
        }
    }
    return 0;
}
