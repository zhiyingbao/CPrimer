#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int num;
    vector<int> ivec;
    while(cin >> num)
    {
        ivec.push_back(num);
    }
    for (vector<int>::size_type i = 0, j = 0; j != (ivec.size()) / 2; j++,i++)
    {
        cout<< ivec[i] + ivec[++i] << endl;
    }
    if(ivec.size()%2)
    {
        cout << "There is an odd number" << endl;
        cout << ivec[ivec.size()-1] << endl;
    }

    return 0;
}
