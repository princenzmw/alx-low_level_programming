# Function to check if a number is palindrome
def is_palindrome(number):
    str_number = str(number)
    return str_number == str_number[::-1]

# Find the largest palindrome made from the product of two 3-digit numbers
largest_palindrome = 0
for i in range(100, 1000):
    for j in range(100, 1000):
        product = i * j
        if is_palindrome(product) and product > largest_palindrome:
            largest_palindrome = product

# Save the result in the file '102-result'
with open('102-result', 'w') as file:
    file.write(str(largest_palindrome))
