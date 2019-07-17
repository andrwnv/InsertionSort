#include <algorithm>
#include <vector>

void insertionSort(std::vector<int> & vec)
{
    for ( auto i = vec.begin(); i != vec.end(); ++i )
        std::rotate( std::lower_bound(vec.begin(), i, *i), i, i + 1 );
}

int main()
{
    std::vector <int> vec { { 12, 45, 11, 0, -1, 120, 3, -7, 8, -10 } };
    insertionSort(vec);

    return 0;
}