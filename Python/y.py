a=int(input("enter the starting range:"))
b=int(input("enter the end range:"))
eve=[]
odd=[]
sum_even=0
sum_odd=0
for i in range(a,b):
    if i%2==0:
        eve.append(i)
        sum_even=sum_even+i
    else:
        odd.append(i)
        sum_odd=sum_odd+i
print("even list =",eve)
print("even sum","=",sum_even)
print("odd list =",odd)
print("odd sum","=",sum_odd)