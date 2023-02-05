
function printQuiz(questions)
{

    questions.forEach(question => {
        console.log(question.description);

        switch (question.type){
            case 'boolean':
                console.log('1. True');
                console.log('2. false');
                break;
                
                case 'multiChoice':
                    question.options.forEach((option,index)=>{
                        console.log(`${index+1}. ${option}`);
                    })
                    break

                    case 'text':
                        console.log('Answer:_____________________');
                        break

                        // violating Ocp here by adding to our old code every time we have new feature
                        case 'range':
                            console.log('minimum:_________________');
                            console.log('maximum:_________________');

        }
        console.log('');
    });
}

const questions =[
    {
        type:'boolean',
        description:'This a useful vid'
    },
    {
        type:'multiChoice',
        description:'What is your favourite lanaguage',
        options:['Css','Html','Js']

    },

    {
        type:'text',

        description:'descripe your favourite Js feature'
    },

    // Add new feature 'll need to add it to the function too
    {
        type:'range',
        description:'What is the speed limit in your city'
    }
]


printQuiz(questions)