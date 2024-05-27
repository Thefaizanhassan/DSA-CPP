def generate_series(n):
    # Initialize the first two terms
    a, b = 0, 1
    
    # Print the first two terms
    print(a)
    print(b)
    
    # Generate subsequent terms until the value exceeds 'n'
    while True:
        # Generate the next term
        c = a + b
        
        # Check if the next term exceeds 'n'
        if c >= n:
            break
        
        # Print the next term
        print(c)
        
        # Update the values of 'a' and 'b' for the next iteration
        a, b = b, c

# Test the function
n = int(input("Enter the value of n: "))
generate_series(n)

