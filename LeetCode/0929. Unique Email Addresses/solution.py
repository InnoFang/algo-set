"""
185 / 185 test cases passed.
Runtime: 56 ms
Memory Usage: 15.1 MB
"""
class Solution:
    def numUniqueEmails(self, emails: List[str]) -> int:
        email_set = set()
        for email in emails:
            name, domain = email.split('@')
            name = name.split('+')[0].replace('.', '')
            email_set.add(name + '@' + domain)
        return len(email_set)
