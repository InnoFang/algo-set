package io.innofang.utils.compare.impl;

import io.innofang.utils.compare.Comparable;

import java.math.BigDecimal;

/**
 * Created by Inno Fang on 2017/3/30.
 *
 */
public class FloatComparison implements Comparable<Float> {
    @Override
    public boolean moreThan(Float obj1, Float obj2) {
        BigDecimal bd1 = new BigDecimal(obj1.toString());
        BigDecimal bd2 = new BigDecimal(obj2.toString());
        return bd1.compareTo(bd2) > 0;
    }

    @Override
    public boolean lessThan(Float obj1, Float obj2) {
        BigDecimal bd1 = new BigDecimal(obj1.toString());
        BigDecimal bd2 = new BigDecimal(obj2.toString());
        return bd1.compareTo(bd2) < 0;
    }

    @Override
    public boolean equal(Float obj1, Float obj2) {
        BigDecimal bd1 = new BigDecimal(obj1.toString());
        BigDecimal bd2 = new BigDecimal(obj2.toString());
        return bd1.equals(bd2);
    }
}
