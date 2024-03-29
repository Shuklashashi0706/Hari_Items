#include <iostream>
#define print(x) std::cout << x << std::endl

int main()
{
    // 1   1   1
    // 2   2   2
    // 3   3   3

    // int n {3};
    // int i {1};
    // int x {1};
    // while((i-1) < (n*n))
    // {
    //     printf("%4d",x);
    //     if(i % n == 0)
    //     {
    //         std::cout << std::endl;
    //         x += 1;
    //     }
    //     i++;
    // }


    // 3   2   1
    // 3   2   1
    // 3   2   1

    // int n {3};
    // int i {1};
    // int x {4};
    // while((i-1) < (n*n))
    // {
    //     printf("%4d",x);
    //     x--;
    //     if(i % n == 0)
    //     {
    //         std::cout << std::endl;
    //         x = n;
    //     }
    //     i++;
    // }


    // 1   2   3
    // 4   5   6
    // 7   8   9

    // int n {3};
    // int i {1};
    // int x {1};
    // while((i-1) < (n*n))
    // {
    //     printf("%4d",x);
    //     x++;
    //     if(i % n == 0)
    //     {
    //         std::cout << std::endl;
    //     }
    //     i++;
    // }


    // 9   8   7
    // 6   5   4
    // 3   2   1

    // int n {3};
    // int i {1};
    // int x {n*n};
    // while((i-1) < (n*n))
    // {
    //     printf("%4d",x);
    //     x--;
    //     if(i % n == 0)
    //     {
    //         std::cout << std::endl;
    //     }
    //     i++;
    // }


    // *
    // *   *
    // *   *   *

    // int n {10};
    // int i {1};
    // while((i-1) < n)
    // {
    //     int j {};
    //     while(j < i)
    //     {
    //         printf("%4c",'*');
    //         j++;
    //     }
    //     std::cout << std::endl;
    //     i++;
    // }


    // 1
    // 2   2
    // 3   3   3

    // int n{3};
    // int i{1};
    // while ((i - 1) < n)
    // {
    //     int j{};
    //     while (j < i)
    //     {
    //         printf("%4d", i);
    //         j++;
    //     }
    //     std::cout << std::endl;
    //     i++;
    // }


    // *
    // *   *
    // *   *   *
    // *   *   *   *

    // int n {4};
    // n = int((float(n)/2)*(1 + float(n))); // total no of iteration n = Sum of ap till n with d=1
    // int i{1}; // iterator
    // int y{1}; // n
    // int x{1}; // Lines end =  Sum of ap till y with d=1
    // while ((i - 1) < n)
    // {
    //     printf("%4c",'*');
    //     if(i == x)
    //     {
    //         y++;
    //         x = int((float)y*(((float)y + 1)/2));
    //         std::cout << std::endl;
    //     }
    //     i++;
    // }


    // 1
    // 2   2
    // 3   3   3
    // 4   4   4   4

    // int n{4}; 
    // n = int((float(n)/2)*(1 + float(n))); // total no of iteration n = Sum of ap till n with d=1
    // int i{1}; // iterator
    // int y{1};
    // int x{1}; // Lines end =  Sum of ap till y with d=1
    // while ((i - 1) < n)
    // {
    //     printf("%4d",y);
    //     if(i == x)
    //     {
    //         y++;
    //         x = int((float)y*(((float)y + 1)/2));
    //         std::cout << std::endl;
    //     }
    //     i++;
    // }


    // 1
    // 2   3
    // 4   5   6
    // 7   8   9  10

    // int n{4}; 
    // n = int((float(n)/2)*(1 + float(n))); // total no of iteration n = Sum of ap till n with d=1
    // int i{1}; // iterator
    // int y{1};
    // int x{1}; // Lines end =  Sum of ap till y with d=1
    // while ((i - 1) < n)
    // {
    //     printf("%4d",i);
    //     if(i == x)
    //     {
    //         y++;
    //         x = int((float)y*(((float)y + 1)/2));
    //         std::cout << std::endl;
    //     }
    //     i++;
    // }
}