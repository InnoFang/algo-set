# [721. Accounts Merge](https://leetcode.com/problems/accounts-merge/description/)

![](https://img.shields.io/badge/Difficulty-Medium-F8AF40.svg)

<details>
<summary style="color:#4FC3F7">Topics</summary>

* [`Depth-first Search`](https://leetcode.com/tag/depth-first-search/)
* [`Union Find`](https://leetcode.com/tag/union-find/)

</details>
<br />

Given a list `accounts`, each element `accounts[i]` is a list of strings, where the first element `accounts[i][0]` is a _name_, and the rest of the elements are emails representing _emails_ of the account.

Now, we would like to merge these accounts. Two accounts definitely belong to the same person if there is some email that is common to both accounts. Note that even if two accounts have the same name, they may belong to different people as people could have the same name. A person can have any number of accounts initially, but all of their accounts definitely have the same name.

After merging the accounts, return the accounts in the following format: the first element of each account is the name, and the rest of the elements are emails **in sorted order**. The accounts themselves can be returned in any order.

**Example 1:**

    Input:
    accounts = [["John", "johnsmith@mail.com", "john00@mail.com"], ["John", "johnnybravo@mail.com"], ["John", "johnsmith@mail.com", "john_newyork@mail.com"], ["Mary", "mary@mail.com"]]

    Output:
    [["John", 'john00@mail.com', 'john_newyork@mail.com', 'johnsmith@mail.com'],  ["John", "johnnybravo@mail.com"], ["Mary", "mary@mail.com"]]

    Explanation:
    The first and third John's are the same person as they have the common email "johnsmith@mail.com".
    The second John and Mary are different people as none of their email addresses are used by other accounts.
    We could return these lists in any order, for example the answer [['Mary', 'mary@mail.com'], ['John', 'johnnybravo@mail.com'],
    ['John', 'john00@mail.com', 'john_newyork@mail.com', 'johnsmith@mail.com']] would still be accepted.

**Note:**

 + The length of `accounts` will be in the range `[1, 1000]`.
 + The length of `accounts[i]` will be in the range `[1, 10]`.
 + The length of `accounts[i][j]` will be in the range `[1, 30]`.

## Solution

**题目大意**

给定一个列表帐户，每个元素accounts [i]是一个字符串列表，其中第一个元素accounts [i] [0]是一个名称，其余元素是表示该帐户电子邮件的电子邮件。

现在，我们想合并这些帐户。 如果两个帐户都有一些共同的电子邮件，则两个帐户肯定属于同一个人。 请注意，即使两个帐户具有相同的名称，它们也可能属于不同的人，因为人们可能具有相同的名称。 一个人最初可以拥有任意数量的帐户，但其所有帐户都具有相同的名称。

合并帐户后，按以下格式返回帐户：每个帐户的第一个元素是名称，其余元素是按排序顺序排列的电子邮件。 账户本身可以以任何顺序返回。


**解题思路**

思路是解题的关键。这道题最佳的解决思路就是使用并查集这一数据结构

```java
private int[] parent;

private int find(int p) {
    while (p != parent[p]) {
        p = parent[p] = parent[parent[p]];
    }
    return p;
}

private void union(int p, int q) {
    int rootP = find(p);
    int rootQ = find(q);
    if (rootP != rootQ) parent[rootP] = rootQ;
}
```

那么使用并查集的话，最要观察使用什么来作为 “根”，使用给定的账户名字显然是不合理的，因为账户名有相同的，这就给我们解题带来了困扰。
但是我们有一点可以确定的是，通过邮箱来跟具体的名字进行绑定，当两个账户有相同的邮箱时，就可以对账户进行 union 操作

所以我们可以用一个数组来存储账号的下标，这样就简化了操作，并且可以使用数组进行快速访问。

```java
parent = new int[accounts.size()];
for (int i = 0; i < accounts.size(); i++) {
    parent[i] = i;
}
```

接下来就可以对每个账户的邮箱进行检查，把每个账户的邮箱与账号的下标进行关联，那么在这个操作中可以使用 `HashMap<String, Integer>` 来进行存储，
当初先重复邮箱时，先判断当前的下标的用户名与之前重复邮箱对应下标的用户名是否一样，若一样就进行账户下标的 union 操作

```java
HashMap<String, Integer> mail = new HashMap<>();
for (int i = 0; i < accounts.size(); i++) {
    for (int j = 1; j < accounts.get(i).size(); j++) {
        String m = accounts.get(i).get(j);
        if (!mail.containsKey(m)) mail.put(m, i);
        else {
            int k = mail.get(m);
            if (accounts.get(k).get(0).equals(accounts.get(i).get(0))) union(k, i);
        }
    }
}
```

接着进行账户的合并，因为题目要求邮箱要按字典序排列，并且要剔除重复的邮箱，对这一要求在 C++ 中可以直接使用 Set 集合，而在 Java 中对应的集合就是 TreeSet。
利用已经 union 过了的数组，通过找到每个下标的根下标，找到对应账户，再把当前下标账户的邮箱添加到 Set（或 TreeSet） 中

```java
HashMap<Integer, TreeSet<String>> merged = new HashMap<>();
for (int i = 0; i < parent.length; i++) {
    int a = find(i);
    if (!merged.containsKey(a)) merged.put(a, new TreeSet<>());
    merged.get(a).addAll(accounts.get(i));
}
```

在根据返回的要求，调整具体返回的内容即可

```java
List<List<String>> result = new ArrayList<>();
merged.forEach((integer, strings) -> result.add(new ArrayList<>(strings)));
return result;
```

-----------------------

Java 代码参考如下

```java
/**
 * 49 / 49 test cases passed.
 * Status: Accepted
 * Runtime: 142 ms
 */
class Solution {
    private int[] parent;

    private int find(int p) {
        while (p != parent[p]) {
            p = parent[p] = parent[parent[p]];
        }
        return p;
    }

    private void union(int p, int q) {
        int rootP = find(p);
        int rootQ = find(q);
        if (rootP != rootQ) parent[rootP] = rootQ;
    }

    public List<List<String>> accountsMerge(List<List<String>> accounts) {
        parent = new int[accounts.size()];
        for (int i = 0; i < accounts.size(); i++) {
            parent[i] = i;
        }

        HashMap<String, Integer> mail = new HashMap<>();
        for (int i = 0; i < accounts.size(); i++) {
            for (int j = 1; j < accounts.get(i).size(); j++) {
                String m = accounts.get(i).get(j);
                if (!mail.containsKey(m)) mail.put(m, i);
                else {
                    int k = mail.get(m);
                    if (accounts.get(k).get(0).equals(accounts.get(i).get(0))) union(k, i);
                }
            }
        }

        HashMap<Integer, TreeSet<String>> merged = new HashMap<>();
        for (int i = 0; i < parent.length; i++) {
            int a = find(i);
            if (!merged.containsKey(a)) merged.put(a, new TreeSet<>());
            merged.get(a).addAll(accounts.get(i));
        }

        List<List<String>> result = new ArrayList<>();
        merged.forEach((integer, strings) -> result.add(new ArrayList<>(strings)));
        return result;
    }
}
```

<br />
<br />

kotlin 代码参考如下

```kotlin
/**
 * 49 / 49 test cases passed.
 * Status: Accepted
 * Runtime: 428 ms
 */
class Solution {
    private val parent = mutableListOf<Int>()

    private fun find(a: Int): Int {
        if (a != parent[a]) parent[a] = find(parent[a])
        return parent[a]
    }

    private fun union(p: Int, q: Int) {
        val rootP = find(p)
        val rootQ = find(q)
        if (rootQ != rootP) parent[rootP] = rootQ
    }

    fun accountsMerge(accounts: List<List<String>>): List<List<String>> {
        parent.addAll(List(accounts.size) { it })

        val mail = HashMap<String, Int>()
        for (i in (0..accounts.lastIndex)) {
            for (j in (1..accounts[i].lastIndex)) {
                val a = accounts[i][j]
                if (!mail.containsKey(a)) mail[a] = i
                else {
                    val k = mail[a]!!
                    if (accounts[i][0] == accounts[k][0]) union(k, i)
                }
            }
        }

        val merged = HashMap<Int, java.util.TreeSet<String>>()
        for (i in (0..parent.lastIndex)) {
            val a = find(i)
            merged.getOrPut(a, { java.util.TreeSet() }).addAll(accounts[i])
        }

        val res = ArrayList<ArrayList<String>>()
        merged.forEach { _, v -> res.add(ArrayList(v)) }
        return res
    }
}
```