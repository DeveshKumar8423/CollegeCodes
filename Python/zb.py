def sumoftwonumbers():
    num1 = float(input("Enter first number :"))
    num2 = float(input("Enter secons number :"))
    sum = num1 + num2
    print(int(sum))

z=1
while z!=0:
    print("Enter 1 for add or 2 for exit")
    choice = int(input())
    if(choice==1):
        sumoftwonumbers()
    elif(choice==2):
        exit
    else:
        print("Invalid Choice")


