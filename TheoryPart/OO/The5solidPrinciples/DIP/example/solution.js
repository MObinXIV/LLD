// Every time we change the way of payment we change these lines , imagine this happens in real api

class Store
{
    constructor(paymentProcessor){

        this.paymentProcessor= paymentProcessor
    }
    
    purchaseBike(quantity){

       this.paymentProcessor.pay(200 * quantity)
    }

    purchaseHelmet(quantity){
               this.paymentProcessor.pay(15 * quantity)

    }
}

class StripePaymentProcessor
{
    constructor(user){
        this.stripe=new Stripe(user)
    }

    pay (amountInDollar){
        this.stripe.makePayment(amountInDollar*100)
    }
}

class Stripe{
    constructor(user){
        this.user=user
    }

    makePayment(amountInCents){
        console.log(`${this.user} made payment of ${amountInCents/100} with stripe`);
    }
}

class Paypal
{
    makePayment(user,amountInDollar)
    {
        console.log(`${user} made payment of ${amountInDollar} with paypal`);
    }
}

class PaypalPaymentProcessor
{
    constructor(user){
    this.user=user
    this.paypal=new Paypal();
    }

    pay (amountInDollar){
        this.paypal.makePayment(this.user,amountInDollar*100)
    }
}
const store= new Store(new PaypalPaymentProcessor('John'))

store.purchaseBike(2)
store.purchaseHelmet(2)