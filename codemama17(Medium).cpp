

#include <bits/stdc++.h>
using namespace std;


bool areBracketsBalanced(string expr)
{

    stack<char> temp;
    for (int i = 0; i < expr.length(); i++) {
        if (temp.empty()) {


            temp.push(expr[i]);
        }
        else if ((temp.top() == '(' && expr[i] == ')')
                 || (temp.top() == '{' && expr[i] == '}')
                 || (temp.top() == '[' && expr[i] == ']')) {


            temp.pop();
        }
        else {
            temp.push(expr[i]);
        }
    }
    if (temp.empty()) {


        return true;
    }
    return false;
}


int main()
{
    string expr;
    cin>>expr;


    if (areBracketsBalanced(expr))
        cout << "Brackets are balanced.";
    else
        cout << "Brackets are not balanced.";
    return 0;
}
