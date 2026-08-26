// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter a number = ";
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int i=1;i<=n;i++)
//         {
//             cout<<i<<" ";

//         }
//         cout<<"\n";
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     char ch;
//     cout<<"Enter a charachter : ";
//     cin>>ch;
//     int val = ch;
//     for(int i=0;i<=val-65;i++)
//     {
//         for(int i=65;i<=val;i++)
//         {
//             char cha = i;
//             cout<<cha<<" ";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter a number = ";
//     cin>>n;
//     int i=1;
//     while(i<=n)
//     {
//         for(int j=0;j<3&&i<=n;j++)
//         {
//             cout<<i;
//             i++;
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

//Floyd's Tringle Pattern
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n = 4;
//     // cout<<"Enter a number = ";
//     // cin>>n;
//     int num=1;
//     int i=1;
//     while(i<=n)
//      {
//          for(int j=1;j<=i;j++)
//          {
//             cout<<num<<" ";
//              num++;
//          }
//          cout<<"\n";
//          i++;
//      }
//     return 0;
// }

//Inverted Triangle Pattern
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=4;
//     int num=1;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<i;j++)
//         {
//             cout<<" ";
//         }
//         for(int k=0;k<(n-i);k++)
//         {
//             cout<<num;
//         }
//         cout<<"\n";
//         num++;
//     }
//     return 0;
// }

//Pyramid Pattern
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=4;
//     int num=1;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<(n-i-1);j++)
//         {
//             num=1;
//             cout<<" ";
//         }
//         for(int k=0;k<=i;k++)
//         {
//             cout<<num;
//             num++;
//         }
//          num=1;
//         for(int k=i;k>0;k--)
//         {   
//             cout<<k;
//         }
//         cout<<"\n";
        
//     }
//     return 0;
// }

//Hollow Diamond Pattern
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=4;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n-i-1;j++)
//         {
//             cout<<" ";
//         }
//         for(int j=0;j<1;j++)
//         {
//             cout<<"*";
//         }
//         for(int j=0;j<;j++)
//         {
//             cout<<" ";
//         }
//         for(int j=;j<1;j++)
//         {
//             cout<<"*";
//         }
//         cout<<"\n";

//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int main()
{
    int n=4;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        for(int k=0;k<n-(2*i-2);k++)
        {
            cout<<" ";
        }
        for(int l=0;l<=i;l++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<"*";
        }
        for(int k=0;k<(2*i);k++)
        {
            cout<<" ";
        }
        for(int l=0;l<n-i;l++)
        {
            cout<<"*";
        }
        cout<<"\n";

    }
    return 0;
}
