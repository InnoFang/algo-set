/**
 * 102 / 102 test cases passed.
 * Runtime: 68 ms
 * Memory Usage: 32.3 MB 
 */
class ParkingSystem {
public:
    vector<int> parking;
    ParkingSystem(int big, int medium, int small) {
        parking.resize(4);
        parking[1] = big;
        parking[2] = medium;
        parking[3] = small;
    }
    
    bool addCar(int carType) {
        if (parking[carType]) {
            parking[carType]--;
            return true;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
