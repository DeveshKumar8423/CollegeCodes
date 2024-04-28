import matplotlib.pyplot as plt

marks = [11,20,70,50,30,70,54]
plt.bar(range(len(marks)) , marks , color = 'skyblue')

plt.title("Marks of 8 students")
plt.xlabel('Student')
plt.ylabel('Marks')

plt.show()