#include <iostream> 
#include<vector>
#include<set>
#include<iterator>
#include<map>
#include <unordered_set>
#include <unordered_map>
#include<algorithm>
#include<iterator>
#include<array>
#include <string>
#include <deque>
#include<queue>
using namespace std;

//1
template<class BidirIt>
void func(BidirIt const first, BidirIt const last)
{
    unordered_set<string> Set(first, last); //+   
    copy(Set.begin(), Set.end(), ostream_iterator<string>(cout, "\n"));
    cout << endl;    
}

int main()
{
    {
        unordered_set<string> words;
        words.insert("one");
        words.insert("two");
        words.insert("three");
        words.insert("four");
        words.insert("five");
        words.insert("five");
        words.insert("six");
        func(words.begin(), words.end());
        set<string> setStr;
        setStr.insert("The");
        setStr.insert("Three");
        setStr.insert("Gentlemans");
        setStr.insert("In");
        setStr.insert("Boat");
        setStr.insert("In");
        setStr.insert("Gentlemans");
        func(setStr.begin(), setStr.end());
        array<string,3> arrStr;
        arrStr[0] = "The";
        arrStr[1] = "TheSec";
        arrStr[2] = "The";
        func(arrStr.begin(),arrStr.end());
        list<string> lstStr;
        lstStr.push_back("List");
        lstStr.push_back("List2");
        lstStr.push_back("List3");
        lstStr.push_back("List3");
        func(lstStr.begin(), lstStr.end());
        std::deque<string> deq;
        deq.push_back("Gentlemans");
        deq.push_back("The"); 
        deq.push_back("Gentlemans");
        func(deq.begin(), deq.end());
    }
   //2
    {               
        set<string> myset;
        for (std::string line; std::getline(std::cin, line, '.'); ) {
            myset.insert(line);
        }
        copy(myset.begin(), myset.end(), ostream_iterator<string>(cout, "\n"));
    }

}