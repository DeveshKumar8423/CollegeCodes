def function(c):
    even=lambda x:x%2
    for i in (c):
        if even(i)==0:
            print("even=",i)
        else:
            print("odd",i)
l=[]
a=int(input("enter the stating range:"))
b=int(input("enter the end range:"))
for i in range(a,b+1):
    l.append(i)
function(l)