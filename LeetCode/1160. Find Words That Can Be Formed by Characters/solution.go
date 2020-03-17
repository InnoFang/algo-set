/**
 * 36 / 36 test case passed
 * Status: Accepted
 * Runtime: 68 ms
 */
func countCharacters(words []string, chars string) int {
	dict := make(map[rune]rune)
	for _, c := range chars {
		dict[c] += 1
	}

	ans := 0
	for _, word := range words {
		wDict := make(map[rune]rune)
		for _, w := range word {
			wDict[w] += 1
		}
		match := true
		for _, w := range word {
			if wDict[w] > dict[w] {
				match = false
				break
			}
		}
		if match {
			ans += len(word)
		}
	}
	return ans
}
