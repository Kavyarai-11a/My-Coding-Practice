//Decimal to binary converstion
// #include<iostream>
// using namespace std;
// int main()
// {
//     int dec,rem,pow=1,result=0;
//     cout<<"Enter a number:";
//     cin>>dec;
//     while(dec!=0)
//     {
//         rem=dec%2;
//         dec=dec/2;
//         result+=(rem*pow);
//         pow=(pow*10);
//     }
    
//     cout<<result;
// }
//Binary to Decimal
#include<iostream>
using namespace std;
int main()
{
    int bi,rem,result=0,pow=1;
    cout<<"Enter a binary number:";
    cin>>bi;
    while(bi>0)
    {
        rem=bi%10;
        bi=bi/10;
        result+=rem*pow;
        pow=pow*2;

    }
    cout<<result;
}