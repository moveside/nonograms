#include <iostream>
#include<vector>


using namespace std;


vector<int> row[15]; // 가로 숫자
vector<int> col[15]; // 세로 숫자
int nonogram[15][15] = { 0 };
void init()
{
    // 가로 
    row[0].push_back(3);
    row[1].push_back(4);
    row[2].push_back(5);
    row[3].push_back(4);
    row[4].push_back(5);
    row[5].push_back(6);
    row[6].push_back(3);
    row[6].push_back(2);
    row[6].push_back(1);
    row[7].push_back(2);
    row[7].push_back(2);
    row[7].push_back(5);
    row[8].push_back(4);
    row[8].push_back(2);
    row[8].push_back(6);
    row[9].push_back(8);
    row[9].push_back(2);
    row[9].push_back(3);
    row[10].push_back(8);
    row[10].push_back(2);
    row[10].push_back(1);
    row[10].push_back(1);
    row[11].push_back(2);
    row[11].push_back(6);
    row[11].push_back(2);
    row[11].push_back(1);
    row[12].push_back(4);
    row[12].push_back(6);
    row[13].push_back(2);
    row[13].push_back(4);
    row[14].push_back(1);
    // 세로
    col[0].push_back(3);
    col[1].push_back(5);
    col[2].push_back(4);
    col[2].push_back(3);
    col[3].push_back(7);
    col[4].push_back(5);
    col[5].push_back(4);
    col[6].push_back(5);
    col[7].push_back(1);
    col[7].push_back(8);
    col[8].push_back(3);
    col[8].push_back(3);
    col[8].push_back(3);
    col[9].push_back(7);
    col[9].push_back(3);
    col[9].push_back(2);
    col[10].push_back(5);
    col[10].push_back(4);
    col[10].push_back(2);
    col[11].push_back(8);
    col[11].push_back(2);
    col[12].push_back(10);
    col[13].push_back(2);
    col[13].push_back(3);
    col[14].push_back(6);
}

int main()
{
    init();





    return 0;
}