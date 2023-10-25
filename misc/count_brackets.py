import sys

# Function to count opening curly braces
def count_opening_curly_braces(input_string):
    count = input_string.count('}')
    return count

def main():
    print("Hello World!")
    if len(sys.argv) != 2:
        print("Usage: python count_curly_braces.py 'your_string'")
        sys.exit(1)

    input_string = sys.argv[1]
    brace_count = count_opening_curly_braces(input_string)

    print(f'Number of opening curly braces in the provided string: {brace_count}')

if __name__ == '__main__':
    main()

