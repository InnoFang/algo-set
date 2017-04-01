package io.innofang.utils.compare.impl;

import io.innofang.utils.compare.Comparable;

import java.math.BigDecimal;

/**
 * Created by Inno Fang on 2017/3/30.
 *
 */
public class DoubleComparison implements Comparable<Double> {
    @Override
    public boolean moreThan(Double obj1, Double obj2) {
        BigDecimal bd1 = new BigDecimal(obj1.toString());
        BigDecimal bd2 = new BigDecimal(obj2.toString());
        return bd1.compareTo(bd2) > 0;
    }

    @Override
    public boolean lessThan(Double obj1, Double obj2) {
        BigDecimal bd1 = new BigDecimal(obj1.toString());
        BigDecimal bd2 = new BigDecimal(obj2.toString());
        return bd1.compareTo(bd2) < 0;
    }

    @Override
    public boolean equal(Double obj1, Double obj2) {
        BigDecimal bd1 = new BigDecimal(obj1.toString());
        BigDecimal bd2 = new BigDecimal(obj2.toString());
        return bd1.equals(bd2);
    }
}
