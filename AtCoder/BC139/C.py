N = int(input())
Heights = input().split()
Heights = [int(x) for x in Heights]
print(N)
print(Heights)

highest_moves = 0
starting_point = 0
while starting_point < N-1:
    moves = 0
    current_point = starting_point 
    next_point = current_point + 1
    if Heights[current_point] >= Heights[next_point]:
        moves += 1
        current_point += 1
        next_point += 1
    else:
        starting_point = current_point
        
