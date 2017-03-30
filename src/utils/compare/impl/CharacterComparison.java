package utils.compare.impl;

import utils.compare.Comparable;

/**
 * Created by Inno Fang on 2017/3/30.
 *
 */
public class CharacterComparison implements Comparable<Character> {
    @Override
    public boolean moreThan(Character obj1, Character obj2) {
        return obj1 - obj2 > 0;
    }

    @Override
    public boolean lessThan(Character obj1, Character obj2) {
        return obj1 - obj2 < 0;
    }

    @Override
    public boolean equal(Character obj1, Character obj2) {
        return obj1.equals(obj2);
    }
}
