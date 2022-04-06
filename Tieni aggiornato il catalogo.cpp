#include <bits/stdc++.h>
using namespace std;

multiset<long long int> s;

void aggiungi(long long int id)
{
    s.insert(id);
}

void togli(long long int id)
{
    s.erase(s.find(id));
}

int conta(long long int id)
{
    return s.count(id);
}
