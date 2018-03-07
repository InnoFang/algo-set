package io.innofang.java.utils.comparator.impl;

import io.innofang.java.utils.comparator.Comparator;

/**
 * Created by Inno Fang on 2017/3/30.
 *
 */
public class LongComparison implements Comparator<Long> {

    @Override
    public boolean moreThan(Long obj1, Long obj2) {
        return obj1 > obj2;
    }

    @Override
    public boolean lessThan(Long obj1, Long obj2) {
        return obj1 < obj2;
    }

    @Override
    public boolean equal(Long obj1, Long obj2) {
        return obj1.equals(obj2);
    }
}
