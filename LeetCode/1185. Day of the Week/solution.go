/**
 * 43 / 43 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 2.1 MB 
 */
func dayOfTheWeek(day int, month int, year int) string {
    return time.Date(year, time.Month(month), day, 0, 0, 0, 0, time.Local).Format("Monday") 
}
