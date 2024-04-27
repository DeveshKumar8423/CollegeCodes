'''You are given a number A which contains only digits 0's and 1's.
Your task is to make all digits same by just flipping one digit (i.e. 0 to 1 or 1 to 0 ) only. 
If it is possible to make all the digits same by just flipping one digit then print 'YES' else print 'NO'.'''
# Input Description:
# The first line contains a number made up of 0's and 1's.
# Output Description:
# Print 'YES' or 'NO' accordingly
print("Enter the number:")
number=input()
count=0
for i in number:
    if i=='1':
        count+=1
if count==1 or count==len(number)-1:
    print("YES")
else:
    print("NO")