class Solution {
public:
int scoreOfString(string s) {
    int total_sum=0;
    int n=s.size();

    for (int i=1; i<n; i++){
        int neighbour=s[i]- s[i-1];

        total_sum +=abs(neighbour);
        }

        return total_sum;
}
};
