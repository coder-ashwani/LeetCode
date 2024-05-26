class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> count;
        priority_queue<pair<int,char>> pq;
        // counting frequency of charracters
        for(char c: s){
            count[c]++;
        }
        //inserting into priority queue
        for(auto it:count){
            pq.push({it.second,it.first});
        }

        // taking back from priority queue and making result string
        string str;
        while(! pq.empty()){
            while(count[pq.top().second]-- > 0){
                str += pq.top().second;
           }
           pq.pop();
        }
        return str;
    }
};