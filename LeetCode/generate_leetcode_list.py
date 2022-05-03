import os
import re

solution = {
    'difficulty': '',
    'tags': '',
    'dir_name' : '',
    'dir_url'  : '',
    'file_urls': {}
}

suffix = ["cpp", "java", "js", "py", "go", "kt", "rs"]
leetcode_loc = '.'

patt = r'.*!\[\]\(https://img.shields.io/badge/Difficulty-(.*)-[\w]{3,6}\.svg\).*</summary>(.*)</details>.*'

def extract_info_from_readme(readme_file):
    with open(readme_file, 'r', encoding='utf-8') as f:
        readme = ''.join(line.strip() for line in f)
    result = re.search(patt, readme, re.MULTILINE | re.I)
    if not result:
        return '', ''
    return result.group(1), result.group(2).replace('*', '')

def main():
    solution_list = []
    for dir_url, _, files in os.walk(leetcode_loc):
        dir_name = dir_url.split('\\')[-1]
        if re.match(r'^[0-9]{4}\. .*', dir_name):
            solution['dir_name'] = dir_name
            solution['dir_url']  = os.path.join('.', dir_url[2:]) 
            solution['file_urls'] = {f.split('.')[-1] : os.path.join(dir_url, f) for f in files}
            readme_file = os.path.join(dir_url, 'README.md')
            if os.path.exists(readme_file):
                readme_info = extract_info_from_readme(readme_file)
                solution['difficulty'] = readme_info[0]
                solution['tags'] = readme_info[1]
            solution_list.append(solution.copy())

    with open('./LeetCode.md', 'w+', encoding="utf-8") as md:
        md.write("# Leetcode\n**Problems have been solved:** " + str(len(solution_list)))
        md.write("\n\n")
        md.write("Problem | Difficulty | Tags | Cpp | Java | JS | Python | Go | Kotlin | Rust\n")
        md.write("---|---|---|---|---|---|---|---|---|---\n")

        for s in solution_list:
            md.write("[{}]({})".format(s['dir_name'], s['dir_url'].replace(" ", "%20")).replace("\\", "/"))
            md.write("|{}|{}".format(s['difficulty'], s['tags']))
            for ext in suffix:
                md.write('|')
                if ext in s['file_urls']: 
                    md.write("[{}]({})".format(ext, s['file_urls'][ext].replace(" ", "%20").replace("\\", "/")))
            md.write('\n')
        md.write("\n\n------\n\n")

if __name__ == '__main__':
    main()
    