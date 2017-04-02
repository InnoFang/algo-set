package io.innofang.utils.comparator.impl;

import io.innofang.utils.comparator.Comparator;

/**
 * Created by Inno Fang on 2017/3/30.
 *
 */
public class CharacterComparison implements Comparator<Character> {
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
