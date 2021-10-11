// Given a boolean expression and we have to
// find whether it is a tautology or not .
// Tautology-->A tautology in math (and logic)
// is a compound statement that always produces truth.
//  No matter what the individual parts are.



#include <iostream>
#include <stack>
#include <vector>
#include <math.h>
using namespace std;

int precedence(char ch)
{
    if (ch == '>' || ch == '$')
        return 1;
    if (ch == '+')
        return 2;
    if (ch == '^')
        return 3;
    if (ch == '!')
        return 4;
    return -1;
}

bool isoperator(char ch)
{
    return ch == '^' || ch == '+' || ch == '!' || ch == '>' || ch == '$';
}

bool isoperand(char ch)
{
    return ch >= 'A' && ch <= 'Z';
}

string postfix(string str)
{
    string newstr;
    stack<char> st;
    for (int i = 0; i < str.size(); i++)
    {
        if (isoperand(str[i]))
            newstr += str[i];
        else if (str[i] == '(')
            st.push(str[i]);
        else if (str[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                newstr += st.top();
                st.pop();
            }
            if (!st.empty())
                st.pop();
        }
        else
        {
            while (!st.empty() && (precedence(str[i]) > precedence(st.top())))
            {
                newstr += st.top();
                st.pop();
            }
            st.push(str[i]);
        }
    }
    while (!st.empty())
    {
        newstr += st.top();
        st.pop();
    }
    return newstr;
}

string Postfix(string infix)
{
    stack<char> st;
    string poststr = "";
    for (int i = 0; i < infix.length(); i++)
    {
        char ch = infix[i];
        if (ch == '(')
            st.push(ch);
        else if (isoperand(ch))
            poststr += ch;
        else if (isoperator(ch))
        {
            while (!st.empty() && (precedence(st.top()) >= precedence(ch)))
            {
                char c = st.top();
                st.pop();
                poststr += c;
            }
            st.push(ch);
        }
        else if (ch == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                char c1 = st.top();
                st.pop();
                poststr += c1;
            }
            st.pop();
        }
    }
    while (!st.empty())
    {
        poststr += st.top();
        st.pop();
    }
    return poststr;
}
int calculate(string str, vector<int> &v)
{
    stack<char> st;
    for (int i = 0; i < str.length(); i++)
    {
        if (isoperand(str[i]))
            st.push(v[str[i] - 'A']);
        else if (isoperator(str[i]))
        {
            if (str[i] == '!')
            {
                char ch = st.top();
                st.pop();
                st.push(!ch);
            }
            else
            {
                char ch1 = st.top();
                st.pop();
                char ch2 = st.top();
                st.pop();
                switch (str[i])
                {
                case '^':
                    st.push(ch1 and ch2);
                    break;
                case '+':
                    st.push(ch1 or ch2);
                    break;
                case '>':
                    st.push((ch1) or (!ch2));
                    break;
                case '$':
                    if (ch2 == ch1)
                        st.push(1);
                    else
                        st.push(0);
                    break;
                default:
                    cout << "operator is undefined\n";
                    break;
                }
            }
        }
    }
    return st.top();
}
void increment(vector<char> &var, vector<int> &val)
{

    int lastBit = 1;
    for (int i = var.size() - 1; i >= 0; --i)
    {
        if (val[var[i] - 'A'] == 1 && lastBit == 1)
        {
            val[var[i] - 'A'] = 0;
        }
        else if (lastBit == 1)
        {
            val[var[i] - 'A'] = 1;
            lastBit = 0;
        }
    }
}
void truth_table(string str)
{
    vector<char> OnlyOperand;
    vector<int> v(26, -1);
    for (int i = 0; i < str.length(); i++)
    {
        if (isoperand(str[i]) && v[str[i] - 'A'] == -1)
        {
            v[str[i] - 'A'] = 0;
            OnlyOperand.push_back(str[i]);
        }
    }
    int len = OnlyOperand.size();
    cout << "\nTRUTH TABLE FOR INPUT BOOLEAN EXPRESSION\n";
    for (int i = 0; i < len; i++)
        cout << OnlyOperand[i] << "         ";
    cout << 'Y' << endl;
    string postfix = Postfix(str);
    vector<int> vec;
    for (int k = 0; k < pow(2, len); k++)
    {
        for (int k = 0; k < len; k++)
        {
            cout << v[OnlyOperand[k] - 'A'] << "        ";
        }
        int Y = calculate(postfix, v);
        vec.push_back(Y);
        cout << Y << endl;
        increment(OnlyOperand, v);
    }
    int size = vec.size(), count1 = 0, count0 = 0;
    for (int n = 0; n < size; n++)
    {
        if (vec.back() == 1)
            ++count1;
        if (vec.back() == 0)
            ++count0;
        vec.pop_back();
    }
    cout << endl;
    if (count1 == size)
        cout << "TAUTOLOGY\n";
    else
        cout << "It is NOT Tautology\n";
}

int main()
{

    cout << "RULES :\n";
    cout << "OPERANDS can be anything from A - Z\n";
    cout << "  use ^ for AND\n";
    cout << "  use + for OR\n";
    cout << "  use ! for NEGATION\n";
    cout << "  use > for IMPLICATION\n";
    cout << "  use $ for BI-IMPLICATION\n";
    string str;
    cout << "Enter the Expression ( LIKE A+(!A)  without * SPACE *) To find whether it is tautology or not: ";
    cin >> str;
    truth_table(str);

    return 0;
}