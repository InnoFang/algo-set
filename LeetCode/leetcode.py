import os
import re

solution = {
    'dir_name' : '',
    'dir_url'  : '',
    'file_urls': {}
}

suffix = ["cpp", "java", "js", "py", "go", "kt"]
leetcode_loc = '.'

def main():
    solution_list = []
    for dir_url, _, files in os.walk(leetcode_loc):
        dir_name = dir_url.split('\\')[-1]
        if re.match(r'^[0-9]{4}\. .*', dir_name):
            solution['dir_name'] = dir_name
            solution['dir_url']  = os.path.join('LeetCode', dir_url[2:]) 
            solution['file_urls'] = {f.split('.')[-1] : os.path.join(dir_url, f) for f in files}
            solution_list.append(solution.copy())

    with open('./LeetCode.md', 'w+', encoding="utf-8") as md:
        md.write("# Leetcode\n**Problems have been solved:** " + str(len(solution_list)))
        md.write("\n\n")
        md.write("Problem | Cpp | Java | JS | Python | Go | Kotlin\n")
        md.write("---|---|---|---|---|---|---\n")

        for s in solution_list:
            md.write("[{}]({})".format(s['dir_name'], s['dir_url'].replace(" ", "%20")).replace("\\", "/"))
            for ext in suffix:
                md.write('|')
                if ext in s['file_urls']: 
                    md.write("[{}]({})".format(ext, s['file_urls'][ext].replace(" ", "%20").replace("\\", "/")))
            md.write('\n')
        md.write("\n\n------\n\n")

if __name__ == '__main__':
    main()
    