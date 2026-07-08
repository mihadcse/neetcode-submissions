class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,double>> cars;
        for(int i=0; i<position.size(); i++){
            double time = (double)(target-position[i])/speed[i];
            cars.push_back({position[i], time});
        }
        sort(cars.begin(), cars.end(), greater<pair<int, double>>());

        int fleet=0;
        double fleettime = 0;

        for(int i=0; i<position.size(); i++){
            if(cars[i].second > fleettime){
                fleet++;
                fleettime = cars[i].second;
            }
        }
        return fleet;
    }
};
