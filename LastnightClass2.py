class About_last_night:
    """What happened last night?"""

    def __init__(self, amt, ml, abv):
        """Constructor"""
        self.amt = amt
        self.ml = ml
        self.abv = abv

print("Select drink.")
print("\n")
print("1.Beer")
print("2.Wine")
print("3.Liquor")
print("\n")

product = About_last_night(abv) * About_last_nigh(ml) / 1000 * About_last_night(amt)

while True:
    choice = input("Enter Choice(1/2/3): ")

    if choice in ('1', '2', '3'):
        amt = float(input("\nHow many did servings did you have? "))
        ml = float(input("\nHow many millilitres per serving? "))
        abv = float(input("\nWhat was the Alcohol percentage on the label? "))

        if choice == '1':
            print("\n")
            print("You drank", amt, "servings of", abv, "% beer, of", ml, "milliltres per serving;\nA total of", product, "units of alcohol")

        elif choice == '2':
            print("\n")
            print("You drank", amt, "servings of wine, of", ml, "millitres each;\nA total of", abv * ml / 1000 * amt, "units of alcohol")

        elif choice == '3':
            print("\n")
            print("You drank", amt, "servings of liquor, of", ml, "millitres each;\nA total of", abv * ml / 1000 * amt, "units of alcohol")

        next_calculation = input("\nDo you want to calculate another drink? (yes/no): ")

        if next_calculation != "yes" or "no":
            print("Invalid Input")
            input("\nDo you want to calculate another drink? (yes/no): ")

        elif next_calculation == "yes":
            continue

        elif next_calculation == "no":
            break
        
