// we are using js for this example cuz it is the easiest way to demonstrate the singleton pattern

class Singleton {
    constructor() {
        if (Singleton.instance == null) {
            Singleton.instance = this;
        }
        return Singleton.instance;
    }
    logPersonMessage(personNumber) {
        console.log(`${personNumber} is using the fridge`);
    }
}

const singleton = new Singleton();
Object.freeze(singleton);

// first user
function user1() {
    singleton.logPersonMessage("I'm the first person and I'm ");
}

// second user
function user2() {
    singleton.logPersonMessage("I'm the second person and I'm ");
}

//main program

user1();
user2();