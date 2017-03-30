package utils.compare;

/**
 * Created by Inno Fang on 2017/3/28.
 *
 * This interface is used for two types of comparisons
 */
public interface Comparable<T> {

    boolean moreThan(T obj1, T obj2);

    boolean lessThan(T obj1, T obj2);

    boolean equal(T obj1, T obj2);

    boolean moreThanOrEqualTo(T obj1, T obj2);

    boolean lessThanOrEqualTo(T obj1, T obj2);

}
