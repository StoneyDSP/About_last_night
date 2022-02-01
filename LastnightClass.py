class About_last_night:
    """What happened last night?"""

    def __init__(self, amt, ml, abv, prc):
        """Constructor"""
        self.amt = amt
        self.ml = ml
        self.abv = abv
        self.prc = prc

print("ABOUT LAST NIGHT... (v0.01)")
print("\n")
print("*** DISCLAIMER - this application can only provide you with approximations, and should not be taken as medical guidance.\nPlease consult your GP for more information about alcohol consumption. ***")
print("\n")

while True:

    print("Select drink.")
    print("\n")
    print("1.Beer")
    print("2.Wine")
    print("3.Liquor")
    print("\n")


    choice = input("Enter Choice(1/2/3): ")

    if choice in ('1', '2', '3'):
        amt = float(input("\nHow many servings did you have? "))
        ml = float(input("\nHow many millilitres per serving? "))
        abv = float(input("\nWhat was the Alcohol percentage on the label? "))
        prc = float(input("\nHow much did this beverage cost per serving? "))
        unt = abv * ml / 1000 * amt
        
        if choice == '1':
            print("\n")
            print("You drank a total of", round(amt, 2), "servings of", round(abv, 2), "% beer, at", round(ml, 2), "ml per serving;\nYou drank a total of", round(unt, 2), "units of alcohol.\nYou drank a total of", ml * amt, "ml of this beverage.\nYou spent a total of", prc * amt, "on this beverage.")

        elif choice == '2':
            print("\n")
            print("You drank a total of", round(amt, 2), "servings of", round(abv, 2), "% wine, at", round(ml, 2), "ml per serving;\nYou drank a total of", round(unt, 2), "units of alcohol.\nYou drank a total of", ml * amt, "ml of this beverage.\nYou spent a total of", prc * amt, "on this beverage.")

        elif choice == '3':
            print("\n")
            print("You drank a total of", round(amt, 2), "servings of", round(abv, 2), "% liquor, at", round(ml, 2), "ml per serving;\nYou drank a total of", round(unt, 2), "units of alcohol.\nYou drank a total of", ml * amt, "ml of this beverage.\nYou spent a total of", prc * amt, "on this beverage.")

    else:
        print("Invalid Input")
        continue

    next_calculation = input("\nDo you want to calculate another drink? (yes/no): ")

    if next_calculation == "yes":
        continue

    elif next_calculation == "no":
        break

    else:
        print("Invalid Input")
        continue
