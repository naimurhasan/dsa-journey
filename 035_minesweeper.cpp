
#include <bits/stdc++.h>
using namespace std;

int main(){
    int m, n;
    
    int field = 1;
    while (1)
    {
        cin >> m >> n;
        if(m==0 && n==0)
        {
            break;
        }
        if(field!=1)
        {
            cout << endl;
        }
        // input stars
        vector<vector<int>> stars;
        for (int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                char c;
                cin >> c;
                if(c=='*')
                {
                    stars.push_back({i, j});
                }
            }
        }

        // create matrix
        vector<vector<int>> matrix;
        for(int i = 0; i < m; i++)
        {
            vector<int> row;
            for(int j = 0; j < n; j++)
            {
                row.push_back(0);
            }
            matrix.push_back(row);
        }

        // insert stars in matrix
        for(int i = 0; i < stars.size(); i++)
        {
            int x = stars[i][0];
            int y = stars[i][1];
            matrix[x][y] = -1;
        }

        /// increments
        for(int i = 0; i < stars.size(); i++)
        {
            int x = stars[i][0];
            int y = stars[i][1];
            
            // top
            if(x!=0){
                if(matrix[x-1][y]!=-1)
                {
                    matrix[x-1][y]++;
                }
            }
            // bottom
            if(x!=m-1){
                if(matrix[x+1][y]!=-1)
                {
                    matrix[x+1][y]++;
                }
            }
            
            // left
            if(y!=0){
                if(matrix[x][y-1]!=-1)
                {
                    matrix[x][y-1]++;
                }
            }
            // right
            if(y!=n-1){
                if(matrix[x][y+1]!=-1)
                {
                    matrix[x][y+1]++;
                }
            }
            // top left
            if(x!=0 && y!=0){
                if(matrix[x-1][y-1]!=-1)
                {
                    matrix[x-1][y-1]++;
                }
            }
            // top right
            if(x!=0 && y!=n-1){
                if(matrix[x-1][y+1]!=-1)
                {
                    matrix[x-1][y+1]++;
                }
            }
            // bottom left
            if(x!=m-1 && y!=0){
                if(matrix[x+1][y-1]!=-1)
                {
                    matrix[x+1][y-1]++;
                }
            }
            // bottom right
            if(x!=m-1 && y!=n-1){
                if(matrix[x+1][y+1]!=-1)
                {
                    matrix[x+1][y+1]++;
                }
            }
        }
        
        cout << "Field #" << field++ << ":" << endl;
        // display matrix
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(matrix[i][j]==-1)
                {
                    cout << "*";
                }
                else
                {
                    cout << matrix[i][j] << "";
                }
            }
            cout << endl;
        }
        
    }     
    return 0;
}