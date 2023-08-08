#include<bits/stdc++.h>
using namespace std;
void printinRoman(int num)
{
    if(num>=1000)
    {
        cout<<"M";
        printinRoman(num-1000);
    }
    else if(num>=900)
    {
        cout<<"CM";
        printinRoman(num-900);
    }
    else if(num>=500)
    {
        cout<<"D";
        printinRoman(num-500);
    }
    else if(num>=400)
    {
        cout<<"CD";
        printinRoman(num-400);
    }
    else if(num>=100)
    {
        cout<<"C";
        printinRoman(num-100);
    }
    else if(num>=90)
    {
        cout<<"XC";
        printinRoman(num-90);
    }
      else if(num >= 50) {
        cout << "L";
        printinRoman(num - 50);
    }
    else if(num >= 40) {
        cout << "XL";
        printinRoman(num - 40);
    }
    else if(num >= 10) {
        cout << "X";
        printinRoman(num - 10);
    }
    else if(num >= 9) {
        cout << "IX";
        printinRoman(num - 9);
    }
    else if(num >= 5) {
        cout << "V";
        printinRoman(num - 5);
    }
    else if(num >= 4) {
        cout << "IV";
        printinRoman(num - 4);
    }
    else if(num >= 1) {
        cout << "I";
        printinRoman(num - 1);
    }
}
int main()
{
    int num=9;
    printinRoman(num);
    return 0;

}