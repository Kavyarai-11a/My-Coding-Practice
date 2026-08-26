// #include<iostream>
// using namespace std;
// int sum_of_num(int num);
// int main()
// {
//     int n,sum;
//     cin>>n;
//     sum=sum_of_num(n);
//     cout<<sum;
//     return 0;
// }
// int sum_of_num(int num)
// {
//     int sum=0;
//     for(int i=1;i<=num;i++)
//     {
//         sum=sum+i;
//     }
//     return sum;
// }
#include<iostream>
using namespace std;
int factorial_of_n(int n);
int calculate_binomial(int mul1,int mul2,int mul3);
// int factorial_of_r(int r);
// int factorial_of_r(int n,int r);

// int main()
// {
//     int n,r,mul1,mul2,mul3;
//     cin>>n;
//     cin>>r;
//     int c=n-r;
//     mul1=factorial_of_n(n);
//     cout<<mul1<<"\n";
//     mul2=factorial_of_n(r);
//     cout<<mul2<<"\n";
//     mul3=factorial_of_n(c);
//     cout<<mul3<<"\n";
//     int sum=calculate_binomial(mul1,mul2,mul3);
//     cout<<sum;
//     return 0;
// }
// int factorial_of_n(int n)
// {
//     int mul=1;
//     for(int i=1;i<=n;i++)
//     {
//         mul=mul*i;
//     }
//     return mul;
// }
// int calculate_binomial(int mul1,int mul2,int mul3)
// {
//     int sum=mul1/(mul2*mul3);
//     return sum;
// }
// int factorial_of_r(int r)
// {
//     int mul=1;
//     for(int i=1;i<=r;i++)
//     {
//         mul=mul*i;
//     }
//     return mul;
// }
// int factorial_of_c(int n,int r)
// {
//     int mul=1;
//     for(int i=1;i<=n-c;i++)
//     {
//         mul=mul*i;
//     }
//     return mul;
// }
//Sum of digit in a number
// #include<iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout<<"Enter a number: ";
//     cin>>num;
//     int sum=0;
//     int i=0;
//     while(num>0)
//     {
//         int n=num%10;
//         sum=sum+n;
//         num=num/10;
//     }
//     cout<<sum;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int check_prime(int n);
// //void result_print(int result);
// int main()
// {
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     if(n<=1)
//     {
//         cout<<"Invalid input";
//         return 0;
//     }
//     int result=check_prime(n);
//     // result_print(result);
//     cout<<result;
//     return 0;

// }
// int check_prime(int n)
// {
//     int sum=0;
//     int num=2;
//     for(int j=2;j<=n;j++)
//     {
//         for(int k=2;k<;k++)
//         {
//             if(num/k!=0)
        
//         }
//         int i=2;
//         while(i*i<=num)
//     }
//     return sum;
// }
// void result_print(int result)
// {
//     if(result==1)
//     {
//         cout<<"Number is prime \n";
//     }
//     else
//     cout<<"Number is not prime \n";
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     if(n<=1)
//     {
//         cout<<"Invalid input";
//     }
    // int a=2;
    // int b=3;
    // cout<<a<<" "<<b<<" "; 
    // int num=4;
//     int sum=1;
//     for(int j=4;j<=n;j++)
//     {
//         int i=2;
//         while(i*i<=j)
//         {
//             if(j%i==0)
//             {
//                 sum++;
//                 break;
//             }
//             i++; 
//         }

//     }
//     int result = n-sum;
//     //cout<<sum<<"\n";
//     cout<<result;
//     return 0;
// }

