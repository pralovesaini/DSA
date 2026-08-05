class Solution:
    def insert(self, intervals: List[List[int]], newInterval: List[int]) -> List[List[int]]:
        ans = []

        start, end = newInterval

        for interval in intervals:

            # Current interval is before new interval
            if interval[1] < start:
                ans.append(interval)

            # Current interval is after new interval
            elif interval[0] > end:
                ans.append([start, end])
                ans.extend(intervals[intervals.index(interval):])
                return ans

            # Overlap
            else:
                start = min(start, interval[0])
                end = max(end, interval[1])

        ans.append([start, end])
        return ans