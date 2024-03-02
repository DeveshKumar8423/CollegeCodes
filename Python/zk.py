def maximum(a,b):
    maxim = lambda a,b : a>b
    if maxim(a,b) ==True:
        print("A is greater than B")
    else:
        print("B is greater than A")
a = int(input("Enter number : "))
b = int(input("Enter number : "))
maximum(a,b)