
#include <bits/stdc++.h>
using namespace std;
#define RC 5
#define CC 2

// int n = int(d[ii])-48;
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
     {0, 1},
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

void column(int nums[][RC][CC], int size, int len, int row)
{
    char ch;
    for (int k=0;k<size;k++)
    {
        for (int i=0;i<len;i++)
        {
            if (i) printf(" ");
            if (nums[i][row][0]==1)
            printf("|");
            else printf(" ");
            for (int j=0;j<size;j++) printf(" ");
            if (nums[i][row][1]==0) printf(" ");
            else printf("|");
        }
        printf("\n");
    }
}

int main()
{
    int s;
    char n[20],ch;
    while (1)
    {
        scanf("%d %s",&s,n);
        if (s==0 && n[0]=='0') break;
        int l=strlen(n);
        int nums[l][RC][CC];
        for(int ii = 0; ii < l; ii++){
            int d = int(n[ii])-48;
            for (int i = 0; i < RC; i++)
            {
                for (int j = 0; j < CC; j++)
                {
                    nums[ii][i][j] = digits[d][i][j];
                }
            }
        }
        dash(nums,s,l,0);
        column(nums,s,l,1);
        dash(nums,s,l,2);
        column(nums,s,l,3);
        dash(nums,s,l,4);
        printf("\n");
    }
    return 0;
}