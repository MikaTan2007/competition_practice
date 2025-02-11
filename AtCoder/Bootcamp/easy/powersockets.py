#https://atcoder.jp/contests/abc139/tasks/abc139_b
socket_num, target = map(int, input().split())
total = socket_num
sockets = 1
if target == 1:
    print(0)
elif socket_num >= target:
    total = socket_num
    print(1)
else:
    while total < target:
        total += socket_num - 1
        sockets += 1
    print(sockets)