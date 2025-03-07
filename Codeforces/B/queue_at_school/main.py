input_line = input().split()
n = int(input_line[0])
t = int(input_line[1])

initial_order = list(input())

for x in range(0,t):
    late_order = []

    for j in range(0, len(initial_order) - 1):
        if initial_order[j] == "B" and initial_order[j+1] == "G":
            late_order.append(j)

    for i in late_order:
        initial_order[i] = "G"
        initial_order[i+1] = "B"

print(''.join(initial_order))