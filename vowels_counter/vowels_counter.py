def count_vowels(str):
    counter = 0
    vowels = ["a", "e", "i", "o", "u"]
    for ch in str:
        if ch.lower() in vowels:
            counter += 1

    return counter


if __name__ == "__main__":
    print(count_vowels("Eelebration"))
