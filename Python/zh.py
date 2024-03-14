def even_odd(c):
    
    square_even = lambda x: x**2
    square_odd = lambda x: x**2
    
    d = []  # list for even numbers
    f = []  # list for odd numbers
    for i in c:
        if i % 2 == 0:
            d.append(square_even(i))  
        else:
            f.append(square_odd(i))   
    print("even =", d)
    print("odd =", f)

a = int(input("enter the starting range: "))
b = int(input("enter the end range: "))
c = list(range(a, b))  
even_odd(c)