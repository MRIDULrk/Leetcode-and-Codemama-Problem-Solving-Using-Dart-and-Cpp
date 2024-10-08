
#include <bits/stdc++.h>
using namespace std;

bool isOperand(char c)
{

    return isdigit(c);
}

int evaluatePrefix(string exprsn)
{
    stack<int> Stack;

    for (int j = exprsn.size() - 1; j >= 0; j--) {


        if (isOperand(exprsn[j]))
            Stack.push(exprsn[j] - '0');

        else {


            double o1 = Stack.top();
            Stack.pop();
            double o2 = Stack.top();
            Stack.pop();


            switch (exprsn[j]) {
            case '+':
                Stack.push(o1 + o2);
                break;
            case '-':
                Stack.push(o1 - o2);
                break;
            case '*':
                Stack.push(o1 * o2);
                break;
            case '/':
                Stack.push(o1 / o2);
                break;
            }
        }
    }

    return Stack.top();
}


int main()
{
    string exprsn;
    cin>>exprsn;
    cout << evaluatePrefix(exprsn) << endl;
    return 0;
}
