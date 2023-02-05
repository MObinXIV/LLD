class BoolQuestion{

    constructor(description) {
        this.description=description
    }

    printQuestionChoices(){
        console.log('1. True');
                console.log('2. false');
    }
}

class multiChoice
{
    constructor(description,options){
        this.description=description;
        this.options=options
    }

    printQuestionChoices(){
         this.options.forEach((option,index)=>{
                        console.log(`${index+1}. ${option}`);
                    })
    }
}

class TextQuestion
{
    constructor(description) {
        this.description=description
    }
    printQuestionChoices(){
                    console.log('Answer:_____________________');
    }
}

class RangeQuestion
{
    constructor(description) {
        this.description=description
    }
    printQuestionChoices(){
        console.log('minimum:_________________');
                  console.log('maximum:_________________');
    }
}


// Here we use one function print all question whenEver we change , the function code 'll remain the same at the end

function printQuiz(questions){
    questions.forEach(question => {
        console.log(question.description);
        question.printQuestionChoices()
        console.log('');
    });
}

const questions=[
    new BoolQuestion('This a useful vid'),

    new multiChoice('What is your favourite lanaguage',
        ['Css','Html','Js']),

        new TextQuestion('descripe your favourite Js feature'),

        // Add new range question , then make new class for it 
        new RangeQuestion('What is the speed limit in your city')
]

printQuiz(questions)