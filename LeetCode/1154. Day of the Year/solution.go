/**
 * 10957 / 10957 test cases passed.
 * Runtime: 32 ms
 * Memory Usage: 4.9 MB 
 */
var days = []int{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}

func dayOfYear(date string) int {
    year, _ := strconv.Atoi(date[:4])
    month, _ := strconv.Atoi(date[5:7])
    day, _ := strconv.Atoi(date[8:])
    for _, d := range days[:month] {
        day += d
    }
    if month > 2 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        day += 1
    }
    return day
}
 