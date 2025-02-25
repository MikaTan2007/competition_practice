string = input()

output_array = []

for char in string:
    if char not in output_array:
        output_array.append(char)

if len(output_array) % 2 == 0:
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")