class MarksOutOfRangeError(Exception):
    pass

class Student:
    def __init__(self, name, roll_number):
        self.name = name
        self.roll_number = roll_number
        self.marks = {}

    def add_marks(self, subject, marks):
        if marks > 100:
            raise MarksOutOfRangeError("Marks cannot be greater than 100.")
        self.marks[subject] = marks

    def display_details(self):
        print("Name:", self.name)
        print("Roll Number:", self.roll_number)
        print("Marks:")
        for subject, marks in self.marks.items():
            print(subject + ":", marks)


try:
    name = input("Enter student's name: ")
    roll_number = input("Enter student's roll number: ")

    student = Student(name, roll_number)

    subjects = ["Physics", "Chemistry", "Mathematics", "English", "Computer Science"]

    for subject in subjects:
        marks = int(input("Enter marks obtained in {}: ".format(subject)))
        student.add_marks(subject, marks)

    print("\nStudent Details:")
    student.display_details()

except ValueError:
    print("Please enter valid marks as integers.")
except MarksOutOfRangeError as e:
    print(e)
