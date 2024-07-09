//leetcode question - this solution is not working

class Solution {
public:
    bool isSafe(long long newx, long long newy, 
    vector < vector <int> >& blocked,long long n){
        // Check if the coordinates are within bounds and not blocked
        if (newx >= 0 && newx < n && newy >= 0 && newy < n) {
            for (const auto& block : blocked) {
                if (block[0] == newx && block[1] == newy) {
                    return false;
                }
            }
            return true;
        }
        return false;
    }


    void solve(long long x, long long y, long long a, long long b,
    vector<string>& ans, vector < vector <int> >& blocked, string path, set<pair<int, int>>& visited){
        //base case
        if(x == a && y == b){
            ans.push_back(path);
            return;
        }

        visited.insert({x, y});

        //movements allowed - D,L,R,U

        //Down
        long long n = 1e6;

        if(isSafe(x + 1, y, blocked, n) && visited.find({x + 1, y}) == visited.end()){
            solve(x+1, y, a, b, ans, blocked, path + 'D', visited);
        }

        //Left
        if(isSafe(x, y - 1, blocked, n) && visited.find({x, y - 1}) == visited.end()){
            solve(x, y-1, a, b, ans, blocked, path + 'L', visited);
        }

        //Right
        if(isSafe(x, y + 1, blocked, n) && visited.find({x, y + 1}) == visited.end()){
            solve(x, y+1, a, b, ans, blocked, path + 'R', visited);
        }

        //Up
        if(isSafe(x - 1, y, blocked, n) && visited.find({x - 1, y}) == visited.end()){
            solve(x-1, y, a, b, ans, blocked, path + 'U', visited);
        }

        visited.erase({x, y});
    }


    bool isEscapePossible(vector<vector<int>>& blocked, vector<int>& source, vector<int>& target) {
        vector<string> ans;
        string path = "";
        set<pair<int, int>> visited;

        solve(source[0], source[1], target[0], target[1], ans, blocked, path, visited);  
        return !ans.empty();
    }
};