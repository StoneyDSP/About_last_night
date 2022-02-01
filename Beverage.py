class Beverage:
    """Docstring"""

    # Class Attributes

    beer = "Beer"
    wine = "Wine"
    liquor = "Liquor"

    # Instance Attributes

    def __init__(self, amt, ml, abv, prc):
        """Constructor"""
        self.amt = amt
        self.ml = ml
        self.abv = abv
        self.prc = prc

# Instantiate the Beverage class
drink_1 = Beverage(4, 330, 5.5, 3.50)
drink_2 = Beverage(1, 500, 12.5, 6)

# Access the class attributes
print("Beer1 is a {}".format(drink_1.__class__.beer))
print("wine is a {}".format(drink_2.__class__.wine))

# Access the instance attributes
print("Beer is {}% per {}ml".format( drink_1.abv, drink_1.ml))
print("Wine is {}% per {}".format( drink_2.abv, drink_2.ml))

