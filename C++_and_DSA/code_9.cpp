//Possible Subarray
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=5;
//     int arr[n]={1,3,5,7,8};
//     for(int st=0;st<n;st++)
//     {
//         for(int end=st;end<n;end++)
//         {
//             int sum=0;
//             for(int i=st;i<=end;i++)
//             {
//                 sum=sum+arr[i];
//             }
//             cout<<sum;
//             cout<<" ";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

//Maximum Subarray Sum
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=5;
//     int maxSum=0;
//     int arr[n]={1,2,3,4,5};
//     for(int st=0;st<n;st++)
//     {
//         int sum=0;
//         for(int end=st;end<n;end++)
//         {
//             sum = sum+arr[end];
//             maxSum = max(sum,maxSum);
//         }
        
//     }
//     cout<<maxSum;
//     return 0;
// }

//Kadane's Algorithm
#include<iostream>
using namespace std;
int main()
{
    int n=7;
    int maxSum=0;
    int cSum=0;
    int arr[n]={3,-4,5,4,-1,7,-8};
    for(int i=0;i<n;i++)
    {
        cSum += arr[i];
        maxSum=max(cSum,maxSum);
        if(cSum<0)
        {
            cSum = 0;
        }
    }
    cout<<maxSum;
    return 0;
}