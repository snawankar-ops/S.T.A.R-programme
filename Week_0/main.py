class Microwave:
    def __init__(self,brand:str,power_rating:str):
        self.brand = brand
        self.power_rating = power_rating
        self.turned_on:bool = False
    
    def turn_on(self):
        if self.turned_on:
            print(f"The {self.brand} microwave is already turned on.")
        else:
            self.turned_on = True
            print(f"The {self.brand} microwave is now turned on.")

    def turn_off(self):
        if not self.turned_on:
            print(f"The {self.brand} microwave is already turned off.")
        else:
            self.turned_on = False
            print(f"The {self.brand} microwave is now turned off.")

    def run(self,seconds:int):
        if self.turned_on:
            print(f"The {self.brand} microwave is running for {seconds} seconds.")
        else:
            print(f"Cannot run the {self.brand} microwave because it is turned off.")

    def __add__(self, other):
        return f'{self.brand} + {other.brand}'
    
    def __mul__(self, other):
        return f'{self.brand} * {other.brand}'
    
    
    #__str__ is short for string representation and is used when we wanna print the instance of a class how we want it to be represented as a string.   
    def __str__(self):
        return f'Microwave(brand={self.brand}, power_rating={self.power_rating})'


    def __repr__(self):
        return 'REPR'


smeg: Microwave = Microwave(brand='Smeg', power_rating="1000W")
print(smeg)
# print(smeg.brand)
# print(smeg.power_rating)

bosch = Microwave(brand='Bosch', power_rating="1200W")

# print(bosch.brand)
# print(bosch.power_rating)

# smeg.turn_on()
# smeg.run(30)
# smeg.turn_off()
# smeg.run(30)

print(smeg + bosch)
print(smeg * bosch)
print (repr(smeg))
