/**
 * 72 / 72 test cases passed.
 * Status: Accepted
 * Runtime: 4 ms
 */
 func judgeCircle(moves string) bool {
    hor, vec := 0, 0
    for _, mov := range moves {
        switch mov {
            case 'U': vec += 1
            case 'D': vec -= 1
            case 'R': hor += 1
            case 'L': hor -= 1
        }
    }
    return hor == 0 && vec == 0
}
