"""
102 / 102 test cases passed.
Runtime: 136 ms
Memory Usage: 14.19MB
"""
class ParkingSystem:
    
    def __init__(self, big: int, medium: int, small: int):
        self.parking = [big, medium, small]

    def addCar(self, carType: int) -> bool:
        if self.parking[carType - 1]:
            self.parking[carType - 1] -= 1
            return True
        return False



# Your ParkingSystem object will be instantiated and called as such:
# obj = ParkingSystem(big, medium, small)
# param_1 = obj.addCar(carType)
