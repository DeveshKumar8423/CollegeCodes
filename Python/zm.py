'''An ATM contain Indian currency notes of 100,500 and 1000'. Write a python program that calculates and displays
the minimum number of notes required to be dispensed to meet the user's requirement'''

print("Enter the amount you want to withdraw")
amount = int(input())
notes = [2000,500,200,100]
note_counter = [0,0,0,0]
i = 0

while amount!=0:
    note_counter[i] = amount//notes[i]
    amount = amount - note_counter[i] * notes[i]
    i+=1

print("The notes are :")
for i in range(4):
    if note_counter[i]!=0:
        print(notes[i] ,'=', note_counter[i])
print("Thank you")