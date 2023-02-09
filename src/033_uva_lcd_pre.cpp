#include <bits/stdc++.h>
using namespace std;
#define RC 5
#define CC 2

void displayNum(int[RC][CC], int, bool);
/*
Sample Output
size 3
*/
int digits[10][RC][CC] = {
    {{1},
     {1, 1},
     {0},
     {1, 1},
     {1}},
    {{0},
     {0, 1},
     {0},
     {0, 1},
     {0}},
    {{1},
     {0, 1},
     {1},
     {1, 0},
     {1}},
    {{1},
     {0, 1},
     {1},
     {0, 1},
     {1}},
    {{0},
     {1, 1},
     {1},
     {0, 1},
     {}},
    {{1},
     {1, 0},
     {1},
     {0, 1},
     {1}},
    {{1},
     {1, 0},
     {1},
     {1, 1},
     {1}},
    {{1},
     {1, 1},
     {0},
     {0, 1},
     {1}},
    {{1},
     {1, 1},
     {1},
     {1, 1},
     {1}},
    {{1},
     {1, 1},
     {1},
     {0, 1},
     {1}}};

// create top dash

void dash(int nums[][RC][CC], int size, int len, int row)
{
    // for each number
    for(int i = 0; i < len;  i++){
        cout << " ";
        for(int j = 0; j < size; j++){
            if(nums[i][row][0] == 1){
                cout<<"-";
            }else{
                cout<<" ";
            }
        }
        cout << "  ";
    }
    cout << endl;
}

void column(int nums[][RC][CC], int size, int len, int row){
    for(int k = 0; k<size; k++){
        for(int i = 0; i < len;  i++){
            if(nums[i][row][0] == 1)
                cout << "|";
            else
                cout << " ";
            for(int j = 0; j < size; j++){
                cout<<" ";
            }
            if(nums[i][row][1] == 1)
                cout << "|";
            else
                cout << " ";
            cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    int nums[2][RC][CC];
    int len = 2;
    int size = 4;

    // insert first num
    for (int i = 0; i < RC; i++)
    {
        for (int j = 0; j < CC; j++)
        {
            nums[0][i][j] = digits[8][i][j];
        }
    }

    // inser second num
    for (int i = 0; i < RC; i++)
    {
        for (int j = 0; j < CC; j++)
        {
            nums[1][i][j] = digits[3][i][j];
        }
    }
    

    // display
    dash(nums, size, len, 0);
    column(nums, size, len, 1);
    dash(nums, size, len, 2);
    column(nums, size, len, 3);
    dash(nums, size, len, 4);

    return 0;
}
