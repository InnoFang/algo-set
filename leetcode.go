package main

import (
	"io/ioutil"
	"os"
	"path"
	"fmt"
	"strings"
)

type Solution struct {
	DirName string
	DirUrl  string
	Urls    map[string]string
}

const LEETCODE_DIR = `./LeetCode`

var suffix = []string{"cpp", "java", "js", "python", "go", "kt"}

func main() {
	md, err := os.OpenFile("LeetCode.md", os.O_CREATE|os.O_WRONLY, 0666)
	defer md.Close()
	panicErr(err)

	list, err := ioutil.ReadDir(LEETCODE_DIR)
	panicErr(err)
	solutions := make([]Solution, len(list))
	for idx, dir := range list {
		if dir.Name() == ".vscode" {
			continue
		}
		if dir.IsDir() {
			solution := Solution{DirName: dir.Name(), Urls: make(map[string]string)}
			solution.DirUrl = LEETCODE_DIR + "/" + dir.Name()
			files, err := ioutil.ReadDir(solution.DirUrl)
			panicErr(err)
			for _, f := range files {
				if dir.Name() == ".vscode" {
					continue
				}
				ext := path.Ext(f.Name())[1:]
				if ok := contains(suffix, ext); ok {
					solution.Urls[ext] = LEETCODE_DIR + "/" + dir.Name() + "/" + f.Name()
				}
			}
			solutions[idx] = solution
		}
	}

	md.WriteString("Problem | Cpp | Java | JS | Python | Go | Kotlin\n")
	md.WriteString("---|---|---|---|---|---|---\n")
	for _, s := range solutions {
		md.WriteString(fmt.Sprintf("[%s](%s)", s.DirName, strings.Replace(s.DirUrl, " ", "%20", -1)))
		for _, suf := range suffix {
			md.WriteString("|")
			if _, ok := s.Urls[suf]; ok {
				md.WriteString(fmt.Sprintf("[%s](%s)", suf, strings.Replace(s.Urls[suf], " ", "%20", -1)))
			}
		}
		md.WriteString("\n")
	}
}

func contains(source []string, target string) bool {
	for _, t := range source {
		if t == target {
			return true
		}
	}
	return false
}

func panicErr(err error) {
	if err != nil {
		panic(err)
	}
}
