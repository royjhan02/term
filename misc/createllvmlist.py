#Write python code to read 1 line at a time from file called llvmlibs and search for a pattern that matches the following:
# /usr/lib/llvm-14/lib/lib<string>.a and extract the string and print it out.

import re
import sys

def extract_lib_name(file_path):
    pattern = r'(?<=/usr/lib/llvm-14/lib/lib)(.*)(?=.a)'
    try:
        with open(file_path, 'r') as file:
            c_code = file.read()
            matches = re.findall(pattern, c_code)
            print(matches)
            #Write the list to a file called llvmlibs.txt in the format of one library name per line
            with open('llvmlibs.txt', 'w') as output_file:
                for match in matches:
                    output_file.write(match + '\n')
    except FileNotFoundError:
        print(f"File not found: {file_path}")

if __name__ == '__main__':
    if len(sys.argv) != 2:
        print("Usage: python createllvmlist.py <file_path>")
        sys.exit(1)
    
    file_path = sys.argv[1]
    extract_lib_name(file_path)
