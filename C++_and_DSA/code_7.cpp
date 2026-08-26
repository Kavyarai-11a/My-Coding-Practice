//Array
//Taught by chacha
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the length of array:";
//     cin>>n;
//     if(n<=1)
//     {
//         cout<<"Invalid size of array";
//         return 0;
//     }

//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cout<<"Enter the element of index"<<" "<<i<<":";
//         cin>>arr[i];
//     }
//     int max_index=0;
//     int max_count_value=0;
//     char max;
//     for(int j=1;j<n;j++)
//     {
//         if(arr[j]>arr[max_index])
//         {
//             max=max_index;
//             max_index=j;
//             if(arr[max]!=arr[max_index])
//             {
//                 max_count_value=max;
//             }
                
//         }
//     }
//     // int max_count_value=0;
//     // for(int k=1;k<n;k++)
//     // {
//     //     if(k!= max_index&&arr[k]!=arr[max_index])
//     //     {
//     //         if(arr[k]>arr[max_count_value])
//     //         {
//     //             max_count_value=k;
//     //         }
//     //     }
        
//     // }
//     cout<<arr[max_count_value];
//     return 0;
// }

//Pass By Reference
// #include<iostream>
// using namespace std;
// void changeArr(int arr[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         arr[i] = 2* arr[i];
//     }
// }
// int main()
// {
//     int n=3;
//     int arr[n]={1,2,3};
//     changeArr(arr,n);
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//Reverse Array
// #include<iostream>
// using namespace std;
// void reverseArr(int arr[],int n)
// {
//     int temp;
//     for(int i=0;i<n/2;i++)
//     {
//         temp=arr[i];
//         arr[i]=arr[n-i-1];
//         arr[n-i-1]=temp;
//     }
// }
// int main()
// {
//     int n=4;
//     int arr[n]={1,2,3,4};
//     reverseArr(arr,n);
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//Sum & Product
// #include<iostream>
// using namespace std;
// void SumOfArr(int arr1[],int arr2[],int arr3[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         arr3[i]=arr1[i]+arr2[i];
//     }
// }
// void ProdOfArr(int arr1[],int arr2[],int arr4[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         arr4[i]=arr1[i]*arr2[i];
//     }
// }
// int main()
// {
//     int n=3;
//     int arr1[n]={1,2,3};
//     int arr2[n]={3,2,1};
//     int arr3[n],arr4[n];
//     SumOfArr(arr1,arr2,arr3,n);
//     ProdOfArr(arr1,arr2,arr4,n);
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr3[i]<<" ";
//     }
//     cout<<'\n';
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr4[i]<<" ";
//     }
// }


//Unique Value
#include<iostream>
using namespace std;
void UniqueArr(int arr[],int n)
{
    int i=0;
    while(i<n)
    {
        int z=0;
        while(z<n)
        {
            if(arr[i]==arr[z]&&z!=i)
            {
                break;
            }
            else if(arr[i]!=arr[z]&&z+1>=n)
            {
                cout<<arr[i]<<" ";
            }
            z++;
        }
        i++;
    }

}

int main()
{
    int n=5;
    int arr[n]={1,3,2,2,3};
    UniqueArr(arr,n);
    return 0;
}