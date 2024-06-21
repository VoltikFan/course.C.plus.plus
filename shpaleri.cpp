#include <iostream>
#include <cmath>
#include <algorithm>
#include <stdio.h>
#include <cstdint>
#include <cstring>
#include <string>
#include <cstdlib>
#include <vector>
#include <bitset>
#include <map>
#include <queue>
#include <ctime>
#include <stack>
#include <set>
#include <list>
#include <random>
#include <deque>
#include <functional>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <complex>
#include <numeric>
#include <cassert>
#include <array>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <thread>

using namespace std;

int main() 
{
    int n, m, k;
    cin >> n >> m >> k;

    int totalRolls = n * m / 25;

    if (totalRolls % 25 == 0) {
        cout << totalRolls;
    } else {
        cout << totalRolls + 1;
    }

    
    return 0;
}
