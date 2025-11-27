class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<int> pq;    
        int s = score.size();

        for (int scor : score) {   
            pq.push(scor);
        }

        unordered_map<int, string> mp;  
        int rank = 1;

        while (!pq.empty()) {
            int top = pq.top();
            pq.pop();

            if (rank == 1) mp[top] = "Gold Medal";
            else if (rank == 2) mp[top] = "Silver Medal";
            else if (rank == 3) mp[top] = "Bronze Medal";
            else mp[top] = to_string(rank);

            rank++;
        }

        vector<string> result(s);

        for (int i = 0; i < s; i++) {
            result[i] = mp[score[i]];
        }

        return result;
    }
};
