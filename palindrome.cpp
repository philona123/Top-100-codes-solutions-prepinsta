#include <iostream>
    using namespace std;
    //main Program
    int main()
    {
        int num, digit, reverse = 0;
        cout << “Enter a positive integer: “;
        //user input
        cin >> num;
        int temp = num;
        //loop to find reverse
        do
        {
            digit = num % 10;
            reverse = (reverse * 10) + digit;
            num = num / 10;
        } 
        while (num != 0);
        cout << “The reverse of “<< temp <<” is “<< reverse << endl;
        //checking for palindrome
        if (temp == reverse)
            cout << “The number is a palindrome.”;
        else
            cout << “The number is not a palindrome.”;
        return 0;
    }
