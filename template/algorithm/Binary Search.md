## Bianyr Search (二分搜索)

```cpp
int binarySearch(int arr[], int left, int right, int target) {
    int mid;
    while (left <= right) {
        mid = left + (right - left) / 2; // for java, can be simplify into (left + right) >>> 1;
        if (arr[mid] == target) return mid;
        else if (arr[mid] > target) right = mid - 1;
        else left = mid + 1;
    }
    return -1;
}
```

### Lower Bound

```cpp
int lowerBound(int arr[], int left, int right, int target) {
    int mid;
    while (left < right) {
        mid = left + (right - left) / 2; // for java, can be simplify into (left + right) >>> 1;
        if (arr[mid] >= target) right = mid;
        else left = mid + 1;
    }
    return left;
}
```

### Upper Bound

```cpp
int upperBound(int arr[], int right, int left, int target) {
    int mid;
    while (left < right) {
        mid = left + (right - left) / 2; // for java, can be simplify into (left + right) >>> 1;
        if (arr[mid] > target) right = mid;
        else left = mid + 1;
    }
    return left;
}
```

### Square Root

```cpp
const double eps = 1e-8;

double square(double x) {
	return x * x;
}

double root(double x) {
	double left = 1, right = x, mid;
	while (right - left > eps) {
		mid = left + (right - left) / 2; // for java, can be simplify into (left + right) >>> 1;
		if (square(mid) > x) {
			right = mid;
		} else {
			left = mid;
		}
	}
	return mid;
}
```
