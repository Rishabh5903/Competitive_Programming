from segment_tree import SegmentTree


def find_beautiful_segment(t):
    for _ in range(t):
        n, m = map(int, input().split())
        segments = []
        for _ in range(m):
            segment = tuple(map(int, input().split()))
            segments.append(segment)
        q = int(input())
        changes = []
        for _ in range(q):
            change = int(input())
            changes.append(change)

        segment_tree = SegmentTree([0]*n)
        for segment in segments:
            segment_tree.update(segment[0] - 1, segment[1] - 1, 1)

        ones_count = 0
        zeros_count = 0
        for i in range(n):
            ones_count += segment_tree.query(i, i)
            zeros_count += 1 - segment_tree.query(i, i)
            if ones_count > zeros_count:
                print(changes[i])
                break
        else:
            print(-1)


t = int(input())
find_beautiful_segment(t)
