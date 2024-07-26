import sys

full_sign = "#"
empty_sign = " "

class Letters:
    letters = {
        "E" : [[1,1,1],
            [1,0,0],
            [1,1,0],
            [1,0,0],
            [1,1,1]]
        }
    def get_letter(l):
        return Letters.letters[l]
    
    def create_text(letters_to_join, space_between = 1):
        
        if not letters_to_join:
            print("letters not given")
            sys.exit(1)
        
        lines = []
        for _ in range(len(Letters.get_letter(letters_to_join[0]))):
            lines.append([])
        
        for letter in letters_to_join:
            letter_lines = Letters.get_letter(letter)
            for i in range(len(letter_lines)):
                lines[i].extend(letter_lines[i])
                for _ in range(space_between):
                    lines[i].append(0)
        
        return lines
    
def main():
    # print lines
    lines = Letters.create_text("EE")
    for line in lines:
        for char in line:
            if char == 1:
                print(full_sign, end="")
            else:
                print(empty_sign, end="")
        print()

if __name__ == "__main__":
    try:
        main()
    except Exception as e:
        print(f"Error: {e}")
