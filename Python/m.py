import math
b = int(input("Enter the number of students: "))
a = int(input("Enter the number of subjects: "))
dic = {}

for i in range(b):
    f = input("Enter the name of the student: ")
    marks = {}  # Create a new marks dictionary for each student
    for j in range(a):
        l = input("Enter the name of the subject: ")
        m = int(input("Enter the marks of the student: "))
        marks[l] = m
    dic[f] = marks

print("\nDictionary of students and their marks:")
print(dic)

for student, subject_marks in dic.items():
    total_marks = sum(subject_marks.values())
    total_subjects = len(subject_marks)
    
    # Calculate percentage for each student
    percentage = (total_marks / (total_subjects * 100)) * 100
    
    print(f"\n{student}'s Total Marks: {total_marks}")
    print(f"{student}'s Percentage: {percentage}%")
    