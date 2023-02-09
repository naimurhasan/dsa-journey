
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
     {0}},
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
    char ch;
    for (int i=0;i<len;i++)
        {
            if (i) printf(" ");
            printf(" ");
            if (nums[i][row][0]==0) ch=' ';
            else ch='-';
            for (int j=0;j<size; j++) printf("%c",ch);
            printf(" ");
        }
        printf("\n");
}

void column(int nums[][RC][CC], int size, int len, int row){
   for (int k=0;k<size;k++)
        {
            for (int i=0;i<len;i++)
            {
                if (i) printf(" ");
                if (nums[i][row][0]==0)
                printf(" ");
                else printf("|");
                for (int j=0;j<size;j++) printf(" ");
                if (nums[i][row][1]==0) printf(" ");
                else printf("|");
            }
            printf("\n");
        }
}

int main()
{
    long long int size;
    string line;
    cin >> size >> line;
    while(size || line!="0"){
        string d = line;
        int len = d.size();
        int nums[len][RC][CC];
        for(int ii = 0; ii < len; ii++){
            int n = int(d[ii])-48;
            for (int i = 0; i < RC; i++)
            {
                for (int j = 0; j < CC; j++)
                {
                    nums[ii][i][j] = digits[n][i][j];
                }
            }
        }
        // display
        dash(nums, size, len, 0);
        column(nums, size, len, 1);
        dash(nums, size, len, 2);
        column(nums, size, len, 3);
        dash(nums, size, len, 4);
        printf("\n");
        cin >> size >> line;    
    }
    return 0;
}
