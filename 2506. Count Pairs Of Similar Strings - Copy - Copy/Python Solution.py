class Solution:
    def similarPairs(self, words: List[str]) -> int:
        wd_set = collections.defaultdict(set)
        for idx, wd in enumerate(words):
            wd_set[idx] = set(wd)
        
        ans = 0
        for i in range(len(words) - 1):
            for j in range(i + 1, len(words)):
                if len(wd_set[i].symmetric_difference(wd_set[j])) == 0:
                    ans += 1
        return ans