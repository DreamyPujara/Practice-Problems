//c++ program to demonstrate basic working of stl
#include<iostream>
#include<set>

int main()
{
    std::set<char> a;
    a.insert('H');
    a.insert('O');
    a.insert('P');
    a.insert('E');
    for (auto& str : a){
        std::cout << str << ' ';
    }
    std::cout << '\n';
    return 0;
}