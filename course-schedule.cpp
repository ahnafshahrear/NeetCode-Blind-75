class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>> &prerequisites) 
    {
        unordered_map<int, vector<int>> graph;
        for (int i = 0; i < prerequisites.size(); i++) 
        {
            graph[prerequisites[i][0]].push_back(prerequisites[i][1]);
        }
        unordered_set<int> visited;
        for (int course = 0; course < numCourses; course++) 
        {
            if (!dfs(course, graph, visited)) 
            {
                return false;
            }
        }
        return true;
    }

    bool dfs(int course, unordered_map<int, vector<int>> &graph, unordered_set<int> &visited)
    {
        if (visited.find(course) != visited.end()) return false;
        if (graph[course].empty()) return true;
        visited.insert(course);
        for (int x: graph[course])
        {
            if (!dfs(x, graph, visited)) return false;
        }
        graph[course].clear();
        visited.erase(course);
        return true;
    }
};
