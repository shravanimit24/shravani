# Romantic Code Block

def generate_love_message(name):
    # A list of sweet messages
    messages = [
        f"Hey {name}, you light up my life!",
        f"Every moment with you is a treasure, {name}.",
        f"Thinking of you always brings a smile to my face, {name}.",
        f"You're my sunshine, {name}.",
        f"With you, every day is a beautiful adventure, {name}."
    ]

    # Return a random message from the list
    import random
    return random.choice(messages)

# User input
loved_one = input("Enter your loved one's name: ")

# Generate and print the love message
print(generate_love_message(loved_one))
