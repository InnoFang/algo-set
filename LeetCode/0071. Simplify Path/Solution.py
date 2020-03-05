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


class Solution2:
    def simplifyPath(self, path):
        """
        :type path: str
        :rtype: str 
        ---------------
        252 / 252 test cases passed.
        Status: Accepted
        Runtime: 48 ms
        """
        stack = []
        for p in path.split('/'):
            if p == '..':
                if stack:
                    stack.pop()
            elif p and p != '.':
                stack.append(p)
        return '/' + '/'.join(stack)


if __name__ == '__main__':
    print(Solution2().simplifyPath("/"))
    print(Solution2().simplifyPath(""))
    print(Solution2().simplifyPath("/home/foo/.ssh/../.ssh2/authorized_keys/"))
    print(Solution2().simplifyPath("/."))
    print(Solution2().simplifyPath("/.."))
    print(Solution2().simplifyPath("/home/"))
    print(Solution2().simplifyPath("/home/."))
    print(Solution2().simplifyPath("/home/.."))
    print(Solution2().simplifyPath("/a/./b/../../c/"))
    print(Solution2().simplifyPath("/../"))
    print(Solution2().simplifyPath("/home//foo/"))
    print(Solution2().simplifyPath("///TJbrd/owxdG//"))
