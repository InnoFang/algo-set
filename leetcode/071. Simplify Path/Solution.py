class Solution:
    def simplifyPath(self, path):
        """
        :type path: str
        :rtype: str
        ----------------
        252 / 252 test cases passed.
        Status: Accepted
        Runtime: 72 ms
        """
        if path == '':
            return path

        valid = [v for v in path.split('/') if v != '' if v != '.']
        stack = []
        for v in valid:
            if v == '..':
                if len(stack) > 0:
                    stack.pop()
            else:
                stack.append('/{}'.format(v))

        if len(stack) == 0:
            stack.append('/')
        return ''.join(stack)


if __name__ == '__main__':
    print(Solution().simplifyPath("/"))
    print(Solution().simplifyPath(""))
    print(Solution().simplifyPath("/home/foo/.ssh/../.ssh2/authorized_keys/"))
    print(Solution().simplifyPath("/."))
    print(Solution().simplifyPath("/.."))
    print(Solution().simplifyPath("/home/"))
    print(Solution().simplifyPath("/home/."))
    print(Solution().simplifyPath("/home/.."))
    print(Solution().simplifyPath("/a/./b/../../c/"))
    print(Solution().simplifyPath("/../"))
    print(Solution().simplifyPath("/home//foo/"))
    print(Solution().simplifyPath("///TJbrd/owxdG//"))
