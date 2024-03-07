def modify_string(input_str):
    modified_str = ""
    for index, char in enumerate(input_str):
        if index % 2 == 0:
            modified_str += char.upper()
        else:
            modified_str += char.lower()
    return modified_str

# Get input from the user
user_input = input("Enter a string: ")

# Modify the string and print the result
result = modify_string(user_input)
print("Modified string:", result)
