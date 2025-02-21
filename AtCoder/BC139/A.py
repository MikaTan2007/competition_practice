predict = input()
actual = input()
dayp1, dayp2, dayp3 = predict[0], predict[1], predict[2]
daya1, daya2, daya3 = actual[0], actual[1], actual[2]

total = 0
if dayp1 == daya1:
    total += 1
if dayp2 == daya2:
    total +=1 
if dayp3 == daya3:
    total += 1

print(total)


