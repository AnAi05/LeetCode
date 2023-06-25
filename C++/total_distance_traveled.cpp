class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int ans = 0, used = 0;
        while(mainTank > 0){
            used++;
            if(used%5 == 0 && additionalTank > 0){
                additionalTank--;
                mainTank++;
            }
            mainTank--;
            ans += 10;
        }
        return ans;
    }
};
