#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str="abceefeafkhai";
    int n=str.length();
    int vowel=0;
    int  consonant=0;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            vowel++;
        }
        else{
            consonant++;
        }
    }
    cout<<vowel<<endl<<consonant;
}