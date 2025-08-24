// Binary Search (optimal)

class Solution {
public:
    long long timeRequired(vector<int>& piles, int i){
        long long t = 0;
        int n = piles.size();

        for(int j = 0; j < n; j++){
            t += (piles[j] + i - 1) / i;
        }

        return t;

    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int ans = 0;
        int m = *max_element(piles.begin(), piles.end());

        int left = 1, right = m;

        while(left <= right){
            int mid = left + (right - left) / 2;
            long long reqTime = timeRequired(piles, mid);

            if(reqTime <= h) right = mid - 1;
            else left = mid + 1;
        }

        return left;

        return 0;
        
    }
};


// Linear Search (Brute Force)

class Solution {
public:
    long long timeRequired(vector<int>& piles, int i){
        long long t = 0;
        int n = piles.size();

        for(int j = 0; j < n; j++){
            t += ceil((double)piles[j] / (double)i);
        }

        return t;

    }

    long long minEatingSpeed(vector<int>& piles, int h) {
        int ans = 0;
        int m = *max_element(piles.begin(), piles.end());

        for(int i = 1; i <= m; i++){
            long long reqTime = timeRequired(piles, i);
            if(reqTime <= h) return i;
        }

        return 0;

        
    }
};