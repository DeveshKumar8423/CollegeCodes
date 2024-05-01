celsius = [34, 56, 23, 67, 45, 67, 67, 34]
farenheit = list(map(lambda x : (x * 9/5) + 32 , celsius))
print(farenheit)