https://leetcode.com/problems/course-schedule-iii/

bool comp(vector<int> &a,vector<int> &b){
    return a.back() < b.back();
}
class Solution {
public:
    
    int scheduleCourse(vector<vector<int>>& courses) {
        sort(courses.begin(),courses.end(),comp);
        int time = 0;
        priority_queue<int> q;
        for(auto i:courses){
            q.push(i[0]);
            time+=i[0];
            if(time > i[1]){
                time-=q.top();
                q.pop();
            }
        }
        return q.size();
    }
};