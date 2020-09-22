//Roman numerals to integers
#include<iostream>
#include<map>
#include<string>

using namespace std;

class Solution {
public:
    int romanToInt(string s) 
    {
        int result=0;

        map<char,int> romanTable=
        {
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000},
        };//initialize hashmap

        for(int i=0;i<s.length()-1;i++)//i<s.length-1 is for avoiding oversteping the boundary
        {
            if(romanTable[s[i]]<romanTable[s[i+1]])
            {
                result-=romanTable[s[i]];
            }
            else
            {
                result+=romanTable[s[i]];
            }
        }
        result+=romanTable[s[s.length()-1]];//add the last number

        return result;
    }
};

int main()
{
	Solution solution;
	
	cout<<"please input the Roman numeral:";
	
	string s;
	getline(cin, s);

	cout<<"the result is "<<solution.romanToInt(s);
 } 
