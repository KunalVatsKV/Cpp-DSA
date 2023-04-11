//rat_in_a_maze_problem

//using_recursion

// Consider a rat placed at (0, 0) in a square matrix of order N * N. 
//It has to reach the destination at (N - 1, N - 1). 
//Find all possible paths that the rat can take to reach from source to destination. 
//The directions in which the rat can move are 'U'(up), 'D'(down), 'L' (left), 'R' (right). 
//Value 0 at a cell in the matrix represents that it is blocked and rat cannot move to it while value 1 at a cell in the matrix represents that rat can be travel through it.
// Note: In a path, no cell can be visited more than one time. If the source cell is 0, the rat cannot move to any other cell.


// for down index change will be  === i+1 , j
// for up index change will be  === i-1 , j
// for right index change will be  === i , j+1
// for left index change will be  === i , j-1


//we will also crate a visted array to check weather a pertivular position is already visited or not

//conditions for safe to move --- (moving from i,j to k,l)

// m[k][l] should be within the range of the martrix

// m[k][l] == 1

// visted[k][l] == 0

// after moving we set visited[k][l] = 1 (i.e true)

//now during funtion return we set visited[k][l] to 0 (i.e false) so that we can get another path (backtracking).

class Solution{
    private:
    bool isSafe(vector<vector<int>> maze,int n,int x,int y,vector<vector<int>> visited){ //function to check if a position is safe to go on
        
        if((x>=0 && x<n) && (y>=0 && y<n) && maze[x][y] == 1 && visited[x][y] == 0){
            return true;
        }else{
            return false;
        }
        
    }
    void solve(vector<vector<int>> maze,int n,int x, int y, string path, vector<string>& ans,vector<vector<int>> visited){
        
        //base
        if(x==n-1 && y == n-1){
            ans.push_back(path);
            return;
        }
        
        visited[x][y] = 1; //we have reached a postition so we mark it in the visted array
        
        //4 choices = down , up , left ,right
        
        //down
        int newx = x+1;  //condition for down
        int newy = y;    //condition for down
        if(isSafe(maze,n,newx,newy,visited)){
            path.push_back('D');
            solve(maze,n,newx,newy,path,ans,visited);
            path.pop_back();    //backtracking - clearing the path string for a new value
        }
        
        //up
        newx = x-1;  //condition for up
        newy = y;    //condition for up
        if(isSafe(maze,n,newx,newy,visited)){
            path.push_back('U');
            solve(maze,n,newx,newy,path,ans,visited);
            path.pop_back();  //backtracking - clearing the path string for a new value
        }
        
        //left
        newx = x;  //condition for left
        newy = y-1;    //condition for left
        if(isSafe(maze,n,newx,newy,visited)){
            path.push_back('L');
            solve(maze,n,newx,newy,path,ans,visited);
            path.pop_back();  //backtracking - clearing the path string for a new value
        }
        
        //right
        newx = x;  //condition for right
        newy = y+1;    //condition for right
        if(isSafe(maze,n,newx,newy,visited)){
            path.push_back('R');
            solve(maze,n,newx,newy,path,ans,visited);
            path.pop_back();  //backtracking - clearing the path string for a new value
        }
        
        visited[x][y] = 0; //backtracking - marking this position so that a new path can be formed
    
        
    }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans;
        
        if(m[0][0]==0){
            return ans;
        }
        
        int srcx=0;
        int srcy=0;
        
        vector<vector<int>> visited(n,vector<int>(n,0)); //creating a visited array and initialising all the elements with 0.
        
        string path="";
        
        solve(m,n,srcx,srcy,path,ans,visited);
        
        sort(ans.begin(),ans.end());  //because we have to return it in lexicographically increasing order. 
        
        return ans;
        
    }
};