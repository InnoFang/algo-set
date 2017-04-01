package io.innofang.utils.compare;

/**
 * Created by Inno Fang on 2017/3/28.
 * <p>
 * This interface is used for two types of comparisons
 */
public interface Comparable<T> {

    boolean moreThan(T obj1, T obj2);

    boolean lessThan(T obj1, T obj2);

    boolean equal(T obj1, T obj2);

    default boolean moreThanOrEqualTo(T obj1, T obj2) {
        return moreThan(obj1, obj2) || equal(obj1, obj2);
    }

    default boolean lessThanOrEqualTo(T obj1, T obj2) {
        return lessThan(obj1, obj2) || equal(obj1, obj2);
    }

}
