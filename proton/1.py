import re
import sys

def extract_information(trace_file):
    output_data = []
    found_loop_head = False  # Flag to track the first occurrence of loop_head

    with open(trace_file, 'r') as file:
        for line in file:
            function_call_match = re.search(r'__VERIFIER_(reached_control|control_true|control_false|loop_head)\((\d+), "([^"]+)",', line)
            if function_call_match:
                control_type = function_call_match.group(1)
                line_number = function_call_match.group(2)
                function_name = function_call_match.group(3)

                # Map control type to new format
                if control_type == 'reached_control':
                    control_type = 'reachedControl'
                elif control_type == 'control_true':
                    control_type = 'trueBranch'
                elif control_type == 'control_false':
                    control_type = 'falseBranch'
                elif control_type == 'loop_head':
                    control_type = 'loopHead'
                    # if not found_loop_head:
                    #     found_loop_head = True  # Set the flag after first loop_head

                output_data.append(f"{function_name} {line_number} {control_type}")

    return output_data

def process_data(extracted_data):
    first_loop_head = ''
    for item in extracted_data:
        if 'loopHead' in item:
            loop_head_line_number = item.split(' ')[1]
            #Go back in extracted_data and find the first reachedControl with the same line number
            for item in extracted_data:
                if 'reachedControl' in item and loop_head_line_number in item:
                    #Insert "enteringLasso" just before this reachedControl
                    extracted_data.insert(extracted_data.index(item), "enteringLasso")
                    return extracted_data
                    #break
    return extracted_data

def write_output(output_data, output_file):
    with open(output_file, 'w') as file:
        for item in output_data:
            file.write(item + '\n')

if __name__ == "__main__":
    trace_file = sys.argv[1]
    output_file = 'tr_output.txt'

    extracted_data = extract_information(trace_file)
    processed_data = process_data(extracted_data)
    write_output(processed_data, output_file)
    #Print processed data
    for item in processed_data:
        print(item)

