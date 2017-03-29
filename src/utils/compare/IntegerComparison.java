package utils.compare;

public class IntegerComparison implements Comparable<Integer> {
    @Override
    public boolean moreThan(Integer obj1, Integer obj2) {
        return obj1 > obj2;
    }

    @Override
    public boolean lessThan(Integer obj1, Integer obj2) {
        return obj1 < obj2;
    }

    @Override
    public boolean equal(Integer obj1, Integer obj2) {
        return obj1.equals(obj2);
    }

    @Override
    public boolean moreThanOrEqualTo(Integer obj1, Integer obj2) {
        return obj1 > obj2 || obj1.equals(obj2);
    }

    @Override
    public boolean lessThanOrEqualTo(Integer obj1, Integer obj2) {
        return obj1 < obj2 || obj1.equals(obj2);
    }
}
