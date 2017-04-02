package io.innofang.search;


import io.innofang.utils.comparator.Comparator;

/**
 * Created by Inno Fang on 2017/4/2.
 *
 */
public abstract class ISearch {
    protected Comparator comparator;

    public ISearch(Comparator comparator) {
        this.comparator = comparator;
    }

    public abstract <T> void search(T target);


}
