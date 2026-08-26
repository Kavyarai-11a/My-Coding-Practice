// #include<iostream>
// using namespace std;
// int uniqueElement(char str[],int n)
// {
//     int i=0;
//     while(i<n)
//     {
//         int freq=0;
//         int j=0;
//         while(j<n)
//         {
//             if(str[i]==str[j])
//             {
//                 freq+=1;
//             }
//             j++;
//         }
//         if(freq==1)
//         {
//             return i;
//         }
//         i++;
//     }
//     return -1;
// }
// int main()
// {
//     int n;
//     cout<<"Enter the number of Alpha: ";
//     cin>>n;
//     if(n<=0)
//     {
//         cout<<"Invalid Number";
//     }
//     char str[n];
//     for(int i=0;i<n;i++)
//     {
//         cout<<"Enter Alpha at idx"<<" "<< i<<": ";
//         cin>>str[i];
//     }
//     int idx = uniqueElement(str,n);
//     if(idx==-1)
//     {
//         cout<<"No unique Element";
//     }
//     else
//     {
//     cout<<str[idx];
//     cout<<" "<<"is a unique element";
//     }
//     return 0;

// }
#include<iostream>
using namespace std;
int uniqueElement(char str[],int arr[],int n)
{
    int i=0;
    while(i<n)
    {
        
    }
}
int main()
{
    int n;
    cout<<"Enter the number of Alpha: ";
    cin>>n;
    if(n<=0)
    {
        cout<<"Invalid Number";
    }
    char str[n];
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter Alpha at idx"<<" "<< i<<": ";
        cin>>str[i];
    }
    int idx = uniqueElement(str,arr,n);
    if(idx==-1)
    {
        cout<<"No unique Element";
    }
    else
    {
    cout<<str[idx];
    cout<<" "<<"is a unique element";
    }
    return 0;

}