import os
import sys


"""
Usage: python add-solution.py solution-number-1 solution-number-2 ...
Note: Solution number is a 4-digit number with leading 0s, e.g. 0001, 0002, etc

This script should be under the folder of `LeetCode` solutions 
"""

if len(sys.argv) == 1:
    print('Please specify the solution number first!')
    exit(1)


"""
Get the legal solution number and path list
"""

leetcode_dir = 'LeetCode'


def get_new_solution_path_list():
    solution_number_list = sorted(sys.argv[1:])
    new_solution_path_list = []
    for num in solution_number_list:
        if not num.isnumeric():
            print(f'The solution numebr {num} should be integer.')
            exit(2)

    index = 0
    for dir_name in os.listdir(leetcode_dir):
        num = solution_number_list[index]
        if dir_name.startswith(num):
            check = input(
                f"Are you sure to add the solution for '{dir_name}'? (Y/N)")
            if check.lower() == 'n':
                print(f"Skip the solution '{dir_name}'.\n")
                continue
            else:
                print(f"Add the solution '{dir_name}'.\n")
            solution_path = os.path.join(leetcode_dir, dir_name)
            new_solution_path_list.append((num, solution_path))
            index += 1

        if index >= len(solution_number_list):
            break

    if index < len(solution_number_list):
        check = input(
            f"Here is no solution numebr {solution_number_list[index:]}, continue or not? (Y/N)")
        if check.lower() == 'n':
            print("Terminal the program.")
            os.exit(0)
        print()

    return new_solution_path_list


"""
Add the solution list to remote
"""


def number_format(number):
    number = int(number)
    if num[-1] == '1':
        return f'{number}st'
    if num[-1] == '2':
        return f'{number}nd'
    if num[-1] == '3':
        return f'{number}rd'
    return f'{number}th'


soltuion_path_list = get_new_solution_path_list()


def upload_command(file_path, message):
    print("==>", message, '<==')
    os.system(f'git add "{file_path}"')
    os.system(f'git commit -m "{message}"')
    os.system('git push')
    print()


for num, solution_path in soltuion_path_list:
    for filename in os.listdir(solution_path):
        file_path = os.path.join(solution_path, filename)
        solution_number = number_format(num)
        if filename.endswith("md"):
            upload_command(
                file_path, f":memo: upload {solution_number} README")
        elif filename.endswith("cpp"):
            upload_command(
                file_path, f":sparkles: upload {solution_number} cpp solution")
        elif filename.endswith("go"):
            upload_command(
                file_path, f":sparkles: upload {solution_number} golang solution")
        elif filename.endswith("java"):
            upload_command(
                file_path, f":sparkles: upload {solution_number} java solution")
        elif filename.endswith("js"):
            upload_command(
                file_path, f":sparkles: upload {solution_number} javascript solution")
        elif filename.endswith("kt"):
            upload_command(
                file_path, f":sparkles: upload {solution_number} kotlin solution")
        elif filename.endswith("py"):
            upload_command(
                file_path, f":sparkles: upload {solution_number} python solution")
        elif filename.endswith("rs"):
            upload_command(
                file_path, f":sparkles: upload {solution_number} rust solution")


"""
Update the LeetCode.md
"""

check = input("Update the 'LeetCode.md' or not? (Y/N)")

nums = list(map(int, sys.argv[1:]))
if check.lower() == 'n':
    print(
        f"The LeetCode soltion number {nums} has been uploaded successfully, but the 'LeetCode.md' file has not been updated.")
else:
    print("==>", "Update the LeetCode list", "<==")
    os.system("python LeetCode\generate_leetcode_list.py")
    os.system("git add LeetCode.md")
    os.system(f'git commit -m ":memo: add solution number {nums}"')
    os.system('git push')
