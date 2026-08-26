//Pair Sum
// #include<iostream>
// using namespace std;
// void pairIndex(int arr1[],int arr2[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i;j<n;j++)
//         {
//             if(arr1[i]+arr1[j]==9)
//             {
//                 arr2[0]=i;
//                 arr2[1]=j;
//             }
//         }
//     }
// }
// int main()
// {
//     int n=4;
//     int m=2;
//     int arr1[n]={2,7,11,15};
//     int arr2[m];
//     pairIndex(arr1,arr2,n);
//     int sum=0;
//     for(int i=0;i<m;i++)
//     {
//         int idx=0;
//         idx=arr2[i];
//         cout<<arr1[idx]<<'\n';
//         sum += arr1[idx];
//     }
//     cout<<sum;
//     return 0;

// }

//Second Approch
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> pairSum(int arr[],int n,int tar,vector<int> ans)
// {
//     int i=0,j=n-1;
//     while(i<j)
//     {
//         if(arr[i]+arr[j]>tar)
//         {
//             j--;
//         }
//         else if(arr[i]+arr[j]<tar)
//         {
//             i++;
//         }
//         else if(arr[i]+arr[j]==tar)
//         {
//             ans.push_back(i);
//             ans.push_back(j);
//         }
//     }
//     return ans;

// }
// int main()
// {
//     int tar=9;
//     int n=4;
//     int arr[n]={2,7,11,15};
//     vector<int> ans=pairSum(arr,n,tar,ans);
//     cout<<ans[0]<<","<<ans[1];
//     return 0;

// }

//Majority element
// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     int ans = 0;
//     vector<int> nums={1,2,2,1,1};
//     for(int val : nums)
//     {
//         int freq = 0;
//         for(int el : nums)
//         {
//             if(el==val)
//             {
//                 freq++;
//             }
//         }
//         if(freq>(5/2))
//         {
//             ans = val;
//         }
//     }
//     cout<<ans<<'\n';
//     return 0;
// }
#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int arr[n] = {2,5,4,6,1};
    int temp=0;
    for(int j=0;j<n;j++)
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]>arr[i+1])
        {
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
        }
    }
    for(int i = 0;i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

