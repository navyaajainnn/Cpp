// #include <iostream>
// using namespace std;
// int main()
//{
//     int n = 4;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= i)
//         {
//             cout << "*";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
//{int n=4,i=1,count=1;
// while(i<=n){
//     int j=1;
//     while(j<=i){
//         cout<<" "<<count;
//         count++;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
//{int n=4;
// int i=1;
// while(i<=n){
//     int value=i;
//     int j=1;
//     while(j<=i){
//         cout<<value;
//         value++;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
//{int n=4;
// int i=1;
// while(i<=n){
//     int value=i;
//     int j=1;
//     while(j<=i){
//         cout<<value;
//         value--;
//         j++;
//     }
//     cout<<endl;
//     i++;
//
// }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
//{
//     int n = 3;
//     int i = 1;
//     while (i <= n)
//     {char s='A';
//         int j = 1;
//         while (j <= n)
//         {
//             cout << char('A' + i - 1);
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
//{int n=3,i=1;
//  while (i <= n)
//     {char s='A';
//         int j = 1;
//         while (j <= n)
//         {
//             cout <<s;
//             s++;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
//{int n=3,i=1;
// char s='A';
//  while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             cout<<s;
//             s++;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
//{int n=3,i=1;
//  while (i <= n)
//     {char s='A';
//         int j = 1;
//         while (j <= n)
//         {
//             cout<<char('A'+i+j-1-1);
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
//{
//     int n = 3, i = 1;
//
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= i)
//         {
//             cout << char('A' + i - 1);
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
//{int n=4,i=1;
// char s='A';
// while(i<=n){
//     int j=1;
//     while(j<=i){
//         cout<<s;
//         s++;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
//{int n=4,i=1;
// while(i<=n){
//     int j=1;
//     while(j<=i){
//             char s=('A'+i+j-2);
//
//         cout<<s;
//         s++;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
//{int n=4,i=1;
// while(i<=n){
//     int j=1;
//     while(j<=i){
//         char s=('D'-i+j);
//         cout<<s;
//         s++;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
//{int n=4,i=1;
// while(i<=n){
//     int space=n-i;
//     while(space){
//         cout<<" ";
//         space--;
//     }
//     int j=1;
//     while(j<=i){
//         cout<<"*";
//         j++;
//     }
//     cout<<endl;
//     i++;
// }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
//{int n=4;int i=1;
// while(i<=n){
//     int j=1;
//     while(j<=n-i+1){
//         cout<<"X";
//         j++;
//     }
//     cout<<endl;
//     i++;
// }
//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int n = 4, i = 1;
    while (i <= n)
    {

        int space = n - i;
        while (space)
        {
            cout << " ";
            space--;
        }
        int j = 1;

        while (j <= i)
        {

            cout << j;
            j++;
        }
        int start=i-1;
        while(start){
            cout<<start;
            start--;
            cout<<endl;
            i++;
    }
    return 0;
}
}