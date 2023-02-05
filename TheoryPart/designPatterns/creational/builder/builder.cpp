/*
Pattern approach(from uml ):
1- product -> this is the product we're going to build , as we see 
2- builder -> abstract class which 'll be the interface for the functions which 'll be implemented using concerete class builder
3- concrete builder -> Implement the functions in builder interface , work as the laptop type 
4- director -> the person 'll generate desktop , used to and it may be the person so we may implement it in main 
*/

#include<iostream>
#include<string>
using namespace std;

// product class -> contains the components & set them  
// Here it contains all the parts of the desktop
class Desktop
{

    string monitor;
    string keyBoard;
    string mouse;
    string speaker;
    string ram;
    string preprocessor;
    string motherBoard;

    public:

    void setMonitor(string monitor){
        this->monitor=monitor;
    }

    void setKeyBoard (string keyBoard){

        this->keyBoard=keyBoard;
    }

    void setMouse (string mouse){
        this->mouse=mouse;
    }

    void setSpeaker(string speaker){
        this->speaker=speaker;
    }

    void setRam(string ram){
        this->ram=ram;
    }

    void setPreprocessor(string preprocessor){
        this->preprocessor=preprocessor;
    }

    void setMotherBoard(string motherBoard){
        this->motherBoard=motherBoard;
    }

    void showSpecs(){
        cout<<"---------------------------------------------"<<endl;

        cout<<"Monitor "<<monitor<<endl;
        cout<<"keyboard "<<keyBoard<<endl;

        cout<<"Mouse "<<mouse<<endl;

        cout<<"Speaker "<<speaker<<endl;

        cout<<"Ram "<<ram<<endl;

        cout<<"preprocessor "<<preprocessor<<endl;

        cout<< "MotherBoard "<<motherBoard<<endl;
        cout << "---------------------------------------------" << endl;
    }

};


// Builder which 'll implement the product class in details 

// it's an interface which has all the building functionalities to our different products 
class desktopBuilder
{

    protected:
        Desktop *desktop; // We need to use it in our concrete builders to so we set it as protected

    public:

    desktopBuilder()
    {
        desktop=new Desktop();
    }

        virtual void buildMonitor()=0;
        virtual void buildKeyBoard()=0;
        virtual void buildMouse()=0;

        virtual void buildSpeaker()=0;

        virtual void buildRam ()=0;

        virtual void buildProcessor()=0;

        virtual void buildMotherBoard()=0;

        virtual Desktop*getDesktop(){return desktop;}
};



// Concrete builders which implement builder


// build dell product components
class dellDesktopBuilder : public desktopBuilder
{
    void buildMonitor(){
        desktop->setMonitor("Dell Monitor");
    }

    void buildKeyBoard(){
        desktop->setSpeaker("Dell KeyBoard");
    }

   void buildSpeaker(){
    desktop->setKeyBoard("Dell Speaker");
   }

   void buildRam()
   {
    desktop->setRam("Dell Ram");

   }
   void buildProcessor(){
    desktop->setPreprocessor("CoreI7");
   }
   void buildMotherBoard(){
    desktop->setMotherBoard("dellMotherBoard");
   }

   void buildMouse()
   {
        desktop ->setMouse("dellMOuse");
   }
};




class HPDesktopBuilder : public desktopBuilder
{
   void buildMonitor()
   {
    desktop->setMonitor("HP Monitor");
   }

   void buildKeyBoard()
   {
    desktop->setSpeaker("HP KeyBoard");
   }

   void buildSpeaker()
   {
    desktop->setKeyBoard("HP Speaker");
   }

   void buildRam()
   {
    desktop->setRam("HP Ram");
   }
   void buildProcessor()
   {
    desktop->setPreprocessor("CoreI7");
   }
   void buildMotherBoard()
   {
    desktop->setMotherBoard("HpMotherBoard");
   }

   void buildMouse()
   {
    desktop->setMouse("HpMOuse");
   }
};

// Director which handle the builder , it uses th builder to build a product
// generation of components , and build process
class desktopDirector
{

        private:
         desktopBuilder* deskBuilder; // use a builder

         public:
         // assign builder in constructor
             desktopDirector(desktopBuilder *deskBuilder){
                this->deskBuilder=deskBuilder;
             }

    // build the product
             Desktop* buildDesktop(){
                deskBuilder->buildMonitor();
                deskBuilder->buildKeyBoard();
                deskBuilder->buildMouse();
                deskBuilder->buildMotherBoard();
                deskBuilder->buildProcessor();
                deskBuilder->buildRam();
                deskBuilder->buildSpeaker();

                return deskBuilder->getDesktop();
             }
};


int main ()
{

    // initialize our builder type product

    HPDesktopBuilder*hpDesk=new HPDesktopBuilder();

    dellDesktopBuilder*dellDesk=new dellDesktopBuilder();

    // passing them to director to build them

    desktopDirector* desk1=new desktopDirector(hpDesk);

    desktopDirector *desk2=new desktopDirector(dellDesk);


// use director to build the product and assign it to the base product to show the final product configuration

     Desktop*desktop1= desk1->buildDesktop();

     Desktop *desktop2=desk2 ->buildDesktop();

        
        desktop1->showSpecs();

        desktop2->showSpecs();



    delete hpDesk;
    delete dellDesk;

    delete desk1;

    delete desk2;

    
}