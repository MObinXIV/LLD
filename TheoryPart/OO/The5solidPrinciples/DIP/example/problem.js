// Every time we change the way of payment we change these lines , imagine this happens in real api

class Store
{
    constructor(user){

        this.Paypal=new Paypal()
        this.user=user
        //this.stripe= new Stripe(user) // Access the stripe API directly 
    }
    
    purchaseBike(quantity){

       // this.stripe.makePayment(200*quantity*100);

       this.Paypal.makePayment(this.user,200*quantity)
    }

    purchaseHelmet(quantity){
        this.Paypal.makePayment(this.user,15*quantity)
       // this.stripe.makePayment(15*quantity*100);
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

const store= new Store('John')

store.purchaseBike(2)
store.purchaseHelmet(2)