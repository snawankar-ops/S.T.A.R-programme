from pyclbr import Class


class Dog:

    #defined the class attribute
    species = "Canis familiaris"

    def __init__(self, name:str , age:int):
        self.name = name
        self.age = age

    def __str__(self):
        return f"Dog(name={self.name}, age={self.age})"

    # Instance method
    def description(self):
        return f"{self.name} is {self.age} years old"

    # Another instance method
    def speak(self, sound):
        return f"{self.name} says {sound}"
    
class Puppy(Dog):
    def __init__(self, name:str, age:int, breed:str):
        super().__init__(name, age)
        self.breed = breed
        
    def __str__(self):
        return f"Puppy(name={self.name}, age={self.age}, breed={self.breed})"

cherry = Puppy("Cherry", 1, "Golden Retriever")
print(cherry)
        
    
miles = Dog("Miles", 4)
buddy = Dog("Buddy", 9)

# miles.age = 10
# miles.species = "felis silvestris"
# print(miles.name)
# print(miles.age)
# print(miles.species)


miles.description()
#'Miles is 4 years old'

miles.speak("Woof Woof")
#'Miles says Woof Woof'

miles.speak("Bow Wow")
#'Miles says Bow Wow'

names = ["Miles", "Buddy", "Jack"]
print(names)

print(miles)

print(type(miles))

print(isinstance(miles, Dog))