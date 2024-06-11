import sys


def count_vowels(str):
    counter = 0
    vowels = ["a", "e", "i", "o", "u"]
    for ch in str:
        if ch.lower() in vowels:
            counter += 1

    return counter


if __name__ == "__main__":
    if len(sys.argv) > 1:
        word = sys.argv[1]
        print(f"Number of vowels: {count_vowels(word)}")
    else:
        print("No word was provided.")
