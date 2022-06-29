"""
739 / 739 test cases passed.
Runtime: 44 ms
Memory Usage: 14.8 MB
"""
class Codec:
    def __init__(self):
        self.id = 0
        self.recore = {}

    def encode(self, longUrl: str) -> str:
        """Encodes a URL to a shortened URL.
        """
        self.id += 1
        self.recore[self.id] = longUrl
        return f"http://tinyurl.com/{self.id}"
        

    def decode(self, shortUrl: str) -> str:
        """Decodes a shortened URL to its original URL.
        """
        i = shortUrl.rfind("/")
        id = int(shortUrl[i+1:])
        return self.recore[id]
        

# Your Codec object will be instantiated and called as such:
# codec = Codec()
# codec.decode(codec.encode(url))
