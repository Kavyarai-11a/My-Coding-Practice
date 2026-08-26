// Condition
// #include<iostream>
// using namespace std;
// int main()
// {
//     int num1,num2;
//     cout<<"Num1= ";
//     cin>>num1;
//     cout<<"Num2= ";
//     cin>>num2;
//     if(num1>num2)
//     cout<<"Num1 is greater";
//     else if(num1<num2)
//     cout<<"Num2 is greater";
//     else
//     cout<<"Both are equal";
//     return 0;

// }
// //Find that character is uppercase or lowercase
// #include<iostream>
// using namespace std;
// int main()
// {
// char alpha;
// cout<<"Enter a character: ";
// cin>>alpha;
// int val=alpha;
// if(97<=val && val<123)
// cout<<"Lowercase";
// else
// cout<<"Uppercase";
// return 0;
// }
// Loops
// while loop
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i=1;
//     while(i<=5)
//     {
//         cout<<i<<"\n";
//         i++;
//     }
//     return 0;
// }
// for loop
// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1;i<=5;i++)
//     cout<<i<<"\n";
//     return 0;
// }
//do while loop
#include<iostream>
using namespace std;
int main()
{
    int i=0;
    do{
       cout<<i ;
       i++;
    } while (i<5);
    
    return 0;
}